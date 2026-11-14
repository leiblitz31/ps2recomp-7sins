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

// Function: sub_003E3370
// Address: 0x3e3370 - 0x3e3928
void sub_003E3370_0x3e3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3370_0x3e3370");
#endif

    switch (ctx->pc) {
        case 0x3e33c4u: goto label_3e33c4;
        case 0x3e33d8u: goto label_3e33d8;
        case 0x3e33f4u: goto label_3e33f4;
        case 0x3e3408u: goto label_3e3408;
        case 0x3e3410u: goto label_3e3410;
        case 0x3e3420u: goto label_3e3420;
        case 0x3e3438u: goto label_3e3438;
        case 0x3e3458u: goto label_3e3458;
        case 0x3e3464u: goto label_3e3464;
        case 0x3e347cu: goto label_3e347c;
        case 0x3e3490u: goto label_3e3490;
        case 0x3e34b8u: goto label_3e34b8;
        case 0x3e34e8u: goto label_3e34e8;
        case 0x3e350cu: goto label_3e350c;
        case 0x3e3524u: goto label_3e3524;
        case 0x3e3538u: goto label_3e3538;
        case 0x3e3550u: goto label_3e3550;
        case 0x3e3564u: goto label_3e3564;
        case 0x3e357cu: goto label_3e357c;
        case 0x3e3590u: goto label_3e3590;
        case 0x3e35a8u: goto label_3e35a8;
        case 0x3e35bcu: goto label_3e35bc;
        case 0x3e35d4u: goto label_3e35d4;
        case 0x3e35e8u: goto label_3e35e8;
        case 0x3e3600u: goto label_3e3600;
        case 0x3e3614u: goto label_3e3614;
        case 0x3e362cu: goto label_3e362c;
        case 0x3e3640u: goto label_3e3640;
        case 0x3e3658u: goto label_3e3658;
        case 0x3e366cu: goto label_3e366c;
        case 0x3e3684u: goto label_3e3684;
        case 0x3e3698u: goto label_3e3698;
        case 0x3e36b0u: goto label_3e36b0;
        case 0x3e36c4u: goto label_3e36c4;
        case 0x3e36dcu: goto label_3e36dc;
        case 0x3e36f0u: goto label_3e36f0;
        case 0x3e3708u: goto label_3e3708;
        case 0x3e371cu: goto label_3e371c;
        case 0x3e3734u: goto label_3e3734;
        case 0x3e3748u: goto label_3e3748;
        case 0x3e3760u: goto label_3e3760;
        case 0x3e3774u: goto label_3e3774;
        case 0x3e378cu: goto label_3e378c;
        case 0x3e37a0u: goto label_3e37a0;
        case 0x3e37b4u: goto label_3e37b4;
        case 0x3e37c8u: goto label_3e37c8;
        case 0x3e37ccu: goto label_3e37cc;
        case 0x3e37d8u: goto label_3e37d8;
        case 0x3e37e0u: goto label_3e37e0;
        case 0x3e37ecu: goto label_3e37ec;
        case 0x3e37fcu: goto label_3e37fc;
        case 0x3e380cu: goto label_3e380c;
        case 0x3e3824u: goto label_3e3824;
        case 0x3e3838u: goto label_3e3838;
        case 0x3e384cu: goto label_3e384c;
        case 0x3e385cu: goto label_3e385c;
        case 0x3e3870u: goto label_3e3870;
        case 0x3e3894u: goto label_3e3894;
        case 0x3e38a4u: goto label_3e38a4;
        case 0x3e38ccu: goto label_3e38cc;
        case 0x3e3904u: goto label_3e3904;
        default: break;
    }

    ctx->pc = 0x3e3370u;

    // 0x3e3370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e3370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e3374: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e3374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3e3378: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e337c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e337cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3380: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e3380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3e3384: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3e3388: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3e3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3e338c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3e338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3e3390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3394: 0x92220210  lbu         $v0, 0x210($s1)
    ctx->pc = 0x3e3394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x3e3398: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3e3398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e339c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3E339Cu;
    {
        const bool branch_taken_0x3e339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E339Cu;
        // 0x3e33a0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e339c) {
            ctx->pc = 0x3E3450u;
            goto label_3e3450;
        }
    }
    ctx->pc = 0x3E33A4u;
    // 0x3e33a4: 0x92340210  lbu         $s4, 0x210($s1)
    ctx->pc = 0x3e33a4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x3e33a8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x3e33a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e33ac: 0x26750030  addiu       $s5, $s3, 0x30
    ctx->pc = 0x3e33acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3e33b0: 0x2149023  subu        $s2, $s0, $s4
    ctx->pc = 0x3e33b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x3e33b4: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x3e33b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x3e33b8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3e33b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x3e33bc: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3E33BCu;
    SET_GPR_U32(ctx, 31, 0x3E33C4u);
    ctx->pc = 0x3E33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E33BCu;
    // 0x3e33c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3E33BCu, 0x3E33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E33C4u;
label_3e33c4:
    // 0x3e33c4: 0xa2300210  sb          $s0, 0x210($s1)
    ctx->pc = 0x3e33c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 528), (uint8_t)GPR_U32(ctx, 16));
    // 0x3e33c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e33c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e33cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e33ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e33d0: 0xc0f84d8  jal         func_3E1360
    ctx->pc = 0x3E33D0u;
    SET_GPR_U32(ctx, 31, 0x3E33D8u);
    ctx->pc = 0x3E33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E33D0u;
    // 0x3e33d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1360u, 0x3E33D0u, 0x3E33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E33D8u;
