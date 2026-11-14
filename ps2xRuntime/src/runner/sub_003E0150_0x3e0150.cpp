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

// Function: sub_003E0150
// Address: 0x3e0150 - 0x3e02d0
void sub_003E0150_0x3e0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0150_0x3e0150");
#endif

    switch (ctx->pc) {
        case 0x3e0150u: goto label_3e0150;
        case 0x3e0154u: goto label_3e0154;
        case 0x3e0158u: goto label_3e0158;
        case 0x3e015cu: goto label_3e015c;
        case 0x3e0160u: goto label_3e0160;
        case 0x3e0164u: goto label_3e0164;
        case 0x3e0168u: goto label_3e0168;
        case 0x3e016cu: goto label_3e016c;
        case 0x3e0170u: goto label_3e0170;
        case 0x3e0174u: goto label_3e0174;
        case 0x3e0178u: goto label_3e0178;
        case 0x3e017cu: goto label_3e017c;
        case 0x3e0180u: goto label_3e0180;
        case 0x3e0184u: goto label_3e0184;
        case 0x3e0188u: goto label_3e0188;
        case 0x3e018cu: goto label_3e018c;
        case 0x3e0190u: goto label_3e0190;
        case 0x3e0194u: goto label_3e0194;
        case 0x3e0198u: goto label_3e0198;
        case 0x3e019cu: goto label_3e019c;
        case 0x3e01a0u: goto label_3e01a0;
        case 0x3e01a4u: goto label_3e01a4;
        case 0x3e01a8u: goto label_3e01a8;
        case 0x3e01acu: goto label_3e01ac;
        case 0x3e01b0u: goto label_3e01b0;
        case 0x3e01b4u: goto label_3e01b4;
        case 0x3e01b8u: goto label_3e01b8;
        case 0x3e01bcu: goto label_3e01bc;
        case 0x3e01c0u: goto label_3e01c0;
        case 0x3e01c4u: goto label_3e01c4;
        case 0x3e01c8u: goto label_3e01c8;
        case 0x3e01ccu: goto label_3e01cc;
        case 0x3e01d0u: goto label_3e01d0;
        case 0x3e01d4u: goto label_3e01d4;
        case 0x3e01d8u: goto label_3e01d8;
        case 0x3e01dcu: goto label_3e01dc;
        case 0x3e01e0u: goto label_3e01e0;
        case 0x3e01e4u: goto label_3e01e4;
        case 0x3e01e8u: goto label_3e01e8;
        case 0x3e01ecu: goto label_3e01ec;
        case 0x3e01f0u: goto label_3e01f0;
        case 0x3e01f4u: goto label_3e01f4;
        case 0x3e01f8u: goto label_3e01f8;
        case 0x3e01fcu: goto label_3e01fc;
        case 0x3e0200u: goto label_3e0200;
        case 0x3e0204u: goto label_3e0204;
        case 0x3e0208u: goto label_3e0208;
        case 0x3e020cu: goto label_3e020c;
        case 0x3e0210u: goto label_3e0210;
        case 0x3e0214u: goto label_3e0214;
        case 0x3e0218u: goto label_3e0218;
        case 0x3e021cu: goto label_3e021c;
        case 0x3e0220u: goto label_3e0220;
        case 0x3e0224u: goto label_3e0224;
        case 0x3e0228u: goto label_3e0228;
        case 0x3e022cu: goto label_3e022c;
        case 0x3e0230u: goto label_3e0230;
        case 0x3e0234u: goto label_3e0234;
        case 0x3e0238u: goto label_3e0238;
        case 0x3e023cu: goto label_3e023c;
        case 0x3e0240u: goto label_3e0240;
        case 0x3e0244u: goto label_3e0244;
        case 0x3e0248u: goto label_3e0248;
        case 0x3e024cu: goto label_3e024c;
        case 0x3e0250u: goto label_3e0250;
        case 0x3e0254u: goto label_3e0254;
        case 0x3e0258u: goto label_3e0258;
        case 0x3e025cu: goto label_3e025c;
        case 0x3e0260u: goto label_3e0260;
        case 0x3e0264u: goto label_3e0264;
        case 0x3e0268u: goto label_3e0268;
        case 0x3e026cu: goto label_3e026c;
        case 0x3e0270u: goto label_3e0270;
        case 0x3e0274u: goto label_3e0274;
        case 0x3e0278u: goto label_3e0278;
        case 0x3e027cu: goto label_3e027c;
        case 0x3e0280u: goto label_3e0280;
        case 0x3e0284u: goto label_3e0284;
        case 0x3e0288u: goto label_3e0288;
        case 0x3e028cu: goto label_3e028c;
        case 0x3e0290u: goto label_3e0290;
        case 0x3e0294u: goto label_3e0294;
        case 0x3e0298u: goto label_3e0298;
        case 0x3e029cu: goto label_3e029c;
        case 0x3e02a0u: goto label_3e02a0;
        case 0x3e02a4u: goto label_3e02a4;
        case 0x3e02a8u: goto label_3e02a8;
        case 0x3e02acu: goto label_3e02ac;
        case 0x3e02b0u: goto label_3e02b0;
        case 0x3e02b4u: goto label_3e02b4;
        case 0x3e02b8u: goto label_3e02b8;
        case 0x3e02bcu: goto label_3e02bc;
        case 0x3e02c0u: goto label_3e02c0;
        case 0x3e02c4u: goto label_3e02c4;
        case 0x3e02c8u: goto label_3e02c8;
        case 0x3e02ccu: goto label_3e02cc;
        default: break;
    }

    ctx->pc = 0x3e0150u;

