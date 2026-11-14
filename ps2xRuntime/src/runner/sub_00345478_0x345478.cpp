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

// Function: sub_00345478
// Address: 0x345478 - 0x3454f8
void sub_00345478_0x345478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345478_0x345478");
#endif

    switch (ctx->pc) {
        case 0x34549cu: goto label_34549c;
        case 0x3454acu: goto label_3454ac;
        case 0x3454bcu: goto label_3454bc;
        case 0x3454ccu: goto label_3454cc;
        case 0x3454dcu: goto label_3454dc;
        default: break;
    }

    ctx->pc = 0x345478u;

    // 0x345478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34547c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34547cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x345480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x345480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x345484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34548c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34548cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345494: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x345494u;
    SET_GPR_U32(ctx, 31, 0x34549Cu);
    ctx->pc = 0x345498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345494u;
    // 0x345498: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x345494u, 0x34549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34549Cu;
label_34549c:
    // 0x34549c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454a0: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x3454a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3454a4: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3454A4u;
    SET_GPR_U32(ctx, 31, 0x3454ACu);
    ctx->pc = 0x3454A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454A4u;
    // 0x3454a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3454A4u, 0x3454ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454ACu;
label_3454ac:
    // 0x3454ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3454acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454b0: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x3454b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3454b4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3454B4u;
    SET_GPR_U32(ctx, 31, 0x3454BCu);
    ctx->pc = 0x3454B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454B4u;
    // 0x3454b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3454B4u, 0x3454BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454BCu;
label_3454bc:
    // 0x3454bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3454bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454c0: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x3454c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x3454c4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3454C4u;
    SET_GPR_U32(ctx, 31, 0x3454CCu);
    ctx->pc = 0x3454C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454C4u;
    // 0x3454c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3454C4u, 0x3454CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454CCu;
label_3454cc:
    // 0x3454cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3454ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454d0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3454d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3454d4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3454D4u;
    SET_GPR_U32(ctx, 31, 0x3454DCu);
    ctx->pc = 0x3454D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454D4u;
    // 0x3454d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3454D4u, 0x3454DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454DCu;
label_3454dc:
    // 0x3454dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3454dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3454e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3454e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3454e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3454e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3454e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3454ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3454ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3454F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454ECu;
        // 0x3454f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3454ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3454F4u;
    // 0x3454f4: 0x0  nop
    ctx->pc = 0x3454f4u;
    // NOP
    ctx->pc = 0x3454f8u;
}
