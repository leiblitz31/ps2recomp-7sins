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

// Function: sub_00266E80
// Address: 0x266e80 - 0x266f90
void sub_00266E80_0x266e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266E80_0x266e80");
#endif

    switch (ctx->pc) {
        case 0x266eb4u: goto label_266eb4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eecu: goto label_266eec;
        case 0x266f08u: goto label_266f08;
        case 0x266f20u: goto label_266f20;
        case 0x266f48u: goto label_266f48;
        case 0x266f58u: goto label_266f58;
        case 0x266f74u: goto label_266f74;
        default: break;
    }

    ctx->pc = 0x266e80u;

    // 0x266e80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x266e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x266e84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x266e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x266e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266e94: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x266e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x266e98: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x266e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x266e9c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x266e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x266ea0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x266ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x266ea4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x266ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x266ea8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266eac: 0xc099d1c  jal         func_267470
    ctx->pc = 0x266EACu;
    SET_GPR_U32(ctx, 31, 0x266EB4u);
    ctx->pc = 0x267470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267470u, 0x266EACu, 0x266EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EB4u;
label_266eb4:
    // 0x266eb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x266eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x266eb8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x266eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x266ebc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x266ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x266ec0: 0xc041954  jal         func_106550
    ctx->pc = 0x266EC0u;
    SET_GPR_U32(ctx, 31, 0x266EC8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x266EC0u, 0x266EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EC8u;
label_266ec8:
    // 0x266ec8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x266ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x266ecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266ed0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x266ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x266ed4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x266ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266ed8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x266ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x266edc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x266edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ee4: 0xc09a0f8  jal         func_2683E0
    ctx->pc = 0x266EE4u;
    SET_GPR_U32(ctx, 31, 0x266EECu);
    ctx->pc = 0x2683E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2683E0u, 0x266EE4u, 0x266EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EECu;
label_266eec:
    // 0x266eec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ef0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x266ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266ef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266ef8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x266ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266efc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x266efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x266F00u;
    SET_GPR_U32(ctx, 31, 0x266F08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x266F00u, 0x266F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F08u;
label_266f08:
    // 0x266f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f10: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x266f14: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x266f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266f18: 0xc099c18  jal         func_267060
    ctx->pc = 0x266F18u;
    SET_GPR_U32(ctx, 31, 0x266F20u);
    ctx->pc = 0x267060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267060u, 0x266F18u, 0x266F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F20u;
label_266f20:
    // 0x266f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f24: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x266f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x266f28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F28u;
    {
        const bool branch_taken_0x266f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266f28) {
            ctx->pc = 0x266F4Cu;
            goto label_266f4c;
        }
    }
    ctx->pc = 0x266F30u;
    // 0x266f30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x266f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266f34: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x266f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266f38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266f3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x266f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f40: 0xc041934  jal         func_1064D0
    ctx->pc = 0x266F40u;
    SET_GPR_U32(ctx, 31, 0x266F48u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x266F40u, 0x266F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F48u;
label_266f48:
    // 0x266f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266f4c:
    // 0x266f4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266f50: 0xc099bf8  jal         func_266FE0
    ctx->pc = 0x266F50u;
    SET_GPR_U32(ctx, 31, 0x266F58u);
    ctx->pc = 0x266FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266FE0u, 0x266F50u, 0x266F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F58u;
label_266f58:
    // 0x266f58: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x266f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x266f5c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x266f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x266f60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x266f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f6c: 0xc099be4  jal         func_266F90
    ctx->pc = 0x266F6Cu;
    SET_GPR_U32(ctx, 31, 0x266F74u);
    ctx->pc = 0x266F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F90u, 0x266F6Cu, 0x266F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F74u;
label_266f74:
    // 0x266f74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x266f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x266f88: 0x3e00008  jr          $ra
    ctx->pc = 0x266F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F90u;
}
