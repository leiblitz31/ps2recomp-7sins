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

// Function: sub_0049C0A8
// Address: 0x49c0a8 - 0x49c1a0
void sub_0049C0A8_0x49c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C0A8_0x49c0a8");
#endif

    switch (ctx->pc) {
        case 0x49c0a8u: goto label_49c0a8;
        case 0x49c0acu: goto label_49c0ac;
        case 0x49c0b0u: goto label_49c0b0;
        case 0x49c0b4u: goto label_49c0b4;
        case 0x49c0b8u: goto label_49c0b8;
        case 0x49c0bcu: goto label_49c0bc;
        case 0x49c0c0u: goto label_49c0c0;
        case 0x49c0c4u: goto label_49c0c4;
        case 0x49c0c8u: goto label_49c0c8;
        case 0x49c0ccu: goto label_49c0cc;
        case 0x49c0d0u: goto label_49c0d0;
        case 0x49c0d4u: goto label_49c0d4;
        case 0x49c0d8u: goto label_49c0d8;
        case 0x49c0dcu: goto label_49c0dc;
        case 0x49c0e0u: goto label_49c0e0;
        case 0x49c0e4u: goto label_49c0e4;
        case 0x49c0e8u: goto label_49c0e8;
        case 0x49c0ecu: goto label_49c0ec;
        case 0x49c0f0u: goto label_49c0f0;
        case 0x49c0f4u: goto label_49c0f4;
        case 0x49c0f8u: goto label_49c0f8;
        case 0x49c0fcu: goto label_49c0fc;
        case 0x49c100u: goto label_49c100;
        case 0x49c104u: goto label_49c104;
        case 0x49c108u: goto label_49c108;
        case 0x49c10cu: goto label_49c10c;
        case 0x49c110u: goto label_49c110;
        case 0x49c114u: goto label_49c114;
        case 0x49c118u: goto label_49c118;
        case 0x49c11cu: goto label_49c11c;
        case 0x49c120u: goto label_49c120;
        case 0x49c124u: goto label_49c124;
        case 0x49c128u: goto label_49c128;
        case 0x49c12cu: goto label_49c12c;
        case 0x49c130u: goto label_49c130;
        case 0x49c134u: goto label_49c134;
        case 0x49c138u: goto label_49c138;
        case 0x49c13cu: goto label_49c13c;
        case 0x49c140u: goto label_49c140;
        case 0x49c144u: goto label_49c144;
        case 0x49c148u: goto label_49c148;
        case 0x49c14cu: goto label_49c14c;
        case 0x49c150u: goto label_49c150;
        case 0x49c154u: goto label_49c154;
        case 0x49c158u: goto label_49c158;
        case 0x49c15cu: goto label_49c15c;
        case 0x49c160u: goto label_49c160;
        case 0x49c164u: goto label_49c164;
        case 0x49c168u: goto label_49c168;
        case 0x49c16cu: goto label_49c16c;
        case 0x49c170u: goto label_49c170;
        case 0x49c174u: goto label_49c174;
        case 0x49c178u: goto label_49c178;
        case 0x49c17cu: goto label_49c17c;
        case 0x49c180u: goto label_49c180;
        case 0x49c184u: goto label_49c184;
        case 0x49c188u: goto label_49c188;
        case 0x49c18cu: goto label_49c18c;
        case 0x49c190u: goto label_49c190;
        case 0x49c194u: goto label_49c194;
        case 0x49c198u: goto label_49c198;
        case 0x49c19cu: goto label_49c19c;
        default: break;
    }

    ctx->pc = 0x49c0a8u;

label_49c0a8:
    // 0x49c0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49c0ac:
    // 0x49c0ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49c0b0:
    // 0x49c0b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49c0b4:
    // 0x49c0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c0b8:
    // 0x49c0b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49c0bc:
    // 0x49c0bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x49c0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49c0c0:
    // 0x49c0c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49c0c4:
    // 0x49c0c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49c0c8:
    // 0x49c0c8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x49c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_49c0cc:
    // 0x49c0cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49c0d0:
    if (ctx->pc == 0x49C0D0u) {
        ctx->pc = 0x49C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0CCu;
        // 0x49c0d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C0D4u;
        goto label_49c0d4;
    }
    ctx->pc = 0x49C0CCu;
    {
        const bool branch_taken_0x49c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0CCu;
        // 0x49c0d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0cc) {
            ctx->pc = 0x49C0DCu;
            goto label_49c0dc;
        }
    }
    ctx->pc = 0x49C0D4u;
label_49c0d4:
    // 0x49c0d4: 0x40f809  jalr        $v0
label_49c0d8:
    if (ctx->pc == 0x49C0D8u) {
        ctx->pc = 0x49C0DCu;
        goto label_49c0dc;
    }
    ctx->pc = 0x49C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49C0DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C0D4u, 0x49C0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C0DCu;
label_49c0dc:
    // 0x49c0dc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x49c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49c0e0:
    // 0x49c0e0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_49c0e4:
    if (ctx->pc == 0x49C0E4u) {
        ctx->pc = 0x49C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0E0u;
        // 0x49c0e4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C0E8u;
        goto label_49c0e8;
    }
    ctx->pc = 0x49C0E0u;
    {
        const bool branch_taken_0x49c0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c0e0) {
            ctx->pc = 0x49C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C0E0u;
            // 0x49c0e4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C108u;
            goto label_49c108;
        }
    }
    ctx->pc = 0x49C0E8u;
