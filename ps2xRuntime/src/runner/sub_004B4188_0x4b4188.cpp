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

// Function: sub_004B4188
// Address: 0x4b4188 - 0x4b41f0
void sub_004B4188_0x4b4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4188_0x4b4188");
#endif

    switch (ctx->pc) {
        case 0x4b4188u: goto label_4b4188;
        case 0x4b418cu: goto label_4b418c;
        case 0x4b4190u: goto label_4b4190;
        case 0x4b4194u: goto label_4b4194;
        case 0x4b4198u: goto label_4b4198;
        case 0x4b419cu: goto label_4b419c;
        case 0x4b41a0u: goto label_4b41a0;
        case 0x4b41a4u: goto label_4b41a4;
        case 0x4b41a8u: goto label_4b41a8;
        case 0x4b41acu: goto label_4b41ac;
        case 0x4b41b0u: goto label_4b41b0;
        case 0x4b41b4u: goto label_4b41b4;
        case 0x4b41b8u: goto label_4b41b8;
        case 0x4b41bcu: goto label_4b41bc;
        case 0x4b41c0u: goto label_4b41c0;
        case 0x4b41c4u: goto label_4b41c4;
        case 0x4b41c8u: goto label_4b41c8;
        case 0x4b41ccu: goto label_4b41cc;
        case 0x4b41d0u: goto label_4b41d0;
        case 0x4b41d4u: goto label_4b41d4;
        case 0x4b41d8u: goto label_4b41d8;
        case 0x4b41dcu: goto label_4b41dc;
        case 0x4b41e0u: goto label_4b41e0;
        case 0x4b41e4u: goto label_4b41e4;
        case 0x4b41e8u: goto label_4b41e8;
        case 0x4b41ecu: goto label_4b41ec;
        default: break;
    }

    ctx->pc = 0x4b4188u;

label_4b4188:
    // 0x4b4188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b418c:
    // 0x4b418c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4b4190:
    // 0x4b4190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b4194:
    // 0x4b4194: 0xc0c1f08  jal         func_307C20
label_4b4198:
    if (ctx->pc == 0x4B4198u) {
        ctx->pc = 0x4B4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4194u;
        // 0x4b4198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B419Cu;
        goto label_4b419c;
    }
    ctx->pc = 0x4B4194u;
    SET_GPR_U32(ctx, 31, 0x4B419Cu);
    ctx->pc = 0x4B4198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4194u;
    // 0x4b4198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B4194u, 0x4B419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B419Cu;
label_4b419c:
    // 0x4b419c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4b419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_4b41a0:
    // 0x4b41a0: 0x8c627c80  lw          $v0, 0x7C80($v1)
    ctx->pc = 0x4b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31872)));
label_4b41a4:
    // 0x4b41a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4b41a8:
    if (ctx->pc == 0x4B41A8u) {
        ctx->pc = 0x4B41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41A4u;
        // 0x4b41a8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41ACu;
        goto label_4b41ac;
    }
    ctx->pc = 0x4B41A4u;
    {
        const bool branch_taken_0x4b41a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41A4u;
        // 0x4b41a8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b41a4) {
            ctx->pc = 0x4B41CCu;
            goto label_4b41cc;
        }
    }
    ctx->pc = 0x4B41ACu;
label_4b41ac:
    // 0x4b41ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b41acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b41b0:
    // 0x4b41b0: 0x2484ee50  addiu       $a0, $a0, -0x11B0
    ctx->pc = 0x4b41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
label_4b41b4:
    // 0x4b41b4: 0xc12d25c  jal         func_4B4970
label_4b41b8:
    if (ctx->pc == 0x4B41B8u) {
        ctx->pc = 0x4B41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41B4u;
        // 0x4b41b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41BCu;
        goto label_4b41bc;
    }
    ctx->pc = 0x4B41B4u;
    SET_GPR_U32(ctx, 31, 0x4B41BCu);
    ctx->pc = 0x4B41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B41B4u;
    // 0x4b41b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4970u, 0x4B41B4u, 0x4B41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B41BCu;
label_4b41bc:
    // 0x4b41bc: 0xc0c1f1c  jal         func_307C70
label_4b41c0:
    if (ctx->pc == 0x4B41C0u) {
        ctx->pc = 0x4B41C4u;
        goto label_4b41c4;
    }
    ctx->pc = 0x4B41BCu;
    SET_GPR_U32(ctx, 31, 0x4B41C4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B41BCu, 0x4B41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B41C4u;
label_4b41c4:
    // 0x4b41c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b41c8:
    if (ctx->pc == 0x4B41C8u) {
        ctx->pc = 0x4B41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41C4u;
        // 0x4b41c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41CCu;
        goto label_4b41cc;
    }
    ctx->pc = 0x4B41C4u;
    {
        const bool branch_taken_0x4b41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41C4u;
        // 0x4b41c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b41c4) {
            ctx->pc = 0x4B41E0u;
            goto label_4b41e0;
        }
    }
    ctx->pc = 0x4B41CCu;
label_4b41cc:
    // 0x4b41cc: 0x40f809  jalr        $v0
label_4b41d0:
    if (ctx->pc == 0x4B41D0u) {
        ctx->pc = 0x4B41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41CCu;
        // 0x4b41d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41D4u;
        goto label_4b41d4;
    }
    ctx->pc = 0x4B41CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B41D4u);
        ctx->pc = 0x4B41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41CCu;
        // 0x4b41d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B41CCu, 0x4B41D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B41D4u;
label_4b41d4:
    // 0x4b41d4: 0xc0c1f1c  jal         func_307C70
label_4b41d8:
    if (ctx->pc == 0x4B41D8u) {
        ctx->pc = 0x4B41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41D4u;
        // 0x4b41d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41DCu;
        goto label_4b41dc;
    }
    ctx->pc = 0x4B41D4u;
    SET_GPR_U32(ctx, 31, 0x4B41DCu);
    ctx->pc = 0x4B41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B41D4u;
    // 0x4b41d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B41D4u, 0x4B41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B41DCu;
label_4b41dc:
    // 0x4b41dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b41dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b41e0:
    // 0x4b41e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b41e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b41e4:
    // 0x4b41e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b41e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b41e8:
    // 0x4b41e8: 0x3e00008  jr          $ra
label_4b41ec:
    if (ctx->pc == 0x4B41ECu) {
        ctx->pc = 0x4B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41E8u;
        // 0x4b41ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B41F0u;
        goto label_fallthrough_0x4b41e8;
    }
    ctx->pc = 0x4B41E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41E8u;
        // 0x4b41ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B41E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b41e8:
    ctx->pc = 0x4B41F0u;
}