label_3e33d8:
    // 0x3e33d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E33D8u;
    {
        const bool branch_taken_0x3e33d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33D8u;
        // 0x3e33dc: 0x2e820004  sltiu       $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33d8) {
            ctx->pc = 0x3E3438u;
            goto label_3e3438;
        }
    }
    ctx->pc = 0x3E33E0u;
    // 0x3e33e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E33E0u;
    {
        const bool branch_taken_0x3e33e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33E0u;
        // 0x3e33e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33e0) {
            ctx->pc = 0x3E3428u;
            goto label_3e3428;
        }
    }
    ctx->pc = 0x3E33E8u;
    // 0x3e33e8: 0x2646fffc  addiu       $a2, $s2, -0x4
    ctx->pc = 0x3e33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3e33ec: 0xc0f84d8  jal         func_3E1360
    ctx->pc = 0x3E33ECu;
    SET_GPR_U32(ctx, 31, 0x3E33F4u);
    ctx->pc = 0x3E33F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E33ECu;
    // 0x3e33f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1360u, 0x3E33ECu, 0x3E33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E33F4u;
label_3e33f4:
    // 0x3e33f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E33F4u;
    {
        const bool branch_taken_0x3e33f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33F4u;
        // 0x3e33f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33f4) {
            ctx->pc = 0x3E3428u;
            goto label_3e3428;
        }
    }
    ctx->pc = 0x3E33FCu;
    // 0x3e33fc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e3400: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3400u;
    SET_GPR_U32(ctx, 31, 0x3E3408u);
    ctx->pc = 0x3E3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3400u;
    // 0x3e3404: 0x24a5e548  addiu       $a1, $a1, -0x1AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3400u, 0x3E3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3408u;
label_3e3408:
    // 0x3e3408: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E3408u;
    {
        const bool branch_taken_0x3e3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3408u;
        // 0x3e340c: 0x2e820003  sltiu       $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3408) {
            ctx->pc = 0x3E343Cu;
            goto label_3e343c;
        }
    }
    ctx->pc = 0x3E3410u;
label_3e3410:
    // 0x3e3410: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e3414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3418: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3418u;
    SET_GPR_U32(ctx, 31, 0x3E3420u);
    ctx->pc = 0x3E341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3418u;
    // 0x3e341c: 0x24a5e580  addiu       $a1, $a1, -0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3418u, 0x3E3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3420u;
label_3e3420:
    // 0x3e3420: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x3E3420u;
    {
        const bool branch_taken_0x3e3420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3420u;
        // 0x3e3424: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3420) {
            ctx->pc = 0x3E3908u;
            goto label_3e3908;
        }
    }
    ctx->pc = 0x3E3428u;
label_3e3428:
    // 0x3e3428: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e342c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3430: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E3430u;
    SET_GPR_U32(ctx, 31, 0x3E3438u);
    ctx->pc = 0x3E3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3430u;
    // 0x3e3434: 0x24a5e558  addiu       $a1, $a1, -0x1AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3430u, 0x3E3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3438u;
label_3e3438:
    // 0x3e3438: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x3e3438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e343c:
    // 0x3e343c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E343Cu;
    {
        const bool branch_taken_0x3e343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E343Cu;
        // 0x3e3440: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e343c) {
            ctx->pc = 0x3E3450u;
            goto label_3e3450;
        }
    }
    ctx->pc = 0x3E3444u;
    // 0x3e3444: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3e3444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e3448: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e3448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e344c: 0xfe2200f8  sd          $v0, 0xF8($s1)
    ctx->pc = 0x3e344cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 2));
label_3e3450:
    // 0x3e3450: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3E3450u;
    {
        const bool branch_taken_0x3e3450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3450u;
        // 0x3e3454: 0x26320200  addiu       $s2, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3450) {
            ctx->pc = 0x3E37C8u;
            goto label_3e37c8;
        }
    }
    ctx->pc = 0x3E3458u;
label_3e3458:
    // 0x3e3458: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x3e3458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x3e345c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E345Cu;
    SET_GPR_U32(ctx, 31, 0x3E3464u);
    ctx->pc = 0x3E3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E345Cu;
    // 0x3e3460: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E345Cu, 0x3E3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3464u;
label_3e3464:
    // 0x3e3464: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3464u;
    {
        const bool branch_taken_0x3e3464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3464u;
        // 0x3e3468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3464) {
            ctx->pc = 0x3E3484u;
            goto label_3e3484;
        }
    }
    ctx->pc = 0x3E346Cu;
    // 0x3e346c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e346cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3474: 0xc0fc9e2  jal         func_3F2788
    ctx->pc = 0x3E3474u;
    SET_GPR_U32(ctx, 31, 0x3E347Cu);
    ctx->pc = 0x3E3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3474u;
    // 0x3e3478: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2788u, 0x3E3474u, 0x3E347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E347Cu;
