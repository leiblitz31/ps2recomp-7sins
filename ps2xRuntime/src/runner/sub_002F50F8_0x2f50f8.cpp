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

// Function: sub_002F50F8
// Address: 0x2f50f8 - 0x2f52b8
void sub_002F50F8_0x2f50f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F50F8_0x2f50f8");
#endif

    switch (ctx->pc) {
        case 0x2f518cu: goto label_2f518c;
        case 0x2f51b8u: goto label_2f51b8;
        case 0x2f5204u: goto label_2f5204;
        case 0x2f522cu: goto label_2f522c;
        case 0x2f5250u: goto label_2f5250;
        default: break;
    }

    ctx->pc = 0x2f50f8u;

    // 0x2f50f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f50f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f50fc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2f5100: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f5100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f5104: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2f5104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5108: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f5108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f510c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f510cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5110: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f5114: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f5114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5118: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f5118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2f511c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f511cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5120: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2f5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2f5124: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2f5124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f5128: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2f5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2f512c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2f512cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5130: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2f5130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2f5134: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f5134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5138: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2f5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2f513c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2f513cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5140: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2f5140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2f5144: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2f5144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5148: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5148u;
        // 0x2f514c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F516Cu;
            goto label_2f516c;
        }
    }
    ctx->pc = 0x2F5150u;
    // 0x2f5150: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f5150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f5154: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5154u;
    {
        const bool branch_taken_0x2f5154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5154u;
        // 0x2f5158: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5154) {
            ctx->pc = 0x2F5164u;
            goto label_2f5164;
        }
    }
    ctx->pc = 0x2F515Cu;
    // 0x2f515c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F515Cu;
    {
        const bool branch_taken_0x2f515c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F515Cu;
        // 0x2f5160: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f515c) {
            ctx->pc = 0x2F516Cu;
            goto label_2f516c;
        }
    }
    ctx->pc = 0x2F5164u;
label_2f5164:
    // 0x2f5164: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f5164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f5168: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2f5168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f516c:
    // 0x2f516c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f516cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5170: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f5170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f5174: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5174u;
    {
        const bool branch_taken_0x2f5174 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f5174) {
            ctx->pc = 0x2F5178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5174u;
            // 0x2f5178: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5198u;
            goto label_2f5198;
        }
    }
    ctx->pc = 0x2F517Cu;
    // 0x2f517c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5184: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F5184u;
    SET_GPR_U32(ctx, 31, 0x2F518Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F5184u, 0x2F518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F518Cu;
label_2f518c:
    // 0x2f518c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f518cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5190: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f5190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f5194: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2f5194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f5198:
    // 0x2f5198: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f5198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f519c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f51a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f51a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2f51a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51ac: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2f51acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51b0: 0xc0ba99a  jal         func_2EA668
    ctx->pc = 0x2F51B0u;
    SET_GPR_U32(ctx, 31, 0x2F51B8u);
    ctx->pc = 0x2F51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51B0u;
    // 0x2f51b4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA668u, 0x2F51B0u, 0x2F51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51B8u;
label_2f51b8:
    // 0x2f51b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f51b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51bc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2f51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2f51c0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F51C0u;
    {
        const bool branch_taken_0x2f51c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C0u;
        // 0x2f51c4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51c0) {
            ctx->pc = 0x2F51D0u;
            goto label_2f51d0;
        }
    }
    ctx->pc = 0x2F51C8u;
    // 0x2f51c8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F51C8u;
    {
        const bool branch_taken_0x2f51c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C8u;
        // 0x2f51cc: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51c8) {
            ctx->pc = 0x2F51DCu;
            goto label_2f51dc;
        }
    }
    ctx->pc = 0x2F51D0u;
label_2f51d0:
    // 0x2f51d0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f51d4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F51D4u;
    {
        const bool branch_taken_0x2f51d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51D4u;
        // 0x2f51d8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51d4) {
            ctx->pc = 0x2F5278u;
            goto label_2f5278;
        }
    }
    ctx->pc = 0x2F51DCu;
label_2f51dc:
    // 0x2f51dc: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F51DCu;
    {
        const bool branch_taken_0x2f51dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51DCu;
        // 0x2f51e0: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51dc) {
            ctx->pc = 0x2F521Cu;
            goto label_2f521c;
        }
    }
    ctx->pc = 0x2F51E4u;
    // 0x2f51e4: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2f51e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f51e8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f51ec: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F51ECu;
    {
        const bool branch_taken_0x2f51ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f51ec) {
            ctx->pc = 0x2F51F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F51ECu;
            // 0x2f51f0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5218u;
            goto label_2f5218;
        }
    }
    ctx->pc = 0x2F51F4u;
    // 0x2f51f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f51f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f51f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51fc: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F51FCu;
    SET_GPR_U32(ctx, 31, 0x2F5204u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F51FCu, 0x2F5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5204u;
label_2f5204:
    // 0x2f5204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5204u;
    {
        const bool branch_taken_0x2f5204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5204u;
        // 0x2f5208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5204) {
            ctx->pc = 0x2F5214u;
            goto label_2f5214;
        }
    }
    ctx->pc = 0x2F520Cu;
    // 0x2f520c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2f520cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f5210: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2f5210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2f5214:
    // 0x2f5214: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2f5218:
    // 0x2f5218: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f5218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f521c:
    // 0x2f521c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5224: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F5224u;
    SET_GPR_U32(ctx, 31, 0x2F522Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F5224u, 0x2F522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F522Cu;
label_2f522c:
    // 0x2f522c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f5230: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2f5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2f5234: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x2f5234u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x2f5238: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2f5238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2f523c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f5240: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F5240u;
    {
        const bool branch_taken_0x2f5240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5240u;
        // 0x2f5244: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5240) {
            ctx->pc = 0x2F527Cu;
            goto label_2f527c;
        }
    }
    ctx->pc = 0x2F5248u;
    // 0x2f5248: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2f5248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f524c: 0x0  nop
    ctx->pc = 0x2f524cu;
    // NOP
label_2f5250:
    // 0x2f5250: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2f5250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f5254: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2f5254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f5258: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x2f5258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2f525c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f525cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f5260: 0x0  nop
    ctx->pc = 0x2f5260u;
    // NOP
    // 0x2f5264: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F5264u;
    {
        const bool branch_taken_0x2f5264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5264u;
        // 0x2f5268: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5264) {
            ctx->pc = 0x2F5250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5250;
        }
    }
    ctx->pc = 0x2F526Cu;
    // 0x2f526c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F526Cu;
    {
        const bool branch_taken_0x2f526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F526Cu;
        // 0x2f5270: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f526c) {
            ctx->pc = 0x2F5280u;
            goto label_2f5280;
        }
    }
    ctx->pc = 0x2F5274u;
    // 0x2f5274: 0x0  nop
    ctx->pc = 0x2f5274u;
    // NOP
label_2f5278:
    // 0x2f5278: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f5278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f527c:
    // 0x2f527c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2f527cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2f5280:
    // 0x2f5280: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f5280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5284: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2f5284u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2f5288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f5288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f528c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f528cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5290: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f5290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5294: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f5294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5298: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f5298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f529c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f529cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f52a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f52a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f52a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2f52a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f52a8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2f52a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f52ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2f52acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f52b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52B0u;
        // 0x2f52b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52B8u;
}
