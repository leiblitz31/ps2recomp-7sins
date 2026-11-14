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

// Function: sub_001C1FD0
// Address: 0x1c1fd0 - 0x1c2050
void sub_001C1FD0_0x1c1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FD0_0x1c1fd0");
#endif

    switch (ctx->pc) {
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2034u: goto label_1c2034;
        default: break;
    }

    ctx->pc = 0x1c1fd0u;

    // 0x1c1fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c1fdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c1fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c1fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fe4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1FE4u;
    {
        const bool branch_taken_0x1c1fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1fe4) {
            ctx->pc = 0x1C2034u;
            goto label_1c2034;
        }
    }
    ctx->pc = 0x1C1FECu;
    // 0x1c1fec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1ff8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1ffc: 0xc070840  jal         func_1C2100
    ctx->pc = 0x1C1FFCu;
    SET_GPR_U32(ctx, 31, 0x1C2004u);
    ctx->pc = 0x1C2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2100u, 0x1C1FFCu, 0x1C2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2004u;
label_1c2004:
    // 0x1c2004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200c: 0xc070814  jal         func_1C2050
    ctx->pc = 0x1C200Cu;
    SET_GPR_U32(ctx, 31, 0x1C2014u);
    ctx->pc = 0x1C2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2050u, 0x1C200Cu, 0x1C2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2014u;
label_1c2014:
    // 0x1c2014: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2018: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c201c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c201cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c2020: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2020u;
    {
        const bool branch_taken_0x1c2020 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c2020) {
            ctx->pc = 0x1C2034u;
            goto label_1c2034;
        }
    }
    ctx->pc = 0x1C2028u;
    // 0x1c2028: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c202c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C202Cu;
    SET_GPR_U32(ctx, 31, 0x1C2034u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C202Cu, 0x1C2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2034u;
label_1c2034:
    // 0x1c2034: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c203c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c2040: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2048u;
    // 0x1c2048: 0x0  nop
    ctx->pc = 0x1c2048u;
    // NOP
    // 0x1c204c: 0x0  nop
    ctx->pc = 0x1c204cu;
    // NOP
    ctx->pc = 0x1c2050u;
}
