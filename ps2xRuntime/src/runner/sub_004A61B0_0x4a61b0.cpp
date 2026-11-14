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

// Function: sub_004A61B0
// Address: 0x4a61b0 - 0x4a6250
void sub_004A61B0_0x4a61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A61B0_0x4a61b0");
#endif

    switch (ctx->pc) {
        case 0x4a61ccu: goto label_4a61cc;
        case 0x4a61dcu: goto label_4a61dc;
        case 0x4a621cu: goto label_4a621c;
        case 0x4a622cu: goto label_4a622c;
        default: break;
    }

    ctx->pc = 0x4a61b0u;

    // 0x4a61b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a61b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a61b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a61b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a61b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a61bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a61bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a61c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a61c4: 0xc12a47e  jal         func_4A91F8
    ctx->pc = 0x4A61C4u;
    SET_GPR_U32(ctx, 31, 0x4A61CCu);
    ctx->pc = 0x4A61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A61C4u;
    // 0x4a61c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A61C4u, 0x4A61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A61CCu;
label_4a61cc:
    // 0x4a61cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A61CCu;
    {
        const bool branch_taken_0x4a61cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A61CCu;
        // 0x4a61d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a61cc) {
            ctx->pc = 0x4A61E8u;
            goto label_4a61e8;
        }
    }
    ctx->pc = 0x4A61D4u;
    // 0x4a61d4: 0xc12a448  jal         func_4A9120
    ctx->pc = 0x4A61D4u;
    SET_GPR_U32(ctx, 31, 0x4A61DCu);
    ctx->pc = 0x4A61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A61D4u;
    // 0x4a61d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A61D4u, 0x4A61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A61DCu;
label_4a61dc:
    // 0x4a61dc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a61dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a61e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A61E0u;
    {
        const bool branch_taken_0x4a61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A61E0u;
        // 0x4a61e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a61e0) {
            ctx->pc = 0x4A61ECu;
            goto label_4a61ec;
        }
    }
    ctx->pc = 0x4A61E8u;
label_4a61e8:
    // 0x4a61e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a61e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a61ec:
    // 0x4a61ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a61ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a61f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a61f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a61f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a61f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a61f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A61F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A61F8u;
        // 0x4a61fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A61F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6200u;
    // 0x4a6200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a6200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a6204: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a6208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a620c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6214: 0xc12a45c  jal         func_4A9170
    ctx->pc = 0x4A6214u;
    SET_GPR_U32(ctx, 31, 0x4A621Cu);
    ctx->pc = 0x4A6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6214u;
    // 0x4a6218: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x4A6214u, 0x4A621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A621Cu;
label_4a621c:
    // 0x4a621c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A621Cu;
    {
        const bool branch_taken_0x4a621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A621Cu;
        // 0x4a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a621c) {
            ctx->pc = 0x4A6238u;
            goto label_4a6238;
        }
    }
    ctx->pc = 0x4A6224u;
    // 0x4a6224: 0xc12a424  jal         func_4A9090
    ctx->pc = 0x4A6224u;
    SET_GPR_U32(ctx, 31, 0x4A622Cu);
    ctx->pc = 0x4A6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6224u;
    // 0x4a6228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x4A6224u, 0x4A622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A622Cu;
label_4a622c:
    // 0x4a622c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a622cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a6230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A6230u;
    {
        const bool branch_taken_0x4a6230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6230u;
        // 0x4a6234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6230) {
            ctx->pc = 0x4A623Cu;
            goto label_4a623c;
        }
    }
    ctx->pc = 0x4A6238u;
label_4a6238:
    // 0x4a6238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a623c:
    // 0x4a623c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a623cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a6240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6248: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6248u;
        // 0x4a624c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6250u;
}