label_3e347c:
    // 0x3e347c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x3E347Cu;
    {
        const bool branch_taken_0x3e347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E347Cu;
        // 0x3e3480: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e347c) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3484u;
label_3e3484:
    // 0x3e3484: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3e3488: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3488u;
    SET_GPR_U32(ctx, 31, 0x3E3490u);
    ctx->pc = 0x3E348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3488u;
    // 0x3e348c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3488u, 0x3E3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3490u;
label_3e3490:
    // 0x3e3490: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E3490u;
    {
        const bool branch_taken_0x3e3490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3490u;
        // 0x3e3494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3490) {
            ctx->pc = 0x3E3500u;
            goto label_3e3500;
        }
    }
    ctx->pc = 0x3E3498u;
    // 0x3e3498: 0xde2400f8  ld          $a0, 0xF8($s1)
    ctx->pc = 0x3e3498u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e349c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e34a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E34A0u;
    {
        const bool branch_taken_0x3e34a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e34a0) {
            ctx->pc = 0x3E34A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E34A0u;
            // 0x3e34a4: 0x9223020a  lbu         $v1, 0x20A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E34C0u;
            goto label_3e34c0;
        }
    }
    ctx->pc = 0x3E34A8u;
    // 0x3e34a8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e34ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e34acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34b0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E34B0u;
    SET_GPR_U32(ctx, 31, 0x3E34B8u);
    ctx->pc = 0x3E34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34B0u;
    // 0x3e34b4: 0x24a5e580  addiu       $a1, $a1, -0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E34B0u, 0x3E34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34B8u;
label_3e34b8:
    // 0x3e34b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E34B8u;
    {
        const bool branch_taken_0x3e34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34B8u;
        // 0x3e34bc: 0xde2200f8  ld          $v0, 0xF8($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34b8) {
            ctx->pc = 0x3E34ECu;
            goto label_3e34ec;
        }
    }
    ctx->pc = 0x3E34C0u;
label_3e34c0:
    // 0x3e34c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e34c4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E34C4u;
    {
        const bool branch_taken_0x3e34c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e34c4) {
            ctx->pc = 0x3E34C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E34C4u;
            // 0x3e34c8: 0xde2200f8  ld          $v0, 0xF8($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E34ECu;
            goto label_3e34ec;
        }
    }
    ctx->pc = 0x3E34CCu;
    // 0x3e34cc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3e34ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3e34d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E34D0u;
    {
        const bool branch_taken_0x3e34d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e34d0) {
            ctx->pc = 0x3E34D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E34D0u;
            // 0x3e34d4: 0xde2200f8  ld          $v0, 0xF8($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E34ECu;
            goto label_3e34ec;
        }
    }
    ctx->pc = 0x3E34D8u;
    // 0x3e34d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e34d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e34dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e34dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34e0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E34E0u;
    SET_GPR_U32(ctx, 31, 0x3E34E8u);
    ctx->pc = 0x3E34E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34E0u;
    // 0x3e34e4: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E34E0u, 0x3E34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34E8u;
label_3e34e8:
    // 0x3e34e8: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3e34e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
label_3e34ec:
    // 0x3e34ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e34f0: 0xfe3001e8  sd          $s0, 0x1E8($s1)
    ctx->pc = 0x3e34f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 16));
    // 0x3e34f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e34f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e34f8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x3E34F8u;
    {
        const bool branch_taken_0x3e34f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34F8u;
        // 0x3e34fc: 0xfe2200f8  sd          $v0, 0xF8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34f8) {
            ctx->pc = 0x3E3904u;
            goto label_3e3904;
        }
    }
    ctx->pc = 0x3E3500u;
label_3e3500:
    // 0x3e3500: 0x2785ac58  addiu       $a1, $gp, -0x53A8
    ctx->pc = 0x3e3500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945880));
    // 0x3e3504: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3504u;
    SET_GPR_U32(ctx, 31, 0x3E350Cu);
    ctx->pc = 0x3E3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3504u;
    // 0x3e3508: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3504u, 0x3E350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E350Cu;
label_3e350c:
    // 0x3e350c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E350Cu;
    {
        const bool branch_taken_0x3e350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E350Cu;
        // 0x3e3510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e350c) {
            ctx->pc = 0x3E352Cu;
            goto label_3e352c;
        }
    }
    ctx->pc = 0x3E3514u;
    // 0x3e3514: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e351c: 0xc0fd52c  jal         func_3F54B0
    ctx->pc = 0x3E351Cu;
    SET_GPR_U32(ctx, 31, 0x3E3524u);
    ctx->pc = 0x3E3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E351Cu;
    // 0x3e3520: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F54B0u, 0x3E351Cu, 0x3E3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3524u;
label_3e3524:
    // 0x3e3524: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3E3524u;
    {
        const bool branch_taken_0x3e3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3524u;
        // 0x3e3528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3524) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E352Cu;
label_3e352c:
    // 0x3e352c: 0x2785ac60  addiu       $a1, $gp, -0x53A0
    ctx->pc = 0x3e352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945888));
    // 0x3e3530: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3530u;
    SET_GPR_U32(ctx, 31, 0x3E3538u);
    ctx->pc = 0x3E3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3530u;
    // 0x3e3534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3530u, 0x3E3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3538u;
label_3e3538:
    // 0x3e3538: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3538u;
    {
        const bool branch_taken_0x3e3538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3538u;
        // 0x3e353c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3538) {
            ctx->pc = 0x3E3558u;
            goto label_3e3558;
        }
    }
    ctx->pc = 0x3E3540u;
    // 0x3e3540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3548: 0xc0fcd5c  jal         func_3F3570
    ctx->pc = 0x3E3548u;
    SET_GPR_U32(ctx, 31, 0x3E3550u);
    ctx->pc = 0x3E354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3548u;
    // 0x3e354c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3570u, 0x3E3548u, 0x3E3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3550u;
