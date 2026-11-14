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

// Function: sub_0033B950
// Address: 0x33b950 - 0x33bc40
void sub_0033B950_0x33b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B950_0x33b950");
#endif

    switch (ctx->pc) {
        case 0x33b98cu: goto label_33b98c;
        case 0x33b9a0u: goto label_33b9a0;
        case 0x33b9b4u: goto label_33b9b4;
        case 0x33b9c8u: goto label_33b9c8;
        case 0x33ba58u: goto label_33ba58;
        case 0x33ba78u: goto label_33ba78;
        case 0x33bc18u: goto label_33bc18;
        default: break;
    }

    ctx->pc = 0x33b950u;

    // 0x33b950: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x33b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x33b954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b958: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x33b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x33b95c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33b960: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b964: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x33b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x33b968: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x33b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x33b96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b970: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x33b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x33b974: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x33b974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33b978: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x33b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x33b97c: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x33b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
    // 0x33b980: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x33b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x33b984: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B984u;
    SET_GPR_U32(ctx, 31, 0x33B98Cu);
    ctx->pc = 0x33B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B984u;
    // 0x33b988: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B984u, 0x33B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B98Cu;
label_33b98c:
    // 0x33b98c: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x33b98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x33b990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b998: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B998u;
    SET_GPR_U32(ctx, 31, 0x33B9A0u);
    ctx->pc = 0x33B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B998u;
    // 0x33b99c: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B998u, 0x33B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9A0u;
label_33b9a0:
    // 0x33b9a0: 0x27b50170  addiu       $s5, $sp, 0x170
    ctx->pc = 0x33b9a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x33b9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9ac: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B9ACu;
    SET_GPR_U32(ctx, 31, 0x33B9B4u);
    ctx->pc = 0x33B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9ACu;
    // 0x33b9b0: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B9ACu, 0x33B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9B4u;
label_33b9b4:
    // 0x33b9b4: 0x27b401e0  addiu       $s4, $sp, 0x1E0
    ctx->pc = 0x33b9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x33b9b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9c0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33B9C0u;
    SET_GPR_U32(ctx, 31, 0x33B9C8u);
    ctx->pc = 0x33B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9C0u;
    // 0x33b9c4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33B9C0u, 0x33B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9C8u;
label_33b9c8:
    // 0x33b9c8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33b9cc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x33b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x33b9d0: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x33b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x33b9d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9d8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x33b9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x33b9dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B9DCu;
    {
        const bool branch_taken_0x33b9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9DCu;
        // 0x33b9e0: 0xafa201e0  sw          $v0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9dc) {
            ctx->pc = 0x33B9F4u;
            goto label_33b9f4;
        }
    }
    ctx->pc = 0x33B9E4u;
    // 0x33b9e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33b9e8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x33b9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b9ec: 0x2442bf40  addiu       $v0, $v0, -0x40C0
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950720));
    // 0x33b9f0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x33b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_33b9f4:
    // 0x33b9f4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x33b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33b9f8: 0x30421600  andi        $v0, $v0, 0x1600
    ctx->pc = 0x33b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5632);
    // 0x33b9fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B9FCu;
    {
        const bool branch_taken_0x33b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9FCu;
        // 0x33ba00: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9fc) {
            ctx->pc = 0x33BA1Cu;
            goto label_33ba1c;
        }
    }
    ctx->pc = 0x33BA04u;
    // 0x33ba04: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33ba08: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x33ba08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ba0c: 0x2442c760  addiu       $v0, $v0, -0x38A0
    ctx->pc = 0x33ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952800));
    // 0x33ba10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33ba14: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33ba18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33ba1c:
    // 0x33ba1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x33ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33ba20: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x33ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x33ba24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BA24u;
    {
        const bool branch_taken_0x33ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA24u;
        // 0x33ba28: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba24) {
            ctx->pc = 0x33BA44u;
            goto label_33ba44;
        }
    }
    ctx->pc = 0x33BA2Cu;
    // 0x33ba2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33ba30: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x33ba30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ba34: 0x2442e7e8  addiu       $v0, $v0, -0x1818
    ctx->pc = 0x33ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961128));
    // 0x33ba38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33ba38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33ba3c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33ba40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33ba44:
    // 0x33ba44: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x33ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x33ba48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba50: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x33BA50u;
    SET_GPR_U32(ctx, 31, 0x33BA58u);
    ctx->pc = 0x33BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA50u;
    // 0x33ba54: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x33BA50u, 0x33BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA58u;
label_33ba58:
    // 0x33ba58: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x33ba58u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba5c: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x33ba5cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba60: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x33ba60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba64: 0x240a001c  addiu       $t2, $zero, 0x1C
    ctx->pc = 0x33ba64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33ba68: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x33ba68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33ba6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba70: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x33ba70u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ba74: 0x0  nop
    ctx->pc = 0x33ba74u;
    // NOP
label_33ba78:
    // 0x33ba78: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x33ba78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ba7c: 0x22f1021  addu        $v0, $s1, $t7
    ctx->pc = 0x33ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x33ba80: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x33ba84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ba88: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BA88u;
    {
        const bool branch_taken_0x33ba88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA88u;
        // 0x33ba8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba88) {
            ctx->pc = 0x33BAB0u;
            goto label_33bab0;
        }
    }
    ctx->pc = 0x33BA90u;
    // 0x33ba90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33ba94: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33ba94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ba98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ba9c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33baa0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33baa4: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33baa8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33baac: 0x0  nop
    ctx->pc = 0x33baacu;
    // NOP