label_3e0150:
    // 0x3e0150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e0154:
    // 0x3e0154: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e0154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e0158:
    // 0x3e0158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e015c:
    // 0x3e015c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e015cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0160:
    // 0x3e0160: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3e0160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3e0164:
    // 0x3e0164: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e0164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0168:
    // 0x3e0168: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e0168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e016c:
    // 0x3e016c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3e016cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0170:
    // 0x3e0170: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e0170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e0174:
    // 0x3e0174: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3e0174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3e0178:
    // 0x3e0178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e017c:
    // 0x3e017c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x3e017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3e0180:
    // 0x3e0180: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x3e0180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3e0184:
    // 0x3e0184: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3e0184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3e0188:
    // 0x3e0188: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e018c:
    if (ctx->pc == 0x3E018Cu) {
        ctx->pc = 0x3E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0188u;
        // 0x3e018c: 0x8e740010  lw          $s4, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0190u;
        goto label_3e0190;
    }
    ctx->pc = 0x3E0188u;
    {
        const bool branch_taken_0x3e0188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0188u;
        // 0x3e018c: 0x8e740010  lw          $s4, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0188) {
            ctx->pc = 0x3E0198u;
            goto label_3e0198;
        }
    }
    ctx->pc = 0x3E0190u;
label_3e0190:
    // 0x3e0190: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e0194:
    if (ctx->pc == 0x3E0194u) {
        ctx->pc = 0x3E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0190u;
        // 0x3e0194: 0x718023  subu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0198u;
        goto label_3e0198;
    }
    ctx->pc = 0x3E0190u;
    {
        const bool branch_taken_0x3e0190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0190u;
        // 0x3e0194: 0x718023  subu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0190) {
            ctx->pc = 0x3E01A0u;
            goto label_3e01a0;
        }
    }
    ctx->pc = 0x3E0198u;
label_3e0198:
    // 0x3e0198: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3e019c:
    // 0x3e019c: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x3e019cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e01a0:
    // 0x3e01a0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3e01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3e01a4:
    // 0x3e01a4: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3e01a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e01a8:
    // 0x3e01a8: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x3e01a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3e01ac:
    // 0x3e01ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3e01b0:
    if (ctx->pc == 0x3E01B0u) {
        ctx->pc = 0x3E01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01ACu;
        // 0x3e01b0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01B4u;
        goto label_3e01b4;
    }
    ctx->pc = 0x3E01ACu;
    {
        const bool branch_taken_0x3e01ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01ACu;
        // 0x3e01b0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e01ac) {
            ctx->pc = 0x3E01BCu;
            goto label_3e01bc;
        }
    }
    ctx->pc = 0x3E01B4u;
