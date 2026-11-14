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

// Function: sub_0037A0E8
// Address: 0x37a0e8 - 0x37a240
void sub_0037A0E8_0x37a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A0E8_0x37a0e8");
#endif

    switch (ctx->pc) {
        case 0x37a140u: goto label_37a140;
        case 0x37a164u: goto label_37a164;
        case 0x37a178u: goto label_37a178;
        case 0x37a1c4u: goto label_37a1c4;
        case 0x37a1d8u: goto label_37a1d8;
        case 0x37a1f0u: goto label_37a1f0;
        case 0x37a204u: goto label_37a204;
        case 0x37a214u: goto label_37a214;
        default: break;
    }

    ctx->pc = 0x37a0e8u;

    // 0x37a0e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37a0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37a0ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x37a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x37a0f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37a0f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37a0f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x37a100: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37a100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a104: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37a108: 0x2453ac48  addiu       $s3, $v0, -0x53B8
    ctx->pc = 0x37a108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945864));
    // 0x37a10c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a114: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x37a114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x37a118: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37a11c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x37a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37a120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a124: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x37a124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37a128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a12c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x37a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37a130: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x37a130u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x37a134: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x37a134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37a138: 0xc0de288  jal         func_378A20
    ctx->pc = 0x37A138u;
    SET_GPR_U32(ctx, 31, 0x37A140u);
    ctx->pc = 0x37A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A138u;
    // 0x37a13c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A20u, 0x37A138u, 0x37A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A140u;
label_37a140:
    // 0x37a140: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37a140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a144: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x37a144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37a148: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x37a148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x37a14c: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x37a14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x37a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a158: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x37a158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x37a15c: 0xc103404  jal         func_40D010
    ctx->pc = 0x37A15Cu;
    SET_GPR_U32(ctx, 31, 0x37A164u);
    ctx->pc = 0x37A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A15Cu;
    // 0x37a160: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x37A15Cu, 0x37A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A164u;
label_37a164:
    // 0x37a164: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x37A164u;
    {
        const bool branch_taken_0x37a164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A164u;
        // 0x37a168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a164) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A16Cu;
    // 0x37a16c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37a16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a170: 0xc103440  jal         func_40D100
    ctx->pc = 0x37A170u;
    SET_GPR_U32(ctx, 31, 0x37A178u);
    ctx->pc = 0x37A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A170u;
    // 0x37a174: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x37A170u, 0x37A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A178u;
label_37a178:
    // 0x37a178: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x37A178u;
    {
        const bool branch_taken_0x37a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A178u;
        // 0x37a17c: 0x3c0800ff  lui         $t0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a178) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A180u;
    // 0x37a180: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x37a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x37a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a188: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x37a188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x37a18c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x37a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37a190: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x37a190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a194: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x37a194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a198: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x37a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37a19c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x37a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37a1a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a1a4: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x37a1a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a1a8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x37a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x37a1ac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x37a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x37a1b0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x37a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x37a1b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a1b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x37a1bc: 0xc103440  jal         func_40D100
    ctx->pc = 0x37A1BCu;
    SET_GPR_U32(ctx, 31, 0x37A1C4u);
    ctx->pc = 0x37A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1BCu;
    // 0x37a1c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x37A1BCu, 0x37A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1C4u;
label_37a1c4:
    // 0x37a1c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37A1C4u;
    {
        const bool branch_taken_0x37a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1C4u;
        // 0x37a1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1c4) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A1CCu;
    // 0x37a1cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x37a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37a1d0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x37A1D0u;
    SET_GPR_U32(ctx, 31, 0x37A1D8u);
    ctx->pc = 0x37A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1D0u;
    // 0x37a1d4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x37A1D0u, 0x37A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1D8u;
label_37a1d8:
    // 0x37a1d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37A1D8u;
    {
        const bool branch_taken_0x37a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1D8u;
        // 0x37a1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1d8) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A1E0u;
    // 0x37a1e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x37a1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37a1e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x37a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37a1e8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x37A1E8u;
    SET_GPR_U32(ctx, 31, 0x37A1F0u);
    ctx->pc = 0x37A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1E8u;
    // 0x37a1ec: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x37A1E8u, 0x37A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A1F0u;
label_37a1f0:
    // 0x37a1f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37A1F0u;
    {
        const bool branch_taken_0x37a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1F0u;
        // 0x37a1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1f0) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A1F8u;
    // 0x37a1f8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x37a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37a1fc: 0xc103440  jal         func_40D100
    ctx->pc = 0x37A1FCu;
    SET_GPR_U32(ctx, 31, 0x37A204u);
    ctx->pc = 0x37A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A1FCu;
    // 0x37a200: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x37A1FCu, 0x37A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A204u;
label_37a204:
    // 0x37a204: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A204u;
    {
        const bool branch_taken_0x37a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A204u;
        // 0x37a208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a204) {
            ctx->pc = 0x37A220u;
            goto label_37a220;
        }
    }
    ctx->pc = 0x37A20Cu;
    // 0x37a20c: 0xc0de25a  jal         func_378968
    ctx->pc = 0x37A20Cu;
    SET_GPR_U32(ctx, 31, 0x37A214u);
    ctx->pc = 0x37A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A20Cu;
    // 0x37a210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378968u, 0x37A20Cu, 0x37A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A214u;
label_37a214:
    // 0x37a214: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x37a214u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x37a218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37A218u;
    {
        const bool branch_taken_0x37a218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A218u;
        // 0x37a21c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a218) {
            ctx->pc = 0x37A224u;
            goto label_37a224;
        }
    }
    ctx->pc = 0x37A220u;
label_37a220:
    // 0x37a220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a224:
    // 0x37a224: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37a224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a228: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37a228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a22c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37a22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a230: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37a230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a238: 0x3e00008  jr          $ra
    ctx->pc = 0x37A238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A238u;
        // 0x37a23c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A240u;
}