label_33bab0:
    // 0x33bab0: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x33bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x33bab4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BAB4u;
    {
        const bool branch_taken_0x33bab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bab4) {
            ctx->pc = 0x33BAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BAB4u;
            // 0x33bab8: 0x8cc50038  lw          $a1, 0x38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BADCu;
            goto label_33badc;
        }
    }
    ctx->pc = 0x33BABCu;
    // 0x33babc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bac0: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33bac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bac8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bacc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bad0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bad4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bad8: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x33bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_33badc:
    // 0x33badc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BADCu;
    {
        const bool branch_taken_0x33badc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33badc) {
            ctx->pc = 0x33BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BADCu;
            // 0x33bae0: 0x8cc50054  lw          $a1, 0x54($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BB04u;
            goto label_33bb04;
        }
    }
    ctx->pc = 0x33BAE4u;
    // 0x33bae4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bae8: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33bae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33baec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33baf0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33baf4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33baf8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bafc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bb00: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x33bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_33bb04:
    // 0x33bb04: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BB04u;
    {
        const bool branch_taken_0x33bb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb04) {
            ctx->pc = 0x33BB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BB04u;
            // 0x33bb08: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BB2Cu;
            goto label_33bb2c;
        }
    }
    ctx->pc = 0x33BB0Cu;
    // 0x33bb0c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bb10: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x33bb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bb14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bb18: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bb1c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bb20: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bb24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bb28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33bb2c:
    // 0x33bb2c: 0x1d11021  addu        $v0, $t6, $s1
    ctx->pc = 0x33bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x33bb30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x33bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bb34: 0x22d2021  addu        $a0, $s1, $t5
    ctx->pc = 0x33bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x33bb38: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x33bb38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33bb3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33bb3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33bb44: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x33bb44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33bb48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x33bb4c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33bb50: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x33bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x33bb54: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x33bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x33bb58: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x33bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33bb5c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BB5Cu;
    {
        const bool branch_taken_0x33bb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB5Cu;
        // 0x33bb60: 0x1913821  addu        $a3, $t4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb5c) {
            ctx->pc = 0x33BB80u;
            goto label_33bb80;
        }
    }
    ctx->pc = 0x33BB64u;
    // 0x33bb64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bb68: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33bb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bb6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bb70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bb74: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bb78: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bb7c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_33bb80:
    // 0x33bb80: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x33bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x33bb84: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BB84u;
    {
        const bool branch_taken_0x33bb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb84) {
            ctx->pc = 0x33BB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BB84u;
            // 0x33bb88: 0x8d050038  lw          $a1, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BBACu;
            goto label_33bbac;
        }
    }
    ctx->pc = 0x33BB8Cu;
    // 0x33bb8c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bb90: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33bb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bb98: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bb9c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bba0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bba4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bba8: 0x8d050038  lw          $a1, 0x38($t0)
    ctx->pc = 0x33bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_33bbac:
    // 0x33bbac: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BBACu;
    {
        const bool branch_taken_0x33bbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbac) {
            ctx->pc = 0x33BBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBACu;
            // 0x33bbb0: 0x8d050054  lw          $a1, 0x54($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BBD4u;
            goto label_33bbd4;
        }
    }
    ctx->pc = 0x33BBB4u;
    // 0x33bbb4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bbb8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33bbb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bbbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bbc0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bbc4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bbc8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bbcc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bbd0: 0x8d050054  lw          $a1, 0x54($t0)
    ctx->pc = 0x33bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_33bbd4:
    // 0x33bbd4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33BBD4u;
    {
        const bool branch_taken_0x33bbd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBD4u;
        // 0x33bbd8: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bbd4) {
            ctx->pc = 0x33BBFCu;
            goto label_33bbfc;
        }
    }
    ctx->pc = 0x33BBDCu;
    // 0x33bbdc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bbe0: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x33bbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33bbe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bbe8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33bbec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bbf0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x33bbf4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33bbf8: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x33bbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33bbfc:
    // 0x33bbfc: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x33bbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x33bc00: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x33BC00u;
    {
        const bool branch_taken_0x33bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC00u;
        // 0x33bc04: 0x38880  sll         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc00) {
            ctx->pc = 0x33BA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ba78;
        }
    }
    ctx->pc = 0x33BC08u;
    // 0x33bc08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33bc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33bc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc10: 0xc0d0dd0  jal         func_343740
    ctx->pc = 0x33BC10u;
    SET_GPR_U32(ctx, 31, 0x33BC18u);
    ctx->pc = 0x33BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC10u;
    // 0x33bc14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343740u, 0x33BC10u, 0x33BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC18u;
label_33bc18:
    // 0x33bc18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33bc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc1c: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x33bc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x33bc20: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x33bc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x33bc24: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x33bc24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x33bc28: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x33bc28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x33bc2c: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x33bc2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x33bc30: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x33bc30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x33bc34: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x33bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x33bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x33BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC38u;
        // 0x33bc3c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BC40u;
}