label_3e01b4:
    // 0x3e01b4: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x3e01b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_3e01b8:
    // 0x3e01b8: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x3e01b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_3e01bc:
    // 0x3e01bc: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x3e01bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_3e01c0:
    // 0x3e01c0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3e01c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3e01c4:
    // 0x3e01c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3e01c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3e01c8:
    // 0x3e01c8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x3e01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_3e01cc:
    // 0x3e01cc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3e01ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3e01d0:
    // 0x3e01d0: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x3e01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_3e01d4:
    // 0x3e01d4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x3e01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3e01d8:
    // 0x3e01d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3e01dc:
    if (ctx->pc == 0x3E01DCu) {
        ctx->pc = 0x3E01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01D8u;
        // 0x3e01dc: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01E0u;
        goto label_3e01e0;
    }
    ctx->pc = 0x3E01D8u;
    {
        const bool branch_taken_0x3e01d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01D8u;
        // 0x3e01dc: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e01d8) {
            ctx->pc = 0x3E01F8u;
            goto label_3e01f8;
        }
    }
    ctx->pc = 0x3E01E0u;
label_3e01e0:
    // 0x3e01e0: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x3e01e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_3e01e4:
    // 0x3e01e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e01e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e01e8:
    // 0x3e01e8: 0x60f809  jalr        $v1
label_3e01ec:
    if (ctx->pc == 0x3E01ECu) {
        ctx->pc = 0x3E01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01E8u;
        // 0x3e01ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01F0u;
        goto label_3e01f0;
    }
    ctx->pc = 0x3E01E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E01F0u);
        ctx->pc = 0x3E01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01E8u;
        // 0x3e01ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E01E8u, 0x3E01F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E01F0u;
label_3e01f0:
    // 0x3e01f0: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x3e01f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_3e01f4:
    // 0x3e01f4: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x3e01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_3e01f8:
    // 0x3e01f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e01f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e01fc:
    // 0x3e01fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e01fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0200:
    // 0x3e0200: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e0200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0204:
    // 0x3e0204: 0xc0bb778  jal         func_2EDDE0
label_3e0208:
    if (ctx->pc == 0x3E0208u) {
        ctx->pc = 0x3E0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0204u;
        // 0x3e0208: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E020Cu;
        goto label_3e020c;
    }
    ctx->pc = 0x3E0204u;
    SET_GPR_U32(ctx, 31, 0x3E020Cu);
    ctx->pc = 0x3E0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0204u;
    // 0x3e0208: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3E0204u, 0x3E020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E020Cu;
label_3e020c:
    // 0x3e020c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3e020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3e0210:
    // 0x3e0210: 0x16230023  bne         $s1, $v1, . + 4 + (0x23 << 2)
label_3e0214:
    if (ctx->pc == 0x3E0214u) {
        ctx->pc = 0x3E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0210u;
        // 0x3e0214: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0218u;
        goto label_3e0218;
    }
    ctx->pc = 0x3E0210u;
    {
        const bool branch_taken_0x3e0210 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0210u;
        // 0x3e0214: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0210) {
            ctx->pc = 0x3E02A0u;
            goto label_3e02a0;
        }
    }
    ctx->pc = 0x3E0218u;
label_3e0218:
    // 0x3e0218: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x3e0218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3e021c:
    // 0x3e021c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3e0220:
    if (ctx->pc == 0x3E0220u) {
        ctx->pc = 0x3E0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E021Cu;
        // 0x3e0220: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0224u;
        goto label_3e0224;
    }
    ctx->pc = 0x3E021Cu;
    {
        const bool branch_taken_0x3e021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E021Cu;
        // 0x3e0220: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e021c) {
            ctx->pc = 0x3E0228u;
            goto label_3e0228;
        }
    }
    ctx->pc = 0x3E0224u;
label_3e0224:
    // 0x3e0224: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x3e0224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