label_3e3550:
    // 0x3e3550: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3E3550u;
    {
        const bool branch_taken_0x3e3550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3550u;
        // 0x3e3554: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3550) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3558u;
label_3e3558:
    // 0x3e3558: 0x2785ac68  addiu       $a1, $gp, -0x5398
    ctx->pc = 0x3e3558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945896));
    // 0x3e355c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E355Cu;
    SET_GPR_U32(ctx, 31, 0x3E3564u);
    ctx->pc = 0x3E3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E355Cu;
    // 0x3e3560: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E355Cu, 0x3E3564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3564u;
label_3e3564:
    // 0x3e3564: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3564u;
    {
        const bool branch_taken_0x3e3564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3564u;
        // 0x3e3568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3564) {
            ctx->pc = 0x3E3584u;
            goto label_3e3584;
        }
    }
    ctx->pc = 0x3E356Cu;
    // 0x3e356c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e356cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3574: 0xc0fcb5c  jal         func_3F2D70
    ctx->pc = 0x3E3574u;
    SET_GPR_U32(ctx, 31, 0x3E357Cu);
    ctx->pc = 0x3E3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3574u;
    // 0x3e3578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2D70u, 0x3E3574u, 0x3E357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E357Cu;
label_3e357c:
    // 0x3e357c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3E357Cu;
    {
        const bool branch_taken_0x3e357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E357Cu;
        // 0x3e3580: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e357c) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3584u;
label_3e3584:
    // 0x3e3584: 0x2785ac70  addiu       $a1, $gp, -0x5390
    ctx->pc = 0x3e3584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945904));
    // 0x3e3588: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3588u;
    SET_GPR_U32(ctx, 31, 0x3E3590u);
    ctx->pc = 0x3E358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3588u;
    // 0x3e358c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3588u, 0x3E3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3590u;
label_3e3590:
    // 0x3e3590: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3590u;
    {
        const bool branch_taken_0x3e3590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3590u;
        // 0x3e3594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3590) {
            ctx->pc = 0x3E35B0u;
            goto label_3e35b0;
        }
    }
    ctx->pc = 0x3E3598u;
    // 0x3e3598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e359c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a0: 0xc0fd666  jal         func_3F5998
    ctx->pc = 0x3E35A0u;
    SET_GPR_U32(ctx, 31, 0x3E35A8u);
    ctx->pc = 0x3E35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35A0u;
    // 0x3e35a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5998u, 0x3E35A0u, 0x3E35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35A8u;
label_3e35a8:
    // 0x3e35a8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3E35A8u;
    {
        const bool branch_taken_0x3e35a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35A8u;
        // 0x3e35ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e35a8) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E35B0u;
label_3e35b0:
    // 0x3e35b0: 0x2785ac88  addiu       $a1, $gp, -0x5378
    ctx->pc = 0x3e35b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945928));
    // 0x3e35b4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E35B4u;
    SET_GPR_U32(ctx, 31, 0x3E35BCu);
    ctx->pc = 0x3E35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35B4u;
    // 0x3e35b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E35B4u, 0x3E35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35BCu;
label_3e35bc:
    // 0x3e35bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E35BCu;
    {
        const bool branch_taken_0x3e35bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35BCu;
        // 0x3e35c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e35bc) {
            ctx->pc = 0x3E35DCu;
            goto label_3e35dc;
        }
    }
    ctx->pc = 0x3E35C4u;
    // 0x3e35c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e35c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e35c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35cc: 0xc0fd8ac  jal         func_3F62B0
    ctx->pc = 0x3E35CCu;
    SET_GPR_U32(ctx, 31, 0x3E35D4u);
    ctx->pc = 0x3E35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35CCu;
    // 0x3e35d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F62B0u, 0x3E35CCu, 0x3E35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35D4u;
label_3e35d4:
    // 0x3e35d4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3E35D4u;
    {
        const bool branch_taken_0x3e35d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35D4u;
        // 0x3e35d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e35d4) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E35DCu;
label_3e35dc:
    // 0x3e35dc: 0x2785ac90  addiu       $a1, $gp, -0x5370
    ctx->pc = 0x3e35dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945936));
    // 0x3e35e0: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E35E0u;
    SET_GPR_U32(ctx, 31, 0x3E35E8u);
    ctx->pc = 0x3E35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35E0u;
    // 0x3e35e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E35E0u, 0x3E35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35E8u;
label_3e35e8:
    // 0x3e35e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E35E8u;
    {
        const bool branch_taken_0x3e35e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E35E8u;
        // 0x3e35ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e35e8) {
            ctx->pc = 0x3E3608u;
            goto label_3e3608;
        }
    }
    ctx->pc = 0x3E35F0u;
    // 0x3e35f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e35f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e35f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35f8: 0xc0fd994  jal         func_3F6650
    ctx->pc = 0x3E35F8u;
    SET_GPR_U32(ctx, 31, 0x3E3600u);
    ctx->pc = 0x3E35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35F8u;
    // 0x3e35fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6650u, 0x3E35F8u, 0x3E3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3600u;
label_3e3600:
    // 0x3e3600: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3E3600u;
    {
        const bool branch_taken_0x3e3600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3600u;
        // 0x3e3604: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3600) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3608u;
label_3e3608:
    // 0x3e3608: 0x2785ac98  addiu       $a1, $gp, -0x5368
    ctx->pc = 0x3e3608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945944));
    // 0x3e360c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E360Cu;
    SET_GPR_U32(ctx, 31, 0x3E3614u);
    ctx->pc = 0x3E3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E360Cu;
    // 0x3e3610: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E360Cu, 0x3E3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3614u;
