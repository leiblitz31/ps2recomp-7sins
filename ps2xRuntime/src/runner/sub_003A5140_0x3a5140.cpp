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

// Function: sub_003A5140
// Address: 0x3a5140 - 0x3a53c0
void sub_003A5140_0x3a5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5140_0x3a5140");
#endif

    switch (ctx->pc) {
        case 0x3a5140u: goto label_3a5140;
        case 0x3a5144u: goto label_3a5144;
        case 0x3a5148u: goto label_3a5148;
        case 0x3a514cu: goto label_3a514c;
        case 0x3a5150u: goto label_3a5150;
        case 0x3a5154u: goto label_3a5154;
        case 0x3a5158u: goto label_3a5158;
        case 0x3a515cu: goto label_3a515c;
        case 0x3a5160u: goto label_3a5160;
        case 0x3a5164u: goto label_3a5164;
        case 0x3a5168u: goto label_3a5168;
        case 0x3a516cu: goto label_3a516c;
        case 0x3a5170u: goto label_3a5170;
        case 0x3a5174u: goto label_3a5174;
        case 0x3a5178u: goto label_3a5178;
        case 0x3a517cu: goto label_3a517c;
        case 0x3a5180u: goto label_3a5180;
        case 0x3a5184u: goto label_3a5184;
        case 0x3a5188u: goto label_3a5188;
        case 0x3a518cu: goto label_3a518c;
        case 0x3a5190u: goto label_3a5190;
        case 0x3a5194u: goto label_3a5194;
        case 0x3a5198u: goto label_3a5198;
        case 0x3a519cu: goto label_3a519c;
        case 0x3a51a0u: goto label_3a51a0;
        case 0x3a51a4u: goto label_3a51a4;
        case 0x3a51a8u: goto label_3a51a8;
        case 0x3a51acu: goto label_3a51ac;
        case 0x3a51b0u: goto label_3a51b0;
        case 0x3a51b4u: goto label_3a51b4;
        case 0x3a51b8u: goto label_3a51b8;
        case 0x3a51bcu: goto label_3a51bc;
        case 0x3a51c0u: goto label_3a51c0;
        case 0x3a51c4u: goto label_3a51c4;
        case 0x3a51c8u: goto label_3a51c8;
        case 0x3a51ccu: goto label_3a51cc;
        case 0x3a51d0u: goto label_3a51d0;
        case 0x3a51d4u: goto label_3a51d4;
        case 0x3a51d8u: goto label_3a51d8;
        case 0x3a51dcu: goto label_3a51dc;
        case 0x3a51e0u: goto label_3a51e0;
        case 0x3a51e4u: goto label_3a51e4;
        case 0x3a51e8u: goto label_3a51e8;
        case 0x3a51ecu: goto label_3a51ec;
        case 0x3a51f0u: goto label_3a51f0;
        case 0x3a51f4u: goto label_3a51f4;
        case 0x3a51f8u: goto label_3a51f8;
        case 0x3a51fcu: goto label_3a51fc;
        case 0x3a5200u: goto label_3a5200;
        case 0x3a5204u: goto label_3a5204;
        case 0x3a5208u: goto label_3a5208;
        case 0x3a520cu: goto label_3a520c;
        case 0x3a5210u: goto label_3a5210;
        case 0x3a5214u: goto label_3a5214;
        case 0x3a5218u: goto label_3a5218;
        case 0x3a521cu: goto label_3a521c;
        case 0x3a5220u: goto label_3a5220;
        case 0x3a5224u: goto label_3a5224;
        case 0x3a5228u: goto label_3a5228;
        case 0x3a522cu: goto label_3a522c;
        case 0x3a5230u: goto label_3a5230;
        case 0x3a5234u: goto label_3a5234;
        case 0x3a5238u: goto label_3a5238;
        case 0x3a523cu: goto label_3a523c;
        case 0x3a5240u: goto label_3a5240;
        case 0x3a5244u: goto label_3a5244;
        case 0x3a5248u: goto label_3a5248;
        case 0x3a524cu: goto label_3a524c;
        case 0x3a5250u: goto label_3a5250;
        case 0x3a5254u: goto label_3a5254;
        case 0x3a5258u: goto label_3a5258;
        case 0x3a525cu: goto label_3a525c;
        case 0x3a5260u: goto label_3a5260;
        case 0x3a5264u: goto label_3a5264;
        case 0x3a5268u: goto label_3a5268;
        case 0x3a526cu: goto label_3a526c;
        case 0x3a5270u: goto label_3a5270;
        case 0x3a5274u: goto label_3a5274;
        case 0x3a5278u: goto label_3a5278;
        case 0x3a527cu: goto label_3a527c;
        case 0x3a5280u: goto label_3a5280;
        case 0x3a5284u: goto label_3a5284;
        case 0x3a5288u: goto label_3a5288;
        case 0x3a528cu: goto label_3a528c;
        case 0x3a5290u: goto label_3a5290;
        case 0x3a5294u: goto label_3a5294;
        case 0x3a5298u: goto label_3a5298;
        case 0x3a529cu: goto label_3a529c;
        case 0x3a52a0u: goto label_3a52a0;
        case 0x3a52a4u: goto label_3a52a4;
        case 0x3a52a8u: goto label_3a52a8;
        case 0x3a52acu: goto label_3a52ac;
        case 0x3a52b0u: goto label_3a52b0;
        case 0x3a52b4u: goto label_3a52b4;
        case 0x3a52b8u: goto label_3a52b8;
        case 0x3a52bcu: goto label_3a52bc;
        case 0x3a52c0u: goto label_3a52c0;
        case 0x3a52c4u: goto label_3a52c4;
        case 0x3a52c8u: goto label_3a52c8;
        case 0x3a52ccu: goto label_3a52cc;
        case 0x3a52d0u: goto label_3a52d0;
        case 0x3a52d4u: goto label_3a52d4;
        case 0x3a52d8u: goto label_3a52d8;
        case 0x3a52dcu: goto label_3a52dc;
        case 0x3a52e0u: goto label_3a52e0;
        case 0x3a52e4u: goto label_3a52e4;
        case 0x3a52e8u: goto label_3a52e8;
        case 0x3a52ecu: goto label_3a52ec;
        case 0x3a52f0u: goto label_3a52f0;
        case 0x3a52f4u: goto label_3a52f4;
        case 0x3a52f8u: goto label_3a52f8;
        case 0x3a52fcu: goto label_3a52fc;
        case 0x3a5300u: goto label_3a5300;
        case 0x3a5304u: goto label_3a5304;
        case 0x3a5308u: goto label_3a5308;
        case 0x3a530cu: goto label_3a530c;
        case 0x3a5310u: goto label_3a5310;
        case 0x3a5314u: goto label_3a5314;
        case 0x3a5318u: goto label_3a5318;
        case 0x3a531cu: goto label_3a531c;
        case 0x3a5320u: goto label_3a5320;
        case 0x3a5324u: goto label_3a5324;
        case 0x3a5328u: goto label_3a5328;
        case 0x3a532cu: goto label_3a532c;
        case 0x3a5330u: goto label_3a5330;
        case 0x3a5334u: goto label_3a5334;
        case 0x3a5338u: goto label_3a5338;
        case 0x3a533cu: goto label_3a533c;
        case 0x3a5340u: goto label_3a5340;
        case 0x3a5344u: goto label_3a5344;
        case 0x3a5348u: goto label_3a5348;
        case 0x3a534cu: goto label_3a534c;
        case 0x3a5350u: goto label_3a5350;
        case 0x3a5354u: goto label_3a5354;
        case 0x3a5358u: goto label_3a5358;
        case 0x3a535cu: goto label_3a535c;
        case 0x3a5360u: goto label_3a5360;
        case 0x3a5364u: goto label_3a5364;
        case 0x3a5368u: goto label_3a5368;
        case 0x3a536cu: goto label_3a536c;
        case 0x3a5370u: goto label_3a5370;
        case 0x3a5374u: goto label_3a5374;
        case 0x3a5378u: goto label_3a5378;
        case 0x3a537cu: goto label_3a537c;
        case 0x3a5380u: goto label_3a5380;
        case 0x3a5384u: goto label_3a5384;
        case 0x3a5388u: goto label_3a5388;
        case 0x3a538cu: goto label_3a538c;
        case 0x3a5390u: goto label_3a5390;
        case 0x3a5394u: goto label_3a5394;
        case 0x3a5398u: goto label_3a5398;
        case 0x3a539cu: goto label_3a539c;
        case 0x3a53a0u: goto label_3a53a0;
        case 0x3a53a4u: goto label_3a53a4;
        case 0x3a53a8u: goto label_3a53a8;
        case 0x3a53acu: goto label_3a53ac;
        case 0x3a53b0u: goto label_3a53b0;
        case 0x3a53b4u: goto label_3a53b4;
        case 0x3a53b8u: goto label_3a53b8;
        case 0x3a53bcu: goto label_3a53bc;
        default: break;
    }

    ctx->pc = 0x3a5140u;

