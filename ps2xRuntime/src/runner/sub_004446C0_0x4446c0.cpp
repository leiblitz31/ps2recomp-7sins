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

// Function: sub_004446C0
// Address: 0x4446c0 - 0x444780
void sub_004446C0_0x4446c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004446C0_0x4446c0");
#endif

    switch (ctx->pc) {
        case 0x44470cu: goto label_44470c;
        case 0x44471cu: goto label_44471c;
        case 0x444730u: goto label_444730;
        case 0x444748u: goto label_444748;
        case 0x444754u: goto label_444754;
        default: break;
    }

    ctx->pc = 0x4446c0u;

    // 0x4446c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4446c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4446c4: 0x8f83bf1c  lw          $v1, -0x40E4($gp)
    ctx->pc = 0x4446c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950684)));
    // 0x4446c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4446c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4446cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4446ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4446d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4446d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4446d4: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x4446d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4446d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4446d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4446dc: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x4446dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4446e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4446e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4446e4: 0xaf86bf18  sw          $a2, -0x40E8($gp)
    ctx->pc = 0x4446e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950680), GPR_U32(ctx, 6));
    // 0x4446e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4446e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4446ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4446ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4446f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4446f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4446f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4446f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4446f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4446f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4446fc: 0xaf83bf1c  sw          $v1, -0x40E4($gp)
    ctx->pc = 0x4446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950684), GPR_U32(ctx, 3));
    // 0x444700: 0xaf82af10  sw          $v0, -0x50F0($gp)
    ctx->pc = 0x444700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946576), GPR_U32(ctx, 2));
    // 0x444704: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x444704u;
    SET_GPR_U32(ctx, 31, 0x44470Cu);
    ctx->pc = 0x444708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444704u;
    // 0x444708: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x444704u, 0x44470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44470Cu;
label_44470c:
    // 0x44470c: 0x2612001c  addiu       $s2, $s0, 0x1C
    ctx->pc = 0x44470cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x444710: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444714: 0xc1135e8  jal         func_44D7A0
    ctx->pc = 0x444714u;
    SET_GPR_U32(ctx, 31, 0x44471Cu);
    ctx->pc = 0x444718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444714u;
    // 0x444718: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7A0u, 0x444714u, 0x44471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44471Cu;
label_44471c:
    // 0x44471c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44471Cu;
    {
        const bool branch_taken_0x44471c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44471Cu;
        // 0x444720: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44471c) {
            ctx->pc = 0x444738u;
            goto label_444738;
        }
    }
    ctx->pc = 0x444724u;
    // 0x444724: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444728: 0xc1135ea  jal         func_44D7A8
    ctx->pc = 0x444728u;
    SET_GPR_U32(ctx, 31, 0x444730u);
    ctx->pc = 0x44472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444728u;
    // 0x44472c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7A8u, 0x444728u, 0x444730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444730u;
label_444730:
    // 0x444730: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x444730u;
    {
        const bool branch_taken_0x444730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444730) {
            ctx->pc = 0x444734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444730u;
            // 0x444734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444764u;
            goto label_444764;
        }
    }
    ctx->pc = 0x444738u;
label_444738:
    // 0x444738: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44473c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x44473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x444740: 0xc1135ee  jal         func_44D7B8
    ctx->pc = 0x444740u;
    SET_GPR_U32(ctx, 31, 0x444748u);
    ctx->pc = 0x444744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444740u;
    // 0x444744: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7B8u, 0x444740u, 0x444748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444748u;
label_444748:
    // 0x444748: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44474c: 0xc1135ec  jal         func_44D7B0
    ctx->pc = 0x44474Cu;
    SET_GPR_U32(ctx, 31, 0x444754u);
    ctx->pc = 0x444750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44474Cu;
    // 0x444750: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7B0u, 0x44474Cu, 0x444754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444754u;
label_444754:
    // 0x444754: 0x8f83bf1c  lw          $v1, -0x40E4($gp)
    ctx->pc = 0x444754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950684)));
    // 0x444758: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x444758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x44475c: 0xaf83bf1c  sw          $v1, -0x40E4($gp)
    ctx->pc = 0x44475cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950684), GPR_U32(ctx, 3));
    // 0x444760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444764:
    // 0x444764: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x444764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444768: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x444768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44476c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x44476cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x444770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444774: 0x3e00008  jr          $ra
    ctx->pc = 0x444774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444774u;
        // 0x444778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44477Cu;
    // 0x44477c: 0x0  nop
    ctx->pc = 0x44477cu;
    // NOP
    ctx->pc = 0x444780u;
}
