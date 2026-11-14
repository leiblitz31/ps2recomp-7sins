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

// Function: sub_003785A0
// Address: 0x3785a0 - 0x378600
void sub_003785A0_0x3785a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003785A0_0x3785a0");
#endif

    switch (ctx->pc) {
        case 0x3785a0u: goto label_3785a0;
        case 0x3785a4u: goto label_3785a4;
        case 0x3785a8u: goto label_3785a8;
        case 0x3785acu: goto label_3785ac;
        case 0x3785b0u: goto label_3785b0;
        case 0x3785b4u: goto label_3785b4;
        case 0x3785b8u: goto label_3785b8;
        case 0x3785bcu: goto label_3785bc;
        case 0x3785c0u: goto label_3785c0;
        case 0x3785c4u: goto label_3785c4;
        case 0x3785c8u: goto label_3785c8;
        case 0x3785ccu: goto label_3785cc;
        case 0x3785d0u: goto label_3785d0;
        case 0x3785d4u: goto label_3785d4;
        case 0x3785d8u: goto label_3785d8;
        case 0x3785dcu: goto label_3785dc;
        case 0x3785e0u: goto label_3785e0;
        case 0x3785e4u: goto label_3785e4;
        case 0x3785e8u: goto label_3785e8;
        case 0x3785ecu: goto label_3785ec;
        case 0x3785f0u: goto label_3785f0;
        case 0x3785f4u: goto label_3785f4;
        case 0x3785f8u: goto label_3785f8;
        case 0x3785fcu: goto label_3785fc;
        default: break;
    }

    ctx->pc = 0x3785a0u;

label_3785a0:
    // 0x3785a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3785a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3785a4:
    // 0x3785a4: 0x8f83a8a0  lw          $v1, -0x5760($gp)
    ctx->pc = 0x3785a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
label_3785a8:
    // 0x3785a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3785a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3785ac:
    // 0x3785ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3785acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3785b0:
    // 0x3785b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3785b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3785b4:
    // 0x3785b4: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3785b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3785b8:
    // 0x3785b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3785b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3785bc:
    // 0x3785bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3785bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3785c0:
    // 0x3785c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3785c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3785c4:
    // 0x3785c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3785c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3785c8:
    // 0x3785c8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3785cc:
    if (ctx->pc == 0x3785CCu) {
        ctx->pc = 0x3785CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785C8u;
        // 0x3785cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3785D0u;
        goto label_3785d0;
    }
    ctx->pc = 0x3785C8u;
    {
        const bool branch_taken_0x3785c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785C8u;
        // 0x3785cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785c8) {
            ctx->pc = 0x3785ECu;
            goto label_3785ec;
        }
    }
    ctx->pc = 0x3785D0u;
label_3785d0:
    // 0x3785d0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3785d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3785d4:
    // 0x3785d4: 0x60f809  jalr        $v1
label_3785d8:
    if (ctx->pc == 0x3785D8u) {
        ctx->pc = 0x3785DCu;
        goto label_3785dc;
    }
    ctx->pc = 0x3785D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3785DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3785D4u, 0x3785DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3785DCu;
label_3785dc:
    // 0x3785dc: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x3785dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
label_3785e0:
    // 0x3785e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3785e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3785e4:
    // 0x3785e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3785e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3785e8:
    // 0x3785e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3785e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3785ec:
    // 0x3785ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3785ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3785f0:
    // 0x3785f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3785f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3785f4:
    // 0x3785f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3785f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3785f8:
    // 0x3785f8: 0x3e00008  jr          $ra
label_3785fc:
    if (ctx->pc == 0x3785FCu) {
        ctx->pc = 0x3785FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785F8u;
        // 0x3785fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378600u;
        goto label_fallthrough_0x3785f8;
    }
    ctx->pc = 0x3785F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3785FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785F8u;
        // 0x3785fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3785F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3785f8:
    ctx->pc = 0x378600u;
}
