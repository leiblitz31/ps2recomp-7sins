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

// Function: sub_00378968
// Address: 0x378968 - 0x378a20
void sub_00378968_0x378968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378968_0x378968");
#endif

    switch (ctx->pc) {
        case 0x378994u: goto label_378994;
        case 0x3789a8u: goto label_3789a8;
        case 0x3789bcu: goto label_3789bc;
        case 0x3789f8u: goto label_3789f8;
        default: break;
    }

    ctx->pc = 0x378968u;

    // 0x378968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37896c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x37896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378970: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x378970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x378974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x378974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378978: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x378978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37897c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x378980: 0x2611002c  addiu       $s1, $s0, 0x2C
    ctx->pc = 0x378980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x378984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x378984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37898c: 0xc103440  jal         func_40D100
    ctx->pc = 0x37898Cu;
    SET_GPR_U32(ctx, 31, 0x378994u);
    ctx->pc = 0x378990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37898Cu;
    // 0x378990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x37898Cu, 0x378994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378994u;
label_378994:
    // 0x378994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x378994u;
    {
        const bool branch_taken_0x378994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378994u;
        // 0x378998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378994) {
            ctx->pc = 0x3789C4u;
            goto label_3789c4;
        }
    }
    ctx->pc = 0x37899Cu;
    // 0x37899c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x37899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3789a0: 0xc103440  jal         func_40D100
    ctx->pc = 0x3789A0u;
    SET_GPR_U32(ctx, 31, 0x3789A8u);
    ctx->pc = 0x3789A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789A0u;
    // 0x3789a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3789A0u, 0x3789A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789A8u;
label_3789a8:
    // 0x3789a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3789A8u;
    {
        const bool branch_taken_0x3789a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3789ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789A8u;
        // 0x3789ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789a8) {
            ctx->pc = 0x3789C4u;
            goto label_3789c4;
        }
    }
    ctx->pc = 0x3789B0u;
    // 0x3789b0: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x3789b4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3789B4u;
    SET_GPR_U32(ctx, 31, 0x3789BCu);
    ctx->pc = 0x3789B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789B4u;
    // 0x3789b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3789B4u, 0x3789BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789BCu;
label_3789bc:
    // 0x3789bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3789BCu;
    {
        const bool branch_taken_0x3789bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3789bc) {
            ctx->pc = 0x3789C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3789BCu;
            // 0x3789c0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3789CCu;
            goto label_3789cc;
        }
    }
    ctx->pc = 0x3789C4u;
label_3789c4:
    // 0x3789c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3789C4u;
    {
        const bool branch_taken_0x3789c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3789C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789C4u;
        // 0x3789c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789c4) {
            ctx->pc = 0x378A08u;
            goto label_378a08;
        }
    }
    ctx->pc = 0x3789CCu;
label_3789cc:
    // 0x3789cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3789CCu;
    {
        const bool branch_taken_0x3789cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3789D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789CCu;
        // 0x3789d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789cc) {
            ctx->pc = 0x378A04u;
            goto label_378a04;
        }
    }
    ctx->pc = 0x3789D4u;
    // 0x3789d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3789d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3789d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3789d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3789dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3789dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3789e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3789e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3789e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3789e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3789e8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3789e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3789ec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3789ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3789f0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3789F0u;
    SET_GPR_U32(ctx, 31, 0x3789F8u);
    ctx->pc = 0x3789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789F0u;
    // 0x3789f4: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3789F0u, 0x3789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789F8u;
label_3789f8:
    // 0x3789f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3789f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3789fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3789FCu;
    {
        const bool branch_taken_0x3789fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789FCu;
        // 0x378a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789fc) {
            ctx->pc = 0x378A08u;
            goto label_378a08;
        }
    }
    ctx->pc = 0x378A04u;
label_378a04:
    // 0x378a04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x378a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_378a08:
    // 0x378a08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x378a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378a0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378a10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x378a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378a18: 0x3e00008  jr          $ra
    ctx->pc = 0x378A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A18u;
        // 0x378a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378A20u;
}
