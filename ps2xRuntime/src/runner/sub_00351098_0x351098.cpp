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

// Function: sub_00351098
// Address: 0x351098 - 0x3511b0
void sub_00351098_0x351098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351098_0x351098");
#endif

    ctx->pc = 0x351098u;

    // 0x351098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x351098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35109c: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x35109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x3510a0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3510a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3510a4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3510a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3510a8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3510A8u;
    {
        const bool branch_taken_0x3510a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510A8u;
        // 0x3510ac: 0x8ca8004c  lw          $t0, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510a8) {
            ctx->pc = 0x3510F4u;
            goto label_3510f4;
        }
    }
    ctx->pc = 0x3510B0u;
    // 0x3510b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3510b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3510b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3510b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3510b8: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x3510b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x3510bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3510bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3510c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3510c4: 0x800008  jr          $a0
    ctx->pc = 0x3510C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3510CCu: goto label_3510cc;
            case 0x3510D4u: goto label_3510d4;
            case 0x3510DCu: goto label_3510dc;
            case 0x3510E4u: goto label_3510e4;
            case 0x3510ECu: goto label_3510ec;
            case 0x3510F4u: goto label_3510f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3510C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3510CCu;
label_3510cc:
    // 0x3510cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3510CCu;
    {
        const bool branch_taken_0x3510cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510CCu;
        // 0x3510d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510cc) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510D4u;
label_3510d4:
    // 0x3510d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3510D4u;
    {
        const bool branch_taken_0x3510d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510D4u;
        // 0x3510d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510d4) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510DCu;
label_3510dc:
    // 0x3510dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3510DCu;
    {
        const bool branch_taken_0x3510dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510DCu;
        // 0x3510e0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510dc) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510E4u;
label_3510e4:
    // 0x3510e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3510E4u;
    {
        const bool branch_taken_0x3510e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510E4u;
        // 0x3510e8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510e4) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510ECu;
label_3510ec:
    // 0x3510ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3510ECu;
    {
        const bool branch_taken_0x3510ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510ECu;
        // 0x3510f0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510ec) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510F4u;
label_3510f4:
    // 0x3510f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3510f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3510f8:
    // 0x3510f8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x3510f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3510fc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3510fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x351100: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x351100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x351104: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x351104u;
    {
        const bool branch_taken_0x351104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351104u;
        // 0x351108: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351104) {
            ctx->pc = 0x35114Cu;
            goto label_35114c;
        }
    }
    ctx->pc = 0x35110Cu;
    // 0x35110c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35110cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x351110: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x351114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351118: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35111c: 0x800008  jr          $a0
    ctx->pc = 0x35111Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x351124u: goto label_351124;
            case 0x35112Cu: goto label_35112c;
            case 0x351134u: goto label_351134;
            case 0x35113Cu: goto label_35113c;
            case 0x351144u: goto label_351144;
            case 0x35114Cu: goto label_35114c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35111Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x351124u;
label_351124:
    // 0x351124: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x351124u;
    {
        const bool branch_taken_0x351124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351124u;
        // 0x351128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351124) {
            ctx->pc = 0x351150u;
            goto label_351150;
        }
    }
    ctx->pc = 0x35112Cu;
label_35112c:
    // 0x35112c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35112Cu;
    {
        const bool branch_taken_0x35112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35112Cu;
        // 0x351130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35112c) {
            ctx->pc = 0x351150u;
            goto label_351150;
        }
    }
    ctx->pc = 0x351134u;
label_351134:
    // 0x351134: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x351134u;
    {
        const bool branch_taken_0x351134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351134u;
        // 0x351138: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351134) {
            ctx->pc = 0x351150u;
            goto label_351150;
        }
    }
    ctx->pc = 0x35113Cu;
label_35113c:
    // 0x35113c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35113Cu;
    {
        const bool branch_taken_0x35113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35113Cu;
        // 0x351140: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35113c) {
            ctx->pc = 0x351150u;
            goto label_351150;
        }
    }
    ctx->pc = 0x351144u;
label_351144:
    // 0x351144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x351144u;
    {
        const bool branch_taken_0x351144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351144u;
        // 0x351148: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351144) {
            ctx->pc = 0x351150u;
            goto label_351150;
        }
    }
    ctx->pc = 0x35114Cu;
label_35114c:
    // 0x35114c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_351150:
    // 0x351150: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x351150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x351154: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x351158: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x351158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x35115c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x351160: 0x24428040  addiu       $v0, $v0, -0x7FC0
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934592));
    // 0x351164: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x351168: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x351168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x35116c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351174: 0x9c630000  lwu         $v1, 0x0($v1)
    ctx->pc = 0x351174u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x351178: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x351178u;
    {
        const bool branch_taken_0x351178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x35117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351178u;
        // 0x35117c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351178) {
            ctx->pc = 0x351188u;
            goto label_351188;
        }
    }
    ctx->pc = 0x351180u;
    // 0x351180: 0x3e00008  jr          $ra
    ctx->pc = 0x351180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351180u;
        // 0x351184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351188u;
label_351188:
    // 0x351188: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x351188u;
    {
        const bool branch_taken_0x351188 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x351188) {
            ctx->pc = 0x35118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351188u;
            // 0x35118c: 0xfd0300b8  sd          $v1, 0xB8($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3511A8u;
            goto label_3511a8;
        }
    }
    ctx->pc = 0x351190u;
    // 0x351190: 0x54c70005  bnel        $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x351190u;
    {
        const bool branch_taken_0x351190 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x351190) {
            ctx->pc = 0x351194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351190u;
            // 0x351194: 0xfd0300b8  sd          $v1, 0xB8($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3511A8u;
            goto label_3511a8;
        }
    }
    ctx->pc = 0x351198u;
    // 0x351198: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x351198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x35119c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x35119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3511a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3511a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3511a4: 0xfd0300b8  sd          $v1, 0xB8($t0)
    ctx->pc = 0x3511a4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
label_3511a8:
    // 0x3511a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3511A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3511ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511A8u;
        // 0x3511ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3511A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3511B0u;
}