label_3a5140:
    // 0x3a5140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a5140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a5144:
    // 0x3a5144: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a5144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a5148:
    // 0x3a5148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a5148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a514c:
    // 0x3a514c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a514cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a5150:
    // 0x3a5150: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a5150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3a5154:
    // 0x3a5154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a5154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5158:
    // 0x3a5158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a515c:
    // 0x3a515c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3a5160:
    if (ctx->pc == 0x3A5160u) {
        ctx->pc = 0x3A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A515Cu;
        // 0x3a5160: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5164u;
        goto label_3a5164;
    }
    ctx->pc = 0x3A515Cu;
    {
        const bool branch_taken_0x3a515c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A515Cu;
        // 0x3a5160: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a515c) {
            ctx->pc = 0x3A5178u;
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A5164u;
label_3a5164:
    // 0x3a5164: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
label_3a5168:
    if (ctx->pc == 0x3A5168u) {
        ctx->pc = 0x3A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5164u;
        // 0x3a5168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A516Cu;
        goto label_3a516c;
    }
    ctx->pc = 0x3A5164u;
    {
        const bool branch_taken_0x3a5164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5164u;
        // 0x3a5168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5164) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A516Cu;
label_3a516c:
    // 0x3a516c: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x3a516cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3a5170:
    // 0x3a5170: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a5174:
    if (ctx->pc == 0x3A5174u) {
        ctx->pc = 0x3A5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5170u;
        // 0x3a5174: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5178u;
        goto label_3a5178;
    }
    ctx->pc = 0x3A5170u;
    {
        const bool branch_taken_0x3a5170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5170u;
        // 0x3a5174: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5170) {
            ctx->pc = 0x3A5180u;
            goto label_3a5180;
        }
    }
    ctx->pc = 0x3A5178u;
label_3a5178:
    // 0x3a5178: 0x1000008b  b           . + 4 + (0x8B << 2)
label_3a517c:
    if (ctx->pc == 0x3A517Cu) {
        ctx->pc = 0x3A517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5178u;
        // 0x3a517c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5180u;
        goto label_3a5180;
    }
    ctx->pc = 0x3A5178u;
    {
        const bool branch_taken_0x3a5178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5178u;
        // 0x3a517c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5178) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A5180u;
label_3a5180:
    // 0x3a5180: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_3a5184:
    if (ctx->pc == 0x3A5184u) {
        ctx->pc = 0x3A5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5180u;
        // 0x3a5184: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5188u;
        goto label_3a5188;
    }
    ctx->pc = 0x3A5180u;
    {
        const bool branch_taken_0x3a5180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5180u;
        // 0x3a5184: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5180) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A5188u;
label_3a5188:
    // 0x3a5188: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3a5188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3a518c:
    // 0x3a518c: 0x2442bf40  addiu       $v0, $v0, -0x40C0
    ctx->pc = 0x3a518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950720));
label_3a5190:
    // 0x3a5190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a5190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a5194:
    // 0x3a5194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a5194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a5198:
    // 0x3a5198: 0x800008  jr          $a0
label_3a519c:
    if (ctx->pc == 0x3A519Cu) {
        ctx->pc = 0x3A51A0u;
        goto label_3a51a0;
    }
    ctx->pc = 0x3A5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A51A0u: goto label_3a51a0;
            case 0x3A51D8u: goto label_3a51d8;
            case 0x3A5210u: goto label_3a5210;
            case 0x3A5248u: goto label_3a5248;
            case 0x3A5280u: goto label_3a5280;
            case 0x3A52C0u: goto label_3a52c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A51A0u;
label_3a51a0:
    // 0x3a51a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a51a4:
    // 0x3a51a4: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x3a51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
label_3a51a8:
    // 0x3a51a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a51a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a51ac:
    // 0x3a51ac: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_3a51b0:
    if (ctx->pc == 0x3A51B0u) {
        ctx->pc = 0x3A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ACu;
        // 0x3a51b0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51B4u;
        goto label_3a51b4;
    }
    ctx->pc = 0x3A51ACu;
    {
        const bool branch_taken_0x3a51ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ACu;
        // 0x3a51b0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51ac) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A51B4u;
label_3a51b4:
    // 0x3a51b4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a51b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a51b8:
    // 0x3a51b8: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a51bc:
    // 0x3a51bc: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a51c0:
    // 0x3a51c0: 0x40f809  jalr        $v0
label_3a51c4:
    if (ctx->pc == 0x3A51C4u) {
        ctx->pc = 0x3A51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C0u;
        // 0x3a51c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51C8u;
        goto label_3a51c8;
    }
    ctx->pc = 0x3A51C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A51C8u);
        ctx->pc = 0x3A51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C0u;
        // 0x3a51c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A51C0u, 0x3A51C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A51C8u;
label_3a51c8:
    // 0x3a51c8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_3a51cc:
    if (ctx->pc == 0x3A51CCu) {
        ctx->pc = 0x3A51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C8u;
        // 0x3a51cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51D0u;
        goto label_3a51d0;
    }
    ctx->pc = 0x3A51C8u;
    {
        const bool branch_taken_0x3a51c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C8u;
        // 0x3a51cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51c8) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A51D0u;
label_3a51d0:
    // 0x3a51d0: 0x10000076  b           . + 4 + (0x76 << 2)
label_3a51d4:
    if (ctx->pc == 0x3A51D4u) {
        ctx->pc = 0x3A51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51D0u;
        // 0x3a51d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51D8u;
        goto label_3a51d8;
    }
    ctx->pc = 0x3A51D0u;
    {
        const bool branch_taken_0x3a51d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51D0u;
        // 0x3a51d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51d0) {
            ctx->pc = 0x3A53ACu;
            goto label_3a53ac;
        }
    }
    ctx->pc = 0x3A51D8u;
label_3a51d8:
    // 0x3a51d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a51dc:
    // 0x3a51dc: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x3a51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_3a51e0:
    // 0x3a51e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a51e4:
    // 0x3a51e4: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
label_3a51e8:
    if (ctx->pc == 0x3A51E8u) {
        ctx->pc = 0x3A51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51E4u;
        // 0x3a51e8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51ECu;
        goto label_3a51ec;
    }
    ctx->pc = 0x3A51E4u;
    {
        const bool branch_taken_0x3a51e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51E4u;
        // 0x3a51e8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51e4) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A51ECu;
label_3a51ec:
    // 0x3a51ec: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a51f0:
    // 0x3a51f0: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a51f4:
    // 0x3a51f4: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a51f8:
    // 0x3a51f8: 0x40f809  jalr        $v0
label_3a51fc:
    if (ctx->pc == 0x3A51FCu) {
        ctx->pc = 0x3A51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51F8u;
        // 0x3a51fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5200u;
        goto label_3a5200;
    }
    ctx->pc = 0x3A51F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5200u);
        ctx->pc = 0x3A51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51F8u;
        // 0x3a51fc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A51F8u, 0x3A5200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5200u;
label_3a5200:
    // 0x3a5200: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3a5204:
    if (ctx->pc == 0x3A5204u) {
        ctx->pc = 0x3A5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5200u;
        // 0x3a5204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5208u;
        goto label_3a5208;
    }
    ctx->pc = 0x3A5200u;
    {
        const bool branch_taken_0x3a5200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5200u;
        // 0x3a5204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5200) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A5208u;
label_3a5208:
    // 0x3a5208: 0x10000068  b           . + 4 + (0x68 << 2)
label_3a520c:
    if (ctx->pc == 0x3A520Cu) {
        ctx->pc = 0x3A520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5208u;
        // 0x3a520c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5210u;
        goto label_3a5210;
    }
    ctx->pc = 0x3A5208u;
    {
        const bool branch_taken_0x3a5208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5208u;
        // 0x3a520c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5208) {
            ctx->pc = 0x3A53ACu;
            goto label_3a53ac;
        }
    }
    ctx->pc = 0x3A5210u;
label_3a5210:
    // 0x3a5210: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a5214:
    // 0x3a5214: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x3a5214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_3a5218:
    // 0x3a5218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a521c:
    // 0x3a521c: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
label_3a5220:
    if (ctx->pc == 0x3A5220u) {
        ctx->pc = 0x3A5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A521Cu;
        // 0x3a5220: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5224u;
        goto label_3a5224;
    }
    ctx->pc = 0x3A521Cu;
    {
        const bool branch_taken_0x3a521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A521Cu;
        // 0x3a5220: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a521c) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A5224u;
label_3a5224:
    // 0x3a5224: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a5224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a5228:
    // 0x3a5228: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a522c:
    // 0x3a522c: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a5230:
    // 0x3a5230: 0x40f809  jalr        $v0
label_3a5234:
    if (ctx->pc == 0x3A5234u) {
        ctx->pc = 0x3A5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5230u;
        // 0x3a5234: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5238u;
        goto label_3a5238;
    }
    ctx->pc = 0x3A5230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5238u);
        ctx->pc = 0x3A5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5230u;
        // 0x3a5234: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5230u, 0x3A5238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5238u;
label_3a5238:
    // 0x3a5238: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3a523c:
    if (ctx->pc == 0x3A523Cu) {
        ctx->pc = 0x3A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5238u;
        // 0x3a523c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5240u;
        goto label_3a5240;
    }
    ctx->pc = 0x3A5238u;
    {
        const bool branch_taken_0x3a5238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5238u;
        // 0x3a523c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5238) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A5240u;
label_3a5240:
    // 0x3a5240: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3a5244:
    if (ctx->pc == 0x3A5244u) {
        ctx->pc = 0x3A5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5240u;
        // 0x3a5244: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5248u;
        goto label_3a5248;
    }
    ctx->pc = 0x3A5240u;
    {
        const bool branch_taken_0x3a5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5240u;
        // 0x3a5244: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5240) {
            ctx->pc = 0x3A53ACu;
            goto label_3a53ac;
        }
    }
    ctx->pc = 0x3A5248u;
label_3a5248:
    // 0x3a5248: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a524c:
    // 0x3a524c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x3a524cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_3a5250:
    // 0x3a5250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a5254:
    // 0x3a5254: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
label_3a5258:
    if (ctx->pc == 0x3A5258u) {
        ctx->pc = 0x3A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5254u;
        // 0x3a5258: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A525Cu;
        goto label_3a525c;
    }
    ctx->pc = 0x3A5254u;
    {
        const bool branch_taken_0x3a5254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5254u;
        // 0x3a5258: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5254) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A525Cu;
label_3a525c:
    // 0x3a525c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a525cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a5260:
    // 0x3a5260: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a5264:
    // 0x3a5264: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a5264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a5268:
    // 0x3a5268: 0x40f809  jalr        $v0
label_3a526c:
    if (ctx->pc == 0x3A526Cu) {
        ctx->pc = 0x3A526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5268u;
        // 0x3a526c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5270u;
        goto label_3a5270;
    }
    ctx->pc = 0x3A5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5270u);
        ctx->pc = 0x3A526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5268u;
        // 0x3a526c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5268u, 0x3A5270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5270u;
label_3a5270:
    // 0x3a5270: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a5274:
    if (ctx->pc == 0x3A5274u) {
        ctx->pc = 0x3A5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5270u;
        // 0x3a5274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5278u;
        goto label_3a5278;
    }
    ctx->pc = 0x3A5270u;
    {
        const bool branch_taken_0x3a5270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5270u;
        // 0x3a5274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5270) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A5278u;
label_3a5278:
    // 0x3a5278: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3a527c:
    if (ctx->pc == 0x3A527Cu) {
        ctx->pc = 0x3A527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5278u;
        // 0x3a527c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5280u;
        goto label_3a5280;
    }
    ctx->pc = 0x3A5278u;
    {
        const bool branch_taken_0x3a5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5278u;
        // 0x3a527c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5278) {
            ctx->pc = 0x3A53ACu;
            goto label_3a53ac;
        }
    }
    ctx->pc = 0x3A5280u;
label_3a5280:
    // 0x3a5280: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a5280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a5284:
    // 0x3a5284: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x3a5284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
label_3a5288:
    // 0x3a5288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a528c:
    // 0x3a528c: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
label_3a5290:
    if (ctx->pc == 0x3A5290u) {
        ctx->pc = 0x3A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A528Cu;
        // 0x3a5290: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5294u;
        goto label_3a5294;
    }
    ctx->pc = 0x3A528Cu;
    {
        const bool branch_taken_0x3a528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A528Cu;
        // 0x3a5290: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a528c) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A5294u;
label_3a5294:
    // 0x3a5294: 0x1040ffb8  beqz        $v0, . + 4 + (-0x48 << 2)
label_3a5298:
    if (ctx->pc == 0x3A5298u) {
        ctx->pc = 0x3A5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5294u;
        // 0x3a5298: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A529Cu;
        goto label_3a529c;
    }
    ctx->pc = 0x3A5294u;
    {
        const bool branch_taken_0x3a5294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5294u;
        // 0x3a5298: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5294) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A529Cu;
label_3a529c:
    // 0x3a529c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a529cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a52a0:
    // 0x3a52a0: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a52a4:
    // 0x3a52a4: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a52a8:
    // 0x3a52a8: 0x40f809  jalr        $v0
label_3a52ac:
    if (ctx->pc == 0x3A52ACu) {
        ctx->pc = 0x3A52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52A8u;
        // 0x3a52ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52B0u;
        goto label_3a52b0;
    }
    ctx->pc = 0x3A52A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A52B0u);
        ctx->pc = 0x3A52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52A8u;
        // 0x3a52ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52A8u, 0x3A52B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A52B0u;
label_3a52b0:
    // 0x3a52b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3a52b4:
    if (ctx->pc == 0x3A52B4u) {
        ctx->pc = 0x3A52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B0u;
        // 0x3a52b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52B8u;
        goto label_3a52b8;
    }
    ctx->pc = 0x3A52B0u;
    {
        const bool branch_taken_0x3a52b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B0u;
        // 0x3a52b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52b0) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A52B8u;
label_3a52b8:
    // 0x3a52b8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3a52bc:
    if (ctx->pc == 0x3A52BCu) {
        ctx->pc = 0x3A52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B8u;
        // 0x3a52bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52C0u;
        goto label_3a52c0;
    }
    ctx->pc = 0x3A52B8u;
    {
        const bool branch_taken_0x3a52b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B8u;
        // 0x3a52bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52b8) {
            ctx->pc = 0x3A53ACu;
            goto label_3a53ac;
        }
    }
    ctx->pc = 0x3A52C0u;
label_3a52c0:
    // 0x3a52c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a52c4:
    // 0x3a52c4: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x3a52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
label_3a52c8:
    // 0x3a52c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a52c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a52cc:
    // 0x3a52cc: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
label_3a52d0:
    if (ctx->pc == 0x3A52D0u) {
        ctx->pc = 0x3A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52CCu;
        // 0x3a52d0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52D4u;
        goto label_3a52d4;
    }
    ctx->pc = 0x3A52CCu;
    {
        const bool branch_taken_0x3a52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52CCu;
        // 0x3a52d0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52cc) {
            ctx->pc = 0x3A5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A52D4u;
label_3a52d4:
    // 0x3a52d4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a52d8:
    // 0x3a52d8: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a52dc:
    // 0x3a52dc: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a52e0:
    // 0x3a52e0: 0x40f809  jalr        $v0
label_3a52e4:
    if (ctx->pc == 0x3A52E4u) {
        ctx->pc = 0x3A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E0u;
        // 0x3a52e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52E8u;
        goto label_3a52e8;
    }
    ctx->pc = 0x3A52E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A52E8u);
        ctx->pc = 0x3A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E0u;
        // 0x3a52e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52E0u, 0x3A52E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A52E8u;
label_3a52e8:
    // 0x3a52e8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_3a52ec:
    if (ctx->pc == 0x3A52ECu) {
        ctx->pc = 0x3A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E8u;
        // 0x3a52ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52F0u;
        goto label_3a52f0;
    }
    ctx->pc = 0x3A52E8u;
    {
        const bool branch_taken_0x3a52e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E8u;
        // 0x3a52ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52e8) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A52F0u;
label_3a52f0:
    // 0x3a52f0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a52f4:
    // 0x3a52f4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a52f8:
    // 0x3a52f8: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x3a52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_3a52fc:
    // 0x3a52fc: 0x24a59a00  addiu       $a1, $a1, -0x6600
    ctx->pc = 0x3a52fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
label_3a5300:
    // 0x3a5300: 0x40f809  jalr        $v0
label_3a5304:
    if (ctx->pc == 0x3A5304u) {
        ctx->pc = 0x3A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5300u;
        // 0x3a5304: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5308u;
        goto label_3a5308;
    }
    ctx->pc = 0x3A5300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5308u);
        ctx->pc = 0x3A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5300u;
        // 0x3a5304: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5300u, 0x3A5308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5308u;
label_3a5308:
    // 0x3a5308: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_3a530c:
    if (ctx->pc == 0x3A530Cu) {
        ctx->pc = 0x3A530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5308u;
        // 0x3a530c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5310u;
        goto label_3a5310;
    }
    ctx->pc = 0x3A5308u;
    {
        const bool branch_taken_0x3a5308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5308u;
        // 0x3a530c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5308) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A5310u;
label_3a5310:
    // 0x3a5310: 0xc112582  jal         func_449608
label_3a5314:
    if (ctx->pc == 0x3A5314u) {
        ctx->pc = 0x3A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5310u;
        // 0x3a5314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5318u;
        goto label_3a5318;
    }
    ctx->pc = 0x3A5310u;
    SET_GPR_U32(ctx, 31, 0x3A5318u);
    ctx->pc = 0x3A5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5310u;
    // 0x3a5314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A5310u, 0x3A5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5318u;
label_3a5318:
    // 0x3a5318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a531c:
    // 0x3a531c: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
label_3a5320:
    if (ctx->pc == 0x3A5320u) {
        ctx->pc = 0x3A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A531Cu;
        // 0x3a5320: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5324u;
        goto label_3a5324;
    }
    ctx->pc = 0x3A531Cu;
    {
        const bool branch_taken_0x3a531c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A531Cu;
        // 0x3a5320: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a531c) {
            ctx->pc = 0x3A539Cu;
            goto label_3a539c;
        }
    }
    ctx->pc = 0x3A5324u;
label_3a5324:
    // 0x3a5324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5328:
    // 0x3a5328: 0xc112584  jal         func_449610
label_3a532c:
    if (ctx->pc == 0x3A532Cu) {
        ctx->pc = 0x3A532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5328u;
        // 0x3a532c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5330u;
        goto label_3a5330;
    }
    ctx->pc = 0x3A5328u;
    SET_GPR_U32(ctx, 31, 0x3A5330u);
    ctx->pc = 0x3A532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5328u;
    // 0x3a532c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449610u, 0x3A5328u, 0x3A5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5330u;
label_3a5330:
    // 0x3a5330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5334:
    // 0x3a5334: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_3a5338:
    if (ctx->pc == 0x3A5338u) {
        ctx->pc = 0x3A5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5334u;
        // 0x3a5338: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A533Cu;
        goto label_3a533c;
    }
    ctx->pc = 0x3A5334u;
    {
        const bool branch_taken_0x3a5334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5334u;
        // 0x3a5338: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5334) {
            ctx->pc = 0x3A5380u;
            goto label_3a5380;
        }
    }
    ctx->pc = 0x3A533Cu;
label_3a533c:
    // 0x3a533c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a533cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3a5340:
    // 0x3a5340: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3a5340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3a5344:
    // 0x3a5344: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3a5344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3a5348:
    // 0x3a5348: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3a5348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_3a534c:
    // 0x3a534c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a534cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_3a5350:
    // 0x3a5350: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a5350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_3a5354:
    // 0x3a5354: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a5354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_3a5358:
    // 0x3a5358: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a5358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_3a535c:
    // 0x3a535c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3a535cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_3a5360:
    // 0x3a5360: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a5360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_3a5364:
    // 0x3a5364: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a5364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_3a5368:
    // 0x3a5368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a536c:
    // 0x3a536c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x3a536cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_3a5370:
    // 0x3a5370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a5370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5374:
    // 0x3a5374: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x3a5374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_3a5378:
    // 0x3a5378: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a537c:
    if (ctx->pc == 0x3A537Cu) {
        ctx->pc = 0x3A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5378u;
        // 0x3a537c: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5380u;
        goto label_3a5380;
    }
    ctx->pc = 0x3A5378u;
    {
        const bool branch_taken_0x3a5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5378u;
        // 0x3a537c: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5378) {
            ctx->pc = 0x3A5384u;
            goto label_3a5384;
        }
    }
    ctx->pc = 0x3A5380u;
