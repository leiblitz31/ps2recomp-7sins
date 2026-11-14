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

// Function: sub_0041D4E0
// Address: 0x41d4e0 - 0x41d558
void sub_0041D4E0_0x41d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D4E0_0x41d4e0");
#endif

    switch (ctx->pc) {
        case 0x41d4e0u: goto label_41d4e0;
        case 0x41d4e4u: goto label_41d4e4;
        case 0x41d4e8u: goto label_41d4e8;
        case 0x41d4ecu: goto label_41d4ec;
        case 0x41d4f0u: goto label_41d4f0;
        case 0x41d4f4u: goto label_41d4f4;
        case 0x41d4f8u: goto label_41d4f8;
        case 0x41d4fcu: goto label_41d4fc;
        case 0x41d500u: goto label_41d500;
        case 0x41d504u: goto label_41d504;
        case 0x41d508u: goto label_41d508;
        case 0x41d50cu: goto label_41d50c;
        case 0x41d510u: goto label_41d510;
        case 0x41d514u: goto label_41d514;
        case 0x41d518u: goto label_41d518;
        case 0x41d51cu: goto label_41d51c;
        case 0x41d520u: goto label_41d520;
        case 0x41d524u: goto label_41d524;
        case 0x41d528u: goto label_41d528;
        case 0x41d52cu: goto label_41d52c;
        case 0x41d530u: goto label_41d530;
        case 0x41d534u: goto label_41d534;
        case 0x41d538u: goto label_41d538;
        case 0x41d53cu: goto label_41d53c;
        case 0x41d540u: goto label_41d540;
        case 0x41d544u: goto label_41d544;
        case 0x41d548u: goto label_41d548;
        case 0x41d54cu: goto label_41d54c;
        case 0x41d550u: goto label_41d550;
        case 0x41d554u: goto label_41d554;
        default: break;
    }

    ctx->pc = 0x41d4e0u;

label_41d4e0:
    // 0x41d4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d4e4:
    // 0x41d4e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41d4e8:
    // 0x41d4e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41d4ec:
    // 0x41d4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d4f0:
    // 0x41d4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d4f4:
    // 0x41d4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d4f8:
    // 0x41d4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d4fc:
    // 0x41d4fc: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41d4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41d500:
    // 0x41d500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d504:
    // 0x41d504: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x41d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41d508:
    // 0x41d508: 0x40f809  jalr        $v0
label_41d50c:
    if (ctx->pc == 0x41D50Cu) {
        ctx->pc = 0x41D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D508u;
        // 0x41d50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D510u;
        goto label_41d510;
    }
    ctx->pc = 0x41D508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D510u);
        ctx->pc = 0x41D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D508u;
        // 0x41d50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D508u, 0x41D510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D510u;
label_41d510:
    // 0x41d510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41d514:
    if (ctx->pc == 0x41D514u) {
        ctx->pc = 0x41D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D510u;
        // 0x41d514: 0x8f83be10  lw          $v1, -0x41F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D518u;
        goto label_41d518;
    }
    ctx->pc = 0x41D510u;
    {
        const bool branch_taken_0x41d510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D510u;
        // 0x41d514: 0x8f83be10  lw          $v1, -0x41F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d510) {
            ctx->pc = 0x41D520u;
            goto label_41d520;
        }
    }
    ctx->pc = 0x41D518u;
label_41d518:
    // 0x41d518: 0x10000009  b           . + 4 + (0x9 << 2)
label_41d51c:
    if (ctx->pc == 0x41D51Cu) {
        ctx->pc = 0x41D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D518u;
        // 0x41d51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D520u;
        goto label_41d520;
    }
    ctx->pc = 0x41D518u;
    {
        const bool branch_taken_0x41d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D518u;
        // 0x41d51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d518) {
            ctx->pc = 0x41D540u;
            goto label_41d540;
        }
    }
    ctx->pc = 0x41D520u;
label_41d520:
    // 0x41d520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d524:
    // 0x41d524: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_41d528:
    // 0x41d528: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x41d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41d52c:
    // 0x41d52c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_41d530:
    // 0x41d530: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x41d530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_41d534:
    // 0x41d534: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x41d534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_41d538:
    // 0x41d538: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x41d538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_41d53c:
    // 0x41d53c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x41d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_41d540:
    // 0x41d540: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d544:
    // 0x41d544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d548:
    // 0x41d548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d54c:
    // 0x41d54c: 0x3e00008  jr          $ra
label_41d550:
    if (ctx->pc == 0x41D550u) {
        ctx->pc = 0x41D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D54Cu;
        // 0x41d550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D554u;
        goto label_41d554;
    }
    ctx->pc = 0x41D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D54Cu;
        // 0x41d550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D554u;
label_41d554:
    // 0x41d554: 0x0  nop
    ctx->pc = 0x41d554u;
    // NOP
    ctx->pc = 0x41d558u;
}