label_3e3614:
    // 0x3e3614: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3614u;
    {
        const bool branch_taken_0x3e3614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3614u;
        // 0x3e3618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3614) {
            ctx->pc = 0x3E3634u;
            goto label_3e3634;
        }
    }
    ctx->pc = 0x3E361Cu;
    // 0x3e361c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e361cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3624: 0xc0fdb1c  jal         func_3F6C70
    ctx->pc = 0x3E3624u;
    SET_GPR_U32(ctx, 31, 0x3E362Cu);
    ctx->pc = 0x3E3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3624u;
    // 0x3e3628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6C70u, 0x3E3624u, 0x3E362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E362Cu;
label_3e362c:
    // 0x3e362c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3E362Cu;
    {
        const bool branch_taken_0x3e362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E362Cu;
        // 0x3e3630: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e362c) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3634u;
label_3e3634:
    // 0x3e3634: 0x2785aca0  addiu       $a1, $gp, -0x5360
    ctx->pc = 0x3e3634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945952));
    // 0x3e3638: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3638u;
    SET_GPR_U32(ctx, 31, 0x3E3640u);
    ctx->pc = 0x3E363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3638u;
    // 0x3e363c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3638u, 0x3E3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3640u;
label_3e3640:
    // 0x3e3640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3640u;
    {
        const bool branch_taken_0x3e3640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3640u;
        // 0x3e3644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3640) {
            ctx->pc = 0x3E3660u;
            goto label_3e3660;
        }
    }
    ctx->pc = 0x3E3648u;
    // 0x3e3648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e364c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3650: 0xc0fd7c4  jal         func_3F5F10
    ctx->pc = 0x3E3650u;
    SET_GPR_U32(ctx, 31, 0x3E3658u);
    ctx->pc = 0x3E3654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3650u;
    // 0x3e3654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5F10u, 0x3E3650u, 0x3E3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3658u;
label_3e3658:
    // 0x3e3658: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3E3658u;
    {
        const bool branch_taken_0x3e3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3658u;
        // 0x3e365c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3658) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3660u;
label_3e3660:
    // 0x3e3660: 0x2785aca8  addiu       $a1, $gp, -0x5358
    ctx->pc = 0x3e3660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945960));
    // 0x3e3664: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3664u;
    SET_GPR_U32(ctx, 31, 0x3E366Cu);
    ctx->pc = 0x3E3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3664u;
    // 0x3e3668: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3664u, 0x3E366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E366Cu;
label_3e366c:
    // 0x3e366c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E366Cu;
    {
        const bool branch_taken_0x3e366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E366Cu;
        // 0x3e3670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e366c) {
            ctx->pc = 0x3E368Cu;
            goto label_3e368c;
        }
    }
    ctx->pc = 0x3E3674u;
    // 0x3e3674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e367c: 0xc0fcc68  jal         func_3F31A0
    ctx->pc = 0x3E367Cu;
    SET_GPR_U32(ctx, 31, 0x3E3684u);
    ctx->pc = 0x3E3680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E367Cu;
    // 0x3e3680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F31A0u, 0x3E367Cu, 0x3E3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3684u;
label_3e3684:
    // 0x3e3684: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3E3684u;
    {
        const bool branch_taken_0x3e3684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3684u;
        // 0x3e3688: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3684) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E368Cu;
label_3e368c:
    // 0x3e368c: 0x2785acb8  addiu       $a1, $gp, -0x5348
    ctx->pc = 0x3e368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945976));
    // 0x3e3690: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3690u;
    SET_GPR_U32(ctx, 31, 0x3E3698u);
    ctx->pc = 0x3E3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3690u;
    // 0x3e3694: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3690u, 0x3E3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3698u;
label_3e3698:
    // 0x3e3698: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3698u;
    {
        const bool branch_taken_0x3e3698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3698u;
        // 0x3e369c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3698) {
            ctx->pc = 0x3E36B8u;
            goto label_3e36b8;
        }
    }
    ctx->pc = 0x3E36A0u;
    // 0x3e36a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e36a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36a8: 0xc0fd000  jal         func_3F4000
    ctx->pc = 0x3E36A8u;
    SET_GPR_U32(ctx, 31, 0x3E36B0u);
    ctx->pc = 0x3E36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36A8u;
    // 0x3e36ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4000u, 0x3E36A8u, 0x3E36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36B0u;
label_3e36b0:
    // 0x3e36b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3E36B0u;
    {
        const bool branch_taken_0x3e36b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36B0u;
        // 0x3e36b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36b0) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E36B8u;
label_3e36b8:
    // 0x3e36b8: 0x2785ac78  addiu       $a1, $gp, -0x5388
    ctx->pc = 0x3e36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945912));
    // 0x3e36bc: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E36BCu;
    SET_GPR_U32(ctx, 31, 0x3E36C4u);
    ctx->pc = 0x3E36C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36BCu;
    // 0x3e36c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E36BCu, 0x3E36C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36C4u;
label_3e36c4:
    // 0x3e36c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E36C4u;
    {
        const bool branch_taken_0x3e36c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36C4u;
        // 0x3e36c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36c4) {
            ctx->pc = 0x3E36E4u;
            goto label_3e36e4;
        }
    }
    ctx->pc = 0x3E36CCu;
    // 0x3e36cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e36ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36d4: 0xc0fd150  jal         func_3F4540
    ctx->pc = 0x3E36D4u;
    SET_GPR_U32(ctx, 31, 0x3E36DCu);
    ctx->pc = 0x3E36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36D4u;
    // 0x3e36d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4540u, 0x3E36D4u, 0x3E36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36DCu;
