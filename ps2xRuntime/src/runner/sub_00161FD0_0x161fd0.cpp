#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161FD0
// Address: 0x161fd0 - 0x1620a0
void sub_00161FD0_0x161fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161FD0_0x161fd0");
#endif

    switch (ctx->pc) {
        case 0x162014u: goto label_162014;
        case 0x16202cu: goto label_16202c;
        case 0x16203cu: goto label_16203c;
        case 0x16204cu: goto label_16204c;
        case 0x162070u: goto label_162070;
        default: break;
    }

    ctx->pc = 0x161fd0u;

    // 0x161fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x161fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x161fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161fe4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x161fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x161fe8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161fec: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x161ff0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x161FF0u;
    {
        const bool branch_taken_0x161ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ff0) {
            ctx->pc = 0x16207Cu;
            goto label_16207c;
        }
    }
    ctx->pc = 0x161FF8u;
    // 0x161ff8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x161ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x161ffc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x161ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162000: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x162000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x162004: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x162004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16200c: 0xc05831c  jal         func_160C70
    ctx->pc = 0x16200Cu;
    SET_GPR_U32(ctx, 31, 0x162014u);
    ctx->pc = 0x160C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160C70u, 0x16200Cu, 0x162014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162014u;
label_162014:
    // 0x162014: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x162014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x162018: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16201c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162020: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162024: 0xc085538  jal         func_2154E0
    ctx->pc = 0x162024u;
    SET_GPR_U32(ctx, 31, 0x16202Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x162024u, 0x16202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16202Cu;
label_16202c:
    // 0x16202c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16202cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162034: 0xc096880  jal         func_25A200
    ctx->pc = 0x162034u;
    SET_GPR_U32(ctx, 31, 0x16203Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x162034u, 0x16203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16203Cu;
label_16203c:
    // 0x16203c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16203cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162040: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162044: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x162044u;
    SET_GPR_U32(ctx, 31, 0x16204Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x162044u, 0x16204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16204Cu;
label_16204c:
    // 0x16204c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x16204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162050: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x162054: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x162054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x162058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16205c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162060: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162064: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x162064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162068: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x162068u;
    SET_GPR_U32(ctx, 31, 0x162070u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x162068u, 0x162070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162070u;
label_162070:
    // 0x162070: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162074: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x162074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162078: 0xa06400e4  sb          $a0, 0xE4($v1)
    ctx->pc = 0x162078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 4));
label_16207c:
    // 0x16207c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16208c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16208cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x162090: 0x3e00008  jr          $ra
    ctx->pc = 0x162090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162098u;
    // 0x162098: 0x0  nop
    ctx->pc = 0x162098u;
    // NOP
    // 0x16209c: 0x0  nop
    ctx->pc = 0x16209cu;
    // NOP
    ctx->pc = 0x1620a0u;
}