label_3e0228:
    // 0x3e0228: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x3e0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3e022c:
    // 0x3e022c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3e022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3e0230:
    // 0x3e0230: 0x718023  subu        $s0, $v1, $s1
    ctx->pc = 0x3e0230u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e0234:
    // 0x3e0234: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3e0234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e0238:
    // 0x3e0238: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x3e0238u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3e023c:
    // 0x3e023c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3e0240:
    if (ctx->pc == 0x3E0240u) {
        ctx->pc = 0x3E0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E023Cu;
        // 0x3e0240: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0244u;
        goto label_3e0244;
    }
    ctx->pc = 0x3E023Cu;
    {
        const bool branch_taken_0x3e023c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E023Cu;
        // 0x3e0240: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e023c) {
            ctx->pc = 0x3E024Cu;
            goto label_3e024c;
        }
    }
    ctx->pc = 0x3E0244u;
label_3e0244:
    // 0x3e0244: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x3e0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_3e0248:
    // 0x3e0248: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x3e0248u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_3e024c:
    // 0x3e024c: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x3e024cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_3e0250:
    // 0x3e0250: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3e0250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3e0254:
    // 0x3e0254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3e0254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3e0258:
    // 0x3e0258: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x3e0258u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_3e025c:
    // 0x3e025c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3e025cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3e0260:
    // 0x3e0260: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x3e0260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_3e0264:
    // 0x3e0264: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x3e0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3e0268:
    // 0x3e0268: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3e026c:
    if (ctx->pc == 0x3E026Cu) {
        ctx->pc = 0x3E026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0268u;
        // 0x3e026c: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0270u;
        goto label_3e0270;
    }
    ctx->pc = 0x3E0268u;
    {
        const bool branch_taken_0x3e0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0268u;
        // 0x3e026c: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0268) {
            ctx->pc = 0x3E0288u;
            goto label_3e0288;
        }
    }
    ctx->pc = 0x3E0270u;
label_3e0270:
    // 0x3e0270: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x3e0270u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_3e0274:
    // 0x3e0274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e0274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0278:
    // 0x3e0278: 0x60f809  jalr        $v1
label_3e027c:
    if (ctx->pc == 0x3E027Cu) {
        ctx->pc = 0x3E027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0278u;
        // 0x3e027c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0280u;
        goto label_3e0280;
    }
    ctx->pc = 0x3E0278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E0280u);
        ctx->pc = 0x3E027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0278u;
        // 0x3e027c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0278u, 0x3E0280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0280u;
label_3e0280:
    // 0x3e0280: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x3e0280u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_3e0284:
    // 0x3e0284: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x3e0284u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_3e0288:
    // 0x3e0288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e028c:
    // 0x3e028c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0290:
    // 0x3e0290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e0290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0294:
    // 0x3e0294: 0xc0bb778  jal         func_2EDDE0
label_3e0298:
    if (ctx->pc == 0x3E0298u) {
        ctx->pc = 0x3E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0294u;
        // 0x3e0298: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E029Cu;
        goto label_3e029c;
    }
    ctx->pc = 0x3E0294u;
    SET_GPR_U32(ctx, 31, 0x3E029Cu);
    ctx->pc = 0x3E0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0294u;
    // 0x3e0298: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3E0294u, 0x3E029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E029Cu;
label_3e029c:
    // 0x3e029c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x3e029cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3e02a0:
    // 0x3e02a0: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x3e02a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
label_3e02a4:
    // 0x3e02a4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e02a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e02a8:
    // 0x3e02a8: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x3e02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_3e02ac:
    // 0x3e02ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e02acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e02b0:
    // 0x3e02b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e02b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e02b4:
    // 0x3e02b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e02b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e02b8:
    // 0x3e02b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e02b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e02bc:
    // 0x3e02bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3e02bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e02c0:
    // 0x3e02c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3e02c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e02c4:
    // 0x3e02c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e02c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e02c8:
    // 0x3e02c8: 0x3e00008  jr          $ra
label_3e02cc:
    if (ctx->pc == 0x3E02CCu) {
        ctx->pc = 0x3E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02C8u;
        // 0x3e02cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02D0u;
        goto label_fallthrough_0x3e02c8;
    }
    ctx->pc = 0x3E02C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02C8u;
        // 0x3e02cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E02C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e02c8:
    ctx->pc = 0x3E02D0u;
}