label_3a5380:
    // 0x3a5380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5384:
    // 0x3a5384: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3a5388:
    if (ctx->pc == 0x3A5388u) {
        ctx->pc = 0x3A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5384u;
        // 0x3a5388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A538Cu;
        goto label_3a538c;
    }
    ctx->pc = 0x3A5384u;
    {
        const bool branch_taken_0x3a5384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5384u;
        // 0x3a5388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5384) {
            ctx->pc = 0x3A53A8u;
            goto label_3a53a8;
        }
    }
    ctx->pc = 0x3A538Cu;
label_3a538c:
    // 0x3a538c: 0xc112582  jal         func_449608
label_3a5390:
    if (ctx->pc == 0x3A5390u) {
        ctx->pc = 0x3A5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A538Cu;
        // 0x3a5390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5394u;
        goto label_3a5394;
    }
    ctx->pc = 0x3A538Cu;
    SET_GPR_U32(ctx, 31, 0x3A5394u);
    ctx->pc = 0x3A5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A538Cu;
    // 0x3a5390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A538Cu, 0x3A5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5394u;
label_3a5394:
    // 0x3a5394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5398:
    // 0x3a5398: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3a5398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3a539c:
    // 0x3a539c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a53a0:
    // 0x3a53a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3a53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3a53a4:
    // 0x3a53a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a53a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a53a8:
    // 0x3a53a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a53a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a53ac:
    // 0x3a53ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a53acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a53b0:
    // 0x3a53b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a53b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a53b4:
    // 0x3a53b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a53b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a53b8:
    // 0x3a53b8: 0x3e00008  jr          $ra
label_3a53bc:
    if (ctx->pc == 0x3A53BCu) {
        ctx->pc = 0x3A53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53B8u;
        // 0x3a53bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A53C0u;
        goto label_fallthrough_0x3a53b8;
    }
    ctx->pc = 0x3A53B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53B8u;
        // 0x3a53bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A53B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a53b8:
    ctx->pc = 0x3A53C0u;
}