label_3e36dc:
    // 0x3e36dc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E36DCu;
    {
        const bool branch_taken_0x3e36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36DCu;
        // 0x3e36e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36dc) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E36E4u;
label_3e36e4:
    // 0x3e36e4: 0x2785acb0  addiu       $a1, $gp, -0x5350
    ctx->pc = 0x3e36e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945968));
    // 0x3e36e8: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E36E8u;
    SET_GPR_U32(ctx, 31, 0x3E36F0u);
    ctx->pc = 0x3E36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36E8u;
    // 0x3e36ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E36E8u, 0x3E36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36F0u;
label_3e36f0:
    // 0x3e36f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E36F0u;
    {
        const bool branch_taken_0x3e36f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36F0u;
        // 0x3e36f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36f0) {
            ctx->pc = 0x3E3710u;
            goto label_3e3710;
        }
    }
    ctx->pc = 0x3E36F8u;
    // 0x3e36f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e36f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e36fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e36fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3700: 0xc0fd290  jal         func_3F4A40
    ctx->pc = 0x3E3700u;
    SET_GPR_U32(ctx, 31, 0x3E3708u);
    ctx->pc = 0x3E3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3700u;
    // 0x3e3704: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4A40u, 0x3E3700u, 0x3E3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3708u;
label_3e3708:
    // 0x3e3708: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3E3708u;
    {
        const bool branch_taken_0x3e3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3708u;
        // 0x3e370c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3708) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3710u;
label_3e3710:
    // 0x3e3710: 0x2785acc0  addiu       $a1, $gp, -0x5340
    ctx->pc = 0x3e3710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945984));
    // 0x3e3714: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3714u;
    SET_GPR_U32(ctx, 31, 0x3E371Cu);
    ctx->pc = 0x3E3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3714u;
    // 0x3e3718: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3714u, 0x3E371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E371Cu;
label_3e371c:
    // 0x3e371c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E371Cu;
    {
        const bool branch_taken_0x3e371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E371Cu;
        // 0x3e3720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e371c) {
            ctx->pc = 0x3E373Cu;
            goto label_3e373c;
        }
    }
    ctx->pc = 0x3E3724u;
    // 0x3e3724: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e372c: 0xc0fdcec  jal         func_3F73B0
    ctx->pc = 0x3E372Cu;
    SET_GPR_U32(ctx, 31, 0x3E3734u);
    ctx->pc = 0x3E3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E372Cu;
    // 0x3e3730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F73B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F73B0u, 0x3E372Cu, 0x3E3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3734u;
label_3e3734:
    // 0x3e3734: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3E3734u;
    {
        const bool branch_taken_0x3e3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3734u;
        // 0x3e3738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3734) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E373Cu;
label_3e373c:
    // 0x3e373c: 0x2785acc8  addiu       $a1, $gp, -0x5338
    ctx->pc = 0x3e373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945992));
    // 0x3e3740: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3740u;
    SET_GPR_U32(ctx, 31, 0x3E3748u);
    ctx->pc = 0x3E3744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3740u;
    // 0x3e3744: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3740u, 0x3E3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3748u;
label_3e3748:
    // 0x3e3748: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3748u;
    {
        const bool branch_taken_0x3e3748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3748u;
        // 0x3e374c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3748) {
            ctx->pc = 0x3E3768u;
            goto label_3e3768;
        }
    }
    ctx->pc = 0x3E3750u;
    // 0x3e3750: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3758: 0xc0fdc20  jal         func_3F7080
    ctx->pc = 0x3E3758u;
    SET_GPR_U32(ctx, 31, 0x3E3760u);
    ctx->pc = 0x3E375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3758u;
    // 0x3e375c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7080u, 0x3E3758u, 0x3E3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3760u;
label_3e3760:
    // 0x3e3760: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3E3760u;
    {
        const bool branch_taken_0x3e3760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3760u;
        // 0x3e3764: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3760) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3768u;
label_3e3768:
    // 0x3e3768: 0x2785acd0  addiu       $a1, $gp, -0x5330
    ctx->pc = 0x3e3768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946000));
    // 0x3e376c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E376Cu;
    SET_GPR_U32(ctx, 31, 0x3E3774u);
    ctx->pc = 0x3E3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E376Cu;
    // 0x3e3770: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E376Cu, 0x3E3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3774u;
label_3e3774:
    // 0x3e3774: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3774u;
    {
        const bool branch_taken_0x3e3774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3774u;
        // 0x3e3778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3774) {
            ctx->pc = 0x3E3794u;
            goto label_3e3794;
        }
    }
    ctx->pc = 0x3E377Cu;
    // 0x3e377c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3784: 0xc0fd3bc  jal         func_3F4EF0
    ctx->pc = 0x3E3784u;
    SET_GPR_U32(ctx, 31, 0x3E378Cu);
    ctx->pc = 0x3E3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3784u;
    // 0x3e3788: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4EF0u, 0x3E3784u, 0x3E378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E378Cu;