label_49c0e8:
    // 0x49c0e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x49c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49c0ec:
    // 0x49c0ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_49c0f0:
    // 0x49c0f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x49c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_49c0f4:
    // 0x49c0f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x49c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49c0f8:
    // 0x49c0f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_49c0fc:
    // 0x49c0fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x49c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_49c100:
    // 0x49c100: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x49c100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_49c104:
    // 0x49c104: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x49c104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49c108:
    // 0x49c108: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x49c108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_49c10c:
    // 0x49c10c: 0x50a6000b  beql        $a1, $a2, . + 4 + (0xB << 2)
label_49c110:
    if (ctx->pc == 0x49C110u) {
        ctx->pc = 0x49C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C10Cu;
        // 0x49c110: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C114u;
        goto label_49c114;
    }
    ctx->pc = 0x49C10Cu;
    {
        const bool branch_taken_0x49c10c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x49c10c) {
            ctx->pc = 0x49C110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C10Cu;
            // 0x49c110: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C13Cu;
            goto label_49c13c;
        }
    }
    ctx->pc = 0x49C114u;
label_49c114:
    // 0x49c114: 0x0  nop
    ctx->pc = 0x49c114u;
    // NOP
label_49c118:
    // 0x49c118: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x49c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_49c11c:
    // 0x49c11c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x49c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49c120:
    // 0x49c120: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49c120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49c124:
    // 0x49c124: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x49c124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_49c128:
    // 0x49c128: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49c12c:
    // 0x49c12c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c130:
    // 0x49c130: 0x14a6fff9  bne         $a1, $a2, . + 4 + (-0x7 << 2)
label_49c134:
    if (ctx->pc == 0x49C134u) {
        ctx->pc = 0x49C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C130u;
        // 0x49c134: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C138u;
        goto label_49c138;
    }
    ctx->pc = 0x49C130u;
    {
        const bool branch_taken_0x49c130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x49C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C130u;
        // 0x49c134: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c130) {
            ctx->pc = 0x49C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c118;
        }
    }
    ctx->pc = 0x49C138u;
label_49c138:
    // 0x49c138: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x49c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_49c13c:
    // 0x49c13c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49c140:
    // 0x49c140: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49c144:
    if (ctx->pc == 0x49C144u) {
        ctx->pc = 0x49C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C140u;
        // 0x49c144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C148u;
        goto label_49c148;
    }
    ctx->pc = 0x49C140u;
    {
        const bool branch_taken_0x49c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C140u;
        // 0x49c144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c140) {
            ctx->pc = 0x49C15Cu;
            goto label_49c15c;
        }
    }
    ctx->pc = 0x49C148u;
label_49c148:
    // 0x49c148: 0xc127250  jal         func_49C940
label_49c14c:
    if (ctx->pc == 0x49C14Cu) {
        ctx->pc = 0x49C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C148u;
        // 0x49c14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C150u;
        goto label_49c150;
    }
    ctx->pc = 0x49C148u;
    SET_GPR_U32(ctx, 31, 0x49C150u);
    ctx->pc = 0x49C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C148u;
    // 0x49c14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C940u, 0x49C148u, 0x49C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C150u;
label_49c150:
    // 0x49c150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c154:
    // 0x49c154: 0xc127250  jal         func_49C940
label_49c158:
    if (ctx->pc == 0x49C158u) {
        ctx->pc = 0x49C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C154u;
        // 0x49c158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C15Cu;
        goto label_49c15c;
    }
    ctx->pc = 0x49C154u;
    SET_GPR_U32(ctx, 31, 0x49C15Cu);
    ctx->pc = 0x49C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C154u;
    // 0x49c158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C940u, 0x49C154u, 0x49C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C15Cu;
label_49c15c:
    // 0x49c15c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x49c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_49c160:
    // 0x49c160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c164:
    // 0x49c164: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x49c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49c168:
    // 0x49c168: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49c168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49c16c:
    // 0x49c16c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c170:
    // 0x49c170: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49c170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_49c174:
    // 0x49c174: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x49c174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49c178:
    // 0x49c178: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x49c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_49c17c:
    // 0x49c17c: 0xc126a56  jal         func_49A958
label_49c180:
    if (ctx->pc == 0x49C180u) {
        ctx->pc = 0x49C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C17Cu;
        // 0x49c180: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C184u;
        goto label_49c184;
    }
    ctx->pc = 0x49C17Cu;
    SET_GPR_U32(ctx, 31, 0x49C184u);
    ctx->pc = 0x49C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C17Cu;
    // 0x49c180: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A958u, 0x49C17Cu, 0x49C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C184u;
label_49c184:
    // 0x49c184: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49c184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c188:
    // 0x49c188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49c188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c18c:
    // 0x49c18c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49c18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c190:
    // 0x49c190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c194:
    // 0x49c194: 0x3e00008  jr          $ra
label_49c198:
    if (ctx->pc == 0x49C198u) {
        ctx->pc = 0x49C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C194u;
        // 0x49c198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C19Cu;
        goto label_49c19c;
    }
    ctx->pc = 0x49C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C194u;
        // 0x49c198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C19Cu;
label_49c19c:
    // 0x49c19c: 0x0  nop
    ctx->pc = 0x49c19cu;
    // NOP
    ctx->pc = 0x49c1a0u;
}