label_3e378c:
    // 0x3e378c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E378Cu;
    {
        const bool branch_taken_0x3e378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E378Cu;
        // 0x3e3790: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e378c) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3794u;
label_3e3794:
    // 0x3e3794: 0x2785acd8  addiu       $a1, $gp, -0x5328
    ctx->pc = 0x3e3794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946008));
    // 0x3e3798: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3798u;
    SET_GPR_U32(ctx, 31, 0x3E37A0u);
    ctx->pc = 0x3E379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3798u;
    // 0x3e379c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3798u, 0x3E37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37A0u;
label_3e37a0:
    // 0x3e37a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E37A0u;
    {
        const bool branch_taken_0x3e37a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37A0u;
        // 0x3e37a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37a0) {
            ctx->pc = 0x3E37BCu;
            goto label_3e37bc;
        }
    }
    ctx->pc = 0x3E37A8u;
    // 0x3e37a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37ac: 0xc0fdd60  jal         func_3F7580
    ctx->pc = 0x3E37ACu;
    SET_GPR_U32(ctx, 31, 0x3E37B4u);
    ctx->pc = 0x3E37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37ACu;
    // 0x3e37b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7580u, 0x3E37ACu, 0x3E37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37B4u;
label_3e37b4:
    // 0x3e37b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E37B4u;
    {
        const bool branch_taken_0x3e37b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37B4u;
        // 0x3e37b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37b4) {
            ctx->pc = 0x3E37CCu;
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E37BCu;
label_3e37bc:
    // 0x3e37bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e37bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37c0: 0xc0fddee  jal         func_3F77B8
    ctx->pc = 0x3E37C0u;
    SET_GPR_U32(ctx, 31, 0x3E37C8u);
    ctx->pc = 0x3E37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37C0u;
    // 0x3e37c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F77B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F77B8u, 0x3E37C0u, 0x3E37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37C8u;
label_3e37c8:
    // 0x3e37c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e37c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e37cc:
    // 0x3e37cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e37ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e37d0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3E37D0u;
    SET_GPR_U32(ctx, 31, 0x3E37D8u);
    ctx->pc = 0x3E37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37D0u;
    // 0x3e37d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3E37D0u, 0x3E37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37D8u;
label_3e37d8:
    // 0x3e37d8: 0xc0fe70c  jal         func_3F9C30
    ctx->pc = 0x3E37D8u;
    SET_GPR_U32(ctx, 31, 0x3E37E0u);
    ctx->pc = 0x3E37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37D8u;
    // 0x3e37dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C30u, 0x3E37D8u, 0x3E37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37E0u;
label_3e37e0:
    // 0x3e37e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e37e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37e4: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x3E37E4u;
    SET_GPR_U32(ctx, 31, 0x3E37ECu);
    ctx->pc = 0x3E37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37E4u;
    // 0x3e37e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x3E37E4u, 0x3E37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37ECu;
label_3e37ec:
    // 0x3e37ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e37f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37f4: 0xc0fe71e  jal         func_3F9C78
    ctx->pc = 0x3E37F4u;
    SET_GPR_U32(ctx, 31, 0x3E37FCu);
    ctx->pc = 0x3E37F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37F4u;
    // 0x3e37f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C78u, 0x3E37F4u, 0x3E37FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37FCu;
label_3e37fc:
    // 0x3e37fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3800: 0x2785ac38  addiu       $a1, $gp, -0x53C8
    ctx->pc = 0x3e3800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945848));
    // 0x3e3804: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3804u;
    SET_GPR_U32(ctx, 31, 0x3E380Cu);
    ctx->pc = 0x3E3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3804u;
    // 0x3e3808: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3804u, 0x3E380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E380Cu;
label_3e380c:
    // 0x3e380c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E380Cu;
    {
        const bool branch_taken_0x3e380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E380Cu;
        // 0x3e3810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e380c) {
            ctx->pc = 0x3E382Cu;
            goto label_3e382c;
        }
    }
    ctx->pc = 0x3E3814u;
    // 0x3e3814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e381c: 0xc0fc94e  jal         func_3F2538
    ctx->pc = 0x3E381Cu;
    SET_GPR_U32(ctx, 31, 0x3E3824u);
    ctx->pc = 0x3E3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E381Cu;
    // 0x3e3820: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2538u, 0x3E381Cu, 0x3E3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3824u;
label_3e3824:
    // 0x3e3824: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x3E3824u;
    {
        const bool branch_taken_0x3e3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3824u;
        // 0x3e3828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3824) {
            ctx->pc = 0x3E37CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E382Cu;
label_3e382c:
    // 0x3e382c: 0x2785ac48  addiu       $a1, $gp, -0x53B8
    ctx->pc = 0x3e382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945864));
    // 0x3e3830: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3830u;
    SET_GPR_U32(ctx, 31, 0x3E3838u);
    ctx->pc = 0x3E3834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3830u;
    // 0x3e3834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3830u, 0x3E3838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3838u;
label_3e3838:
    // 0x3e3838: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3838u;
    {
        const bool branch_taken_0x3e3838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3838u;
        // 0x3e383c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3838) {
            ctx->pc = 0x3E3854u;
            goto label_3e3854;
        }
    }
    ctx->pc = 0x3E3840u;
    // 0x3e3840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e3840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3844: 0xc0fe7a6  jal         func_3F9E98
    ctx->pc = 0x3E3844u;
    SET_GPR_U32(ctx, 31, 0x3E384Cu);
    ctx->pc = 0x3E3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3844u;
    // 0x3e3848: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9E98u, 0x3E3844u, 0x3E384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E384Cu;
label_3e384c:
    // 0x3e384c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x3E384Cu;
    {
        const bool branch_taken_0x3e384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E384Cu;
        // 0x3e3850: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e384c) {
            ctx->pc = 0x3E37CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E3854u;
label_3e3854:
    // 0x3e3854: 0xc0f8606  jal         func_3E1818
    ctx->pc = 0x3E3854u;
    SET_GPR_U32(ctx, 31, 0x3E385Cu);
    ctx->pc = 0x3E3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3854u;
    // 0x3e3858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3E3854u, 0x3E385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E385Cu;
label_3e385c:
    // 0x3e385c: 0x1040fefe  beqz        $v0, . + 4 + (-0x102 << 2)
    ctx->pc = 0x3E385Cu;
    {
        const bool branch_taken_0x3e385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E385Cu;
        // 0x3e3860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e385c) {
            ctx->pc = 0x3E3458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3458;
        }
    }
    ctx->pc = 0x3E3864u;
    // 0x3e3864: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e3864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3e3868: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E3868u;
    SET_GPR_U32(ctx, 31, 0x3E3870u);
    ctx->pc = 0x3E386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3868u;
    // 0x3e386c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3868u, 0x3E3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3870u;
label_3e3870:
    // 0x3e3870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3870u;
    {
        const bool branch_taken_0x3e3870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3870u;
        // 0x3e3874: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3870) {
            ctx->pc = 0x3E3888u;
            goto label_3e3888;
        }
    }
    ctx->pc = 0x3E3878u;
    // 0x3e3878: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3e3878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e387c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e3880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e3884: 0xfe2200f8  sd          $v0, 0xF8($s1)
    ctx->pc = 0x3e3884u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 2));
label_3e3888:
    // 0x3e3888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e388c: 0xc0fddee  jal         func_3F77B8
    ctx->pc = 0x3E388Cu;
    SET_GPR_U32(ctx, 31, 0x3E3894u);
    ctx->pc = 0x3E3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E388Cu;
    // 0x3e3890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F77B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F77B8u, 0x3E388Cu, 0x3E3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3894u;
label_3e3894:
    // 0x3e3894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3898: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x3e3898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x3e389c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E389Cu;
    SET_GPR_U32(ctx, 31, 0x3E38A4u);
    ctx->pc = 0x3E38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E389Cu;
    // 0x3e38a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E389Cu, 0x3E38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38A4u;
label_3e38a4:
    // 0x3e38a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E38A4u;
    {
        const bool branch_taken_0x3e38a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38A4u;
        // 0x3e38a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38a4) {
            ctx->pc = 0x3E38C0u;
            goto label_3e38c0;
        }
    }
    ctx->pc = 0x3E38ACu;
    // 0x3e38ac: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3e38acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e38b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e38b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e38b8: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3E38B8u;
    {
        const bool branch_taken_0x3e38b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38B8u;
        // 0x3e38bc: 0xfe2200f8  sd          $v0, 0xF8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38b8) {
            ctx->pc = 0x3E37C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e37c8;
        }
    }
    ctx->pc = 0x3E38C0u;
label_3e38c0:
    // 0x3e38c0: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e38c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3e38c4: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3E38C4u;
    SET_GPR_U32(ctx, 31, 0x3E38CCu);
    ctx->pc = 0x3E38C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38C4u;
    // 0x3e38c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E38C4u, 0x3E38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38CCu;
label_3e38cc:
    // 0x3e38cc: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x3E38CCu;
    {
        const bool branch_taken_0x3e38cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38CCu;
        // 0x3e38d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38cc) {
            ctx->pc = 0x3E37CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e37cc;
        }
    }
    ctx->pc = 0x3E38D4u;
    // 0x3e38d4: 0xde2400f8  ld          $a0, 0xF8($s1)
    ctx->pc = 0x3e38d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3e38d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e38d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e38dc: 0x1040fecc  beqz        $v0, . + 4 + (-0x134 << 2)
    ctx->pc = 0x3E38DCu;
    {
        const bool branch_taken_0x3e38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38DCu;
        // 0x3e38e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38dc) {
            ctx->pc = 0x3E3410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3410;
        }
    }
    ctx->pc = 0x3E38E4u;
    // 0x3e38e4: 0x9223020a  lbu         $v1, 0x20A($s1)
    ctx->pc = 0x3e38e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
    // 0x3e38e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E38E8u;
    {
        const bool branch_taken_0x3e38e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38E8u;
        // 0x3e38ec: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38e8) {
            ctx->pc = 0x3E3904u;
            goto label_3e3904;
        }
    }
    ctx->pc = 0x3E38F0u;
    // 0x3e38f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E38F0u;
    {
        const bool branch_taken_0x3e38f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38F0u;
        // 0x3e38f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38f0) {
            ctx->pc = 0x3E3904u;
            goto label_3e3904;
        }
    }
    ctx->pc = 0x3E38F8u;
    // 0x3e38f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e38fc: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E38FCu;
    SET_GPR_U32(ctx, 31, 0x3E3904u);
    ctx->pc = 0x3E3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38FCu;
    // 0x3e3900: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E38FCu, 0x3E3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3904u;
label_3e3904:
    // 0x3e3904: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e3904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e3908:
    // 0x3e3908: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e3908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e390c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e390cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e3910: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e3910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e3914: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3e3914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e3918: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3e3918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e391c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3920: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3920u;
        // 0x3e3924: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3928u;
}
