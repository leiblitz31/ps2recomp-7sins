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

// Function: sub_004105A0
// Address: 0x4105a0 - 0x410848
void sub_004105A0_0x4105a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004105A0_0x4105a0");
#endif

    switch (ctx->pc) {
        case 0x4105a0u: goto label_4105a0;
        case 0x4105a4u: goto label_4105a4;
        case 0x4105a8u: goto label_4105a8;
        case 0x4105acu: goto label_4105ac;
        case 0x4105b0u: goto label_4105b0;
        case 0x4105b4u: goto label_4105b4;
        case 0x4105b8u: goto label_4105b8;
        case 0x4105bcu: goto label_4105bc;
        case 0x4105c0u: goto label_4105c0;
        case 0x4105c4u: goto label_4105c4;
        case 0x4105c8u: goto label_4105c8;
        case 0x4105ccu: goto label_4105cc;
        case 0x4105d0u: goto label_4105d0;
        case 0x4105d4u: goto label_4105d4;
        case 0x4105d8u: goto label_4105d8;
        case 0x4105dcu: goto label_4105dc;
        case 0x4105e0u: goto label_4105e0;
        case 0x4105e4u: goto label_4105e4;
        case 0x4105e8u: goto label_4105e8;
        case 0x4105ecu: goto label_4105ec;
        case 0x4105f0u: goto label_4105f0;
        case 0x4105f4u: goto label_4105f4;
        case 0x4105f8u: goto label_4105f8;
        case 0x4105fcu: goto label_4105fc;
        case 0x410600u: goto label_410600;
        case 0x410604u: goto label_410604;
        case 0x410608u: goto label_410608;
        case 0x41060cu: goto label_41060c;
        case 0x410610u: goto label_410610;
        case 0x410614u: goto label_410614;
        case 0x410618u: goto label_410618;
        case 0x41061cu: goto label_41061c;
        case 0x410620u: goto label_410620;
        case 0x410624u: goto label_410624;
        case 0x410628u: goto label_410628;
        case 0x41062cu: goto label_41062c;
        case 0x410630u: goto label_410630;
        case 0x410634u: goto label_410634;
        case 0x410638u: goto label_410638;
        case 0x41063cu: goto label_41063c;
        case 0x410640u: goto label_410640;
        case 0x410644u: goto label_410644;
        case 0x410648u: goto label_410648;
        case 0x41064cu: goto label_41064c;
        case 0x410650u: goto label_410650;
        case 0x410654u: goto label_410654;
        case 0x410658u: goto label_410658;
        case 0x41065cu: goto label_41065c;
        case 0x410660u: goto label_410660;
        case 0x410664u: goto label_410664;
        case 0x410668u: goto label_410668;
        case 0x41066cu: goto label_41066c;
        case 0x410670u: goto label_410670;
        case 0x410674u: goto label_410674;
        case 0x410678u: goto label_410678;
        case 0x41067cu: goto label_41067c;
        case 0x410680u: goto label_410680;
        case 0x410684u: goto label_410684;
        case 0x410688u: goto label_410688;
        case 0x41068cu: goto label_41068c;
        case 0x410690u: goto label_410690;
        case 0x410694u: goto label_410694;
        case 0x410698u: goto label_410698;
        case 0x41069cu: goto label_41069c;
        case 0x4106a0u: goto label_4106a0;
        case 0x4106a4u: goto label_4106a4;
        case 0x4106a8u: goto label_4106a8;
        case 0x4106acu: goto label_4106ac;
        case 0x4106b0u: goto label_4106b0;
        case 0x4106b4u: goto label_4106b4;
        case 0x4106b8u: goto label_4106b8;
        case 0x4106bcu: goto label_4106bc;
        case 0x4106c0u: goto label_4106c0;
        case 0x4106c4u: goto label_4106c4;
        case 0x4106c8u: goto label_4106c8;
        case 0x4106ccu: goto label_4106cc;
        case 0x4106d0u: goto label_4106d0;
        case 0x4106d4u: goto label_4106d4;
        case 0x4106d8u: goto label_4106d8;
        case 0x4106dcu: goto label_4106dc;
        case 0x4106e0u: goto label_4106e0;
        case 0x4106e4u: goto label_4106e4;
        case 0x4106e8u: goto label_4106e8;
        case 0x4106ecu: goto label_4106ec;
        case 0x4106f0u: goto label_4106f0;
        case 0x4106f4u: goto label_4106f4;
        case 0x4106f8u: goto label_4106f8;
        case 0x4106fcu: goto label_4106fc;
        case 0x410700u: goto label_410700;
        case 0x410704u: goto label_410704;
        case 0x410708u: goto label_410708;
        case 0x41070cu: goto label_41070c;
        case 0x410710u: goto label_410710;
        case 0x410714u: goto label_410714;
        case 0x410718u: goto label_410718;
        case 0x41071cu: goto label_41071c;
        case 0x410720u: goto label_410720;
        case 0x410724u: goto label_410724;
        case 0x410728u: goto label_410728;
        case 0x41072cu: goto label_41072c;
        case 0x410730u: goto label_410730;
        case 0x410734u: goto label_410734;
        case 0x410738u: goto label_410738;
        case 0x41073cu: goto label_41073c;
        case 0x410740u: goto label_410740;
        case 0x410744u: goto label_410744;
        case 0x410748u: goto label_410748;
        case 0x41074cu: goto label_41074c;
        case 0x410750u: goto label_410750;
        case 0x410754u: goto label_410754;
        case 0x410758u: goto label_410758;
        case 0x41075cu: goto label_41075c;
        case 0x410760u: goto label_410760;
        case 0x410764u: goto label_410764;
        case 0x410768u: goto label_410768;
        case 0x41076cu: goto label_41076c;
        case 0x410770u: goto label_410770;
        case 0x410774u: goto label_410774;
        case 0x410778u: goto label_410778;
        case 0x41077cu: goto label_41077c;
        case 0x410780u: goto label_410780;
        case 0x410784u: goto label_410784;
        case 0x410788u: goto label_410788;
        case 0x41078cu: goto label_41078c;
        case 0x410790u: goto label_410790;
        case 0x410794u: goto label_410794;
        case 0x410798u: goto label_410798;
        case 0x41079cu: goto label_41079c;
        case 0x4107a0u: goto label_4107a0;
        case 0x4107a4u: goto label_4107a4;
        case 0x4107a8u: goto label_4107a8;
        case 0x4107acu: goto label_4107ac;
        case 0x4107b0u: goto label_4107b0;
        case 0x4107b4u: goto label_4107b4;
        case 0x4107b8u: goto label_4107b8;
        case 0x4107bcu: goto label_4107bc;
        case 0x4107c0u: goto label_4107c0;
        case 0x4107c4u: goto label_4107c4;
        case 0x4107c8u: goto label_4107c8;
        case 0x4107ccu: goto label_4107cc;
        case 0x4107d0u: goto label_4107d0;
        case 0x4107d4u: goto label_4107d4;
        case 0x4107d8u: goto label_4107d8;
        case 0x4107dcu: goto label_4107dc;
        case 0x4107e0u: goto label_4107e0;
        case 0x4107e4u: goto label_4107e4;
        case 0x4107e8u: goto label_4107e8;
        case 0x4107ecu: goto label_4107ec;
        case 0x4107f0u: goto label_4107f0;
        case 0x4107f4u: goto label_4107f4;
        case 0x4107f8u: goto label_4107f8;
        case 0x4107fcu: goto label_4107fc;
        case 0x410800u: goto label_410800;
        case 0x410804u: goto label_410804;
        case 0x410808u: goto label_410808;
        case 0x41080cu: goto label_41080c;
        case 0x410810u: goto label_410810;
        case 0x410814u: goto label_410814;
        case 0x410818u: goto label_410818;
        case 0x41081cu: goto label_41081c;
        case 0x410820u: goto label_410820;
        case 0x410824u: goto label_410824;
        case 0x410828u: goto label_410828;
        case 0x41082cu: goto label_41082c;
        case 0x410830u: goto label_410830;
        case 0x410834u: goto label_410834;
        case 0x410838u: goto label_410838;
        case 0x41083cu: goto label_41083c;
        case 0x410840u: goto label_410840;
        case 0x410844u: goto label_410844;
        default: break;
    }

    ctx->pc = 0x4105a0u;

label_4105a0:
    // 0x4105a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4105a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4105a4:
    // 0x4105a4: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x4105a4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4105a8:
    // 0x4105a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4105a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4105ac:
    // 0x4105ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4105acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4105b0:
    // 0x4105b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4105b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4105b4:
    // 0x4105b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4105b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4105b8:
    // 0x4105b8: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x4105b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4105bc:
    // 0x4105bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4105bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4105c0:
    // 0x4105c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4105c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4105c4:
    // 0x4105c4: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x4105c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4105c8:
    // 0x4105c8: 0x11af0071  beq         $t5, $t7, . + 4 + (0x71 << 2)
label_4105cc:
    if (ctx->pc == 0x4105CCu) {
        ctx->pc = 0x4105CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105C8u;
        // 0x4105cc: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105D0u;
        goto label_4105d0;
    }
    ctx->pc = 0x4105C8u;
    {
        const bool branch_taken_0x4105c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x4105CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105C8u;
        // 0x4105cc: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105c8) {
            ctx->pc = 0x410790u;
            goto label_410790;
        }
    }
    ctx->pc = 0x4105D0u;
label_4105d0:
    // 0x4105d0: 0x26580008  addiu       $t8, $s2, 0x8
    ctx->pc = 0x4105d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4105d4:
    // 0x4105d4: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x4105d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_4105d8:
    // 0x4105d8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x4105d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4105dc:
    // 0x4105dc: 0x12400067  beqz        $s2, . + 4 + (0x67 << 2)
label_4105e0:
    if (ctx->pc == 0x4105E0u) {
        ctx->pc = 0x4105E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105DCu;
        // 0x4105e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105E4u;
        goto label_4105e4;
    }
    ctx->pc = 0x4105DCu;
    {
        const bool branch_taken_0x4105dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4105E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105DCu;
        // 0x4105e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105dc) {
            ctx->pc = 0x41077Cu;
            goto label_41077c;
        }
    }
    ctx->pc = 0x4105E4u;
label_4105e4:
    // 0x4105e4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4105e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4105e8:
    // 0x4105e8: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x4105e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4105ec:
    // 0x4105ec: 0x1b87021  addu        $t6, $t5, $t8
    ctx->pc = 0x4105ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_4105f0:
    // 0x4105f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4105f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4105f4:
    // 0x4105f4: 0x0  nop
    ctx->pc = 0x4105f4u;
    // NOP
label_4105f8:
    // 0x4105f8: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x4105f8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_4105fc:
    // 0x4105fc: 0x51300058  beql        $t1, $s0, . + 4 + (0x58 << 2)
label_410600:
    if (ctx->pc == 0x410600u) {
        ctx->pc = 0x410600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105FCu;
        // 0x410600: 0x2508fff8  addiu       $t0, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410604u;
        goto label_410604;
    }
    ctx->pc = 0x4105FCu;
    {
        const bool branch_taken_0x4105fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x4105fc) {
            ctx->pc = 0x410600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4105FCu;
            // 0x410600: 0x2508fff8  addiu       $t0, $t0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410604u;
label_410604:
    // 0x410604: 0x11000056  beqz        $t0, . + 4 + (0x56 << 2)
label_410608:
    if (ctx->pc == 0x410608u) {
        ctx->pc = 0x410608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410604u;
        // 0x410608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41060Cu;
        goto label_41060c;
    }
    ctx->pc = 0x410604u;
    {
        const bool branch_taken_0x410604 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x410608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410604u;
        // 0x410608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410604) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x41060Cu;
label_41060c:
    // 0x41060c: 0x81023  negu        $v0, $t0
    ctx->pc = 0x41060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_410610:
    // 0x410610: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x410610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_410614:
    // 0x410614: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_410618:
    if (ctx->pc == 0x410618u) {
        ctx->pc = 0x410618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410614u;
        // 0x410618: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41061Cu;
        goto label_41061c;
    }
    ctx->pc = 0x410614u;
    {
        const bool branch_taken_0x410614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x410618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410614u;
        // 0x410618: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410614) {
            ctx->pc = 0x410690u;
            goto label_410690;
        }
    }
    ctx->pc = 0x41061Cu;
label_41061c:
    // 0x41061c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41061cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_410620:
    // 0x410620: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_410624:
    if (ctx->pc == 0x410624u) {
        ctx->pc = 0x410624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410620u;
        // 0x410624: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410628u;
        goto label_410628;
    }
    ctx->pc = 0x410620u;
    {
        const bool branch_taken_0x410620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410620u;
        // 0x410624: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410620) {
            ctx->pc = 0x410664u;
            goto label_410664;
        }
    }
    ctx->pc = 0x410628u;
label_410628:
    // 0x410628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41062c:
    if (ctx->pc == 0x41062Cu) {
        ctx->pc = 0x41062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410628u;
        // 0x41062c: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410630u;
        goto label_410630;
    }
    ctx->pc = 0x410628u;
    {
        const bool branch_taken_0x410628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410628u;
        // 0x41062c: 0x31220080  andi        $v0, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410628) {
            ctx->pc = 0x410640u;
            goto label_410640;
        }
    }
    ctx->pc = 0x410630u;
label_410630:
    // 0x410630: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_410634:
    if (ctx->pc == 0x410634u) {
        ctx->pc = 0x410634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410630u;
        // 0x410634: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410638u;
        goto label_410638;
    }
    ctx->pc = 0x410630u;
    {
        const bool branch_taken_0x410630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410630u;
        // 0x410634: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410630) {
            ctx->pc = 0x410730u;
            goto label_410730;
        }
    }
    ctx->pc = 0x410638u;
label_410638:
    // 0x410638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x410638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41063c:
    // 0x41063c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x41063cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_410640:
    // 0x410640: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x410640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_410644:
    // 0x410644: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x410644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410648:
    // 0x410648: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x410648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_41064c:
    // 0x41064c: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
label_410650:
    if (ctx->pc == 0x410650u) {
        ctx->pc = 0x410650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41064Cu;
        // 0x410650: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410654u;
        goto label_410654;
    }
    ctx->pc = 0x41064Cu;
    {
        const bool branch_taken_0x41064c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41064c) {
            ctx->pc = 0x410650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41064Cu;
            // 0x410650: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x410654u;
label_410654:
    // 0x410654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x410654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_410658:
    // 0x410658: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x410658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_41065c:
    // 0x41065c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_410660:
    if (ctx->pc == 0x410660u) {
        ctx->pc = 0x410660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41065Cu;
        // 0x410660: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410664u;
        goto label_410664;
    }
    ctx->pc = 0x41065Cu;
    {
        const bool branch_taken_0x41065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41065Cu;
        // 0x410660: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41065c) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410664u;
label_410664:
    // 0x410664: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x410664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_410668:
    // 0x410668: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x410668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_41066c:
    // 0x41066c: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x41066cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_410670:
    // 0x410670: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_410674:
    if (ctx->pc == 0x410674u) {
        ctx->pc = 0x410674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410670u;
        // 0x410674: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410678u;
        goto label_410678;
    }
    ctx->pc = 0x410670u;
    {
        const bool branch_taken_0x410670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x410670) {
            ctx->pc = 0x410674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410670u;
            // 0x410674: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x410678u;
label_410678:
    // 0x410678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x410678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41067c:
    // 0x41067c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x41067cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_410680:
    // 0x410680: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_410684:
    if (ctx->pc == 0x410684u) {
        ctx->pc = 0x410684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410680u;
        // 0x410684: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410688u;
        goto label_410688;
    }
    ctx->pc = 0x410680u;
    {
        const bool branch_taken_0x410680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410680u;
        // 0x410684: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410680) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410688u;
label_410688:
    // 0x410688: 0x11000035  beqz        $t0, . + 4 + (0x35 << 2)
label_41068c:
    if (ctx->pc == 0x41068Cu) {
        ctx->pc = 0x410690u;
        goto label_410690;
    }
    ctx->pc = 0x410688u;
    {
        const bool branch_taken_0x410688 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x410688) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410690u;
label_410690:
    // 0x410690: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x410690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_410694:
    // 0x410694: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x410694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410698:
    // 0x410698: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x410698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_41069c:
    // 0x41069c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_4106a0:
    if (ctx->pc == 0x4106A0u) {
        ctx->pc = 0x4106A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41069Cu;
        // 0x4106a0: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106A4u;
        goto label_4106a4;
    }
    ctx->pc = 0x41069Cu;
    {
        const bool branch_taken_0x41069c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41069c) {
            ctx->pc = 0x4106A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41069Cu;
            // 0x4106a0: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x4106A4u;
label_4106a4:
    // 0x4106a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4106a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4106a8:
    // 0x4106a8: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x4106a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4106ac:
    // 0x4106ac: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_4106b0:
    if (ctx->pc == 0x4106B0u) {
        ctx->pc = 0x4106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106ACu;
        // 0x4106b0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106B4u;
        goto label_4106b4;
    }
    ctx->pc = 0x4106ACu;
    {
        const bool branch_taken_0x4106ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106ACu;
        // 0x4106b0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4106ac) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x4106B4u;
label_4106b4:
    // 0x4106b4: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x4106b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_4106b8:
    // 0x4106b8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4106b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4106bc:
    // 0x4106bc: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x4106bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_4106c0:
    // 0x4106c0: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
label_4106c4:
    if (ctx->pc == 0x4106C4u) {
        ctx->pc = 0x4106C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106C0u;
        // 0x4106c4: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106C8u;
        goto label_4106c8;
    }
    ctx->pc = 0x4106C0u;
    {
        const bool branch_taken_0x4106c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4106c0) {
            ctx->pc = 0x4106C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4106C0u;
            // 0x4106c4: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x4106C8u;
label_4106c8:
    // 0x4106c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4106c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4106cc:
    // 0x4106cc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x4106ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4106d0:
    // 0x4106d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4106d4:
    if (ctx->pc == 0x4106D4u) {
        ctx->pc = 0x4106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106D0u;
        // 0x4106d4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106D8u;
        goto label_4106d8;
    }
    ctx->pc = 0x4106D0u;
    {
        const bool branch_taken_0x4106d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106D0u;
        // 0x4106d4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4106d0) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x4106D8u;
label_4106d8:
    // 0x4106d8: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x4106d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_4106dc:
    // 0x4106dc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4106dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4106e0:
    // 0x4106e0: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x4106e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_4106e4:
    // 0x4106e4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_4106e8:
    if (ctx->pc == 0x4106E8u) {
        ctx->pc = 0x4106E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106E4u;
        // 0x4106e8: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106ECu;
        goto label_4106ec;
    }
    ctx->pc = 0x4106E4u;
    {
        const bool branch_taken_0x4106e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4106e4) {
            ctx->pc = 0x4106E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4106E4u;
            // 0x4106e8: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x4106ECu;
label_4106ec:
    // 0x4106ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4106ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4106f0:
    // 0x4106f0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x4106f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4106f4:
    // 0x4106f4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4106f8:
    if (ctx->pc == 0x4106F8u) {
        ctx->pc = 0x4106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106F4u;
        // 0x4106f8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106FCu;
        goto label_4106fc;
    }
    ctx->pc = 0x4106F4u;
    {
        const bool branch_taken_0x4106f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106F4u;
        // 0x4106f8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4106f4) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x4106FCu;
label_4106fc:
    // 0x4106fc: 0xaa1007  srav        $v0, $t2, $a1
    ctx->pc = 0x4106fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
label_410700:
    // 0x410700: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x410700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410704:
    // 0x410704: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x410704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_410708:
    // 0x410708: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_41070c:
    if (ctx->pc == 0x41070Cu) {
        ctx->pc = 0x41070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410708u;
        // 0x41070c: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410710u;
        goto label_410710;
    }
    ctx->pc = 0x410708u;
    {
        const bool branch_taken_0x410708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x410708) {
            ctx->pc = 0x41070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410708u;
            // 0x41070c: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410734u;
            goto label_410734;
        }
    }
    ctx->pc = 0x410710u;
label_410710:
    // 0x410710: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x410710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_410714:
    // 0x410714: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x410714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_410718:
    // 0x410718: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_41071c:
    if (ctx->pc == 0x41071Cu) {
        ctx->pc = 0x41071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410718u;
        // 0x41071c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410720u;
        goto label_410720;
    }
    ctx->pc = 0x410718u;
    {
        const bool branch_taken_0x410718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410718u;
        // 0x41071c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410718) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410720u;
label_410720:
    // 0x410720: 0x1500ffdc  bnez        $t0, . + 4 + (-0x24 << 2)
label_410724:
    if (ctx->pc == 0x410724u) {
        ctx->pc = 0x410724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410720u;
        // 0x410724: 0xaa1007  srav        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410728u;
        goto label_410728;
    }
    ctx->pc = 0x410720u;
    {
        const bool branch_taken_0x410720 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x410724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410720u;
        // 0x410724: 0xaa1007  srav        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410720) {
            ctx->pc = 0x410694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410694;
        }
    }
    ctx->pc = 0x410728u;
label_410728:
    // 0x410728: 0x1000000d  b           . + 4 + (0xD << 2)
label_41072c:
    if (ctx->pc == 0x41072Cu) {
        ctx->pc = 0x410730u;
        goto label_410730;
    }
    ctx->pc = 0x410728u;
    {
        const bool branch_taken_0x410728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410728) {
            ctx->pc = 0x410760u;
            goto label_410760;
        }
    }
    ctx->pc = 0x410730u;
label_410730:
    // 0x410730: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x410730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_410734:
    // 0x410734: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x410734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_410738:
    // 0x410738: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x410738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_41073c:
    // 0x41073c: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x41073cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
label_410740:
    // 0x410740: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x410740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_410744:
    // 0x410744: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x410744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_410748:
    // 0x410748: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x410748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_41074c:
    // 0x41074c: 0x1c31021  addu        $v0, $t6, $v1
    ctx->pc = 0x41074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_410750:
    // 0x410750: 0x31823  negu        $v1, $v1
    ctx->pc = 0x410750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_410754:
    // 0x410754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x410754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_410758:
    // 0x410758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x410758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_41075c:
    // 0x41075c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x41075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_410760:
    // 0x410760: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_410764:
    if (ctx->pc == 0x410764u) {
        ctx->pc = 0x410764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410760u;
        // 0x410764: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410768u;
        goto label_410768;
    }
    ctx->pc = 0x410760u;
    {
        const bool branch_taken_0x410760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x410760) {
            ctx->pc = 0x410764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410760u;
            // 0x410764: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410780u;
            goto label_410780;
        }
    }
    ctx->pc = 0x410768u;
label_410768:
    // 0x410768: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x410768u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_41076c:
    // 0x41076c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x41076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_410770:
    // 0x410770: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x410770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_410774:
    // 0x410774: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_410778:
    if (ctx->pc == 0x410778u) {
        ctx->pc = 0x410778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410774u;
        // 0x410778: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41077Cu;
        goto label_41077c;
    }
    ctx->pc = 0x410774u;
    {
        const bool branch_taken_0x410774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410774u;
        // 0x410778: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410774) {
            ctx->pc = 0x4105F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4105f8;
        }
    }
    ctx->pc = 0x41077Cu;
label_41077c:
    // 0x41077c: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x41077cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_410780:
    // 0x410780: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
label_410784:
    if (ctx->pc == 0x410784u) {
        ctx->pc = 0x410788u;
        goto label_410788;
    }
    ctx->pc = 0x410780u;
    {
        const bool branch_taken_0x410780 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x410780) {
            ctx->pc = 0x410790u;
            goto label_410790;
        }
    }
    ctx->pc = 0x410788u;
label_410788:
    // 0x410788: 0x1080ff93  beqz        $a0, . + 4 + (-0x6D << 2)
label_41078c:
    if (ctx->pc == 0x41078Cu) {
        ctx->pc = 0x41078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410788u;
        // 0x41078c: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410790u;
        goto label_410790;
    }
    ctx->pc = 0x410788u;
    {
        const bool branch_taken_0x410788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410788u;
        // 0x41078c: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410788) {
            ctx->pc = 0x4105D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4105d8;
        }
    }
    ctx->pc = 0x410790u;
label_410790:
    // 0x410790: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
label_410794:
    if (ctx->pc == 0x410794u) {
        ctx->pc = 0x410794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410790u;
        // 0x410794: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410798u;
        goto label_410798;
    }
    ctx->pc = 0x410790u;
    {
        const bool branch_taken_0x410790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x410794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410790u;
        // 0x410794: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410790) {
            ctx->pc = 0x41082Cu;
            goto label_41082c;
        }
    }
    ctx->pc = 0x410798u;
label_410798:
    // 0x410798: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x410798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41079c:
    // 0x41079c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4107a0:
    // 0x4107a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4107a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4107a4:
    // 0x4107a4: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x4107a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4107a8:
    // 0x4107a8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x4107a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4107ac:
    // 0x4107ac: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4107acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4107b0:
    // 0x4107b0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x4107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_4107b4:
    // 0x4107b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4107b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4107b8:
    // 0x4107b8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x4107b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_4107bc:
    // 0x4107bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4107bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4107c0:
    // 0x4107c0: 0x40f809  jalr        $v0
label_4107c4:
    if (ctx->pc == 0x4107C4u) {
        ctx->pc = 0x4107C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107C0u;
        // 0x4107c4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107C8u;
        goto label_4107c8;
    }
    ctx->pc = 0x4107C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4107C8u);
        ctx->pc = 0x4107C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107C0u;
        // 0x4107c4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4107C0u, 0x4107C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4107C8u;
label_4107c8:
    // 0x4107c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4107c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4107cc:
    // 0x4107cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_4107d0:
    if (ctx->pc == 0x4107D0u) {
        ctx->pc = 0x4107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107CCu;
        // 0x4107d0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107D4u;
        goto label_4107d4;
    }
    ctx->pc = 0x4107CCu;
    {
        const bool branch_taken_0x4107cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107CCu;
        // 0x4107d0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4107cc) {
            ctx->pc = 0x4107DCu;
            goto label_4107dc;
        }
    }
    ctx->pc = 0x4107D4u;
label_4107d4:
    // 0x4107d4: 0x10000015  b           . + 4 + (0x15 << 2)
label_4107d8:
    if (ctx->pc == 0x4107D8u) {
        ctx->pc = 0x4107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107D4u;
        // 0x4107d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107DCu;
        goto label_4107dc;
    }
    ctx->pc = 0x4107D4u;
    {
        const bool branch_taken_0x4107d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4107D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107D4u;
        // 0x4107d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4107d4) {
            ctx->pc = 0x41082Cu;
            goto label_41082c;
        }
    }
    ctx->pc = 0x4107DCu;
label_4107dc:
    // 0x4107dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4107dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4107e0:
    // 0x4107e0: 0xc0bb7e6  jal         func_2EDF98
label_4107e4:
    if (ctx->pc == 0x4107E4u) {
        ctx->pc = 0x4107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107E0u;
        // 0x4107e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107E8u;
        goto label_4107e8;
    }
    ctx->pc = 0x4107E0u;
    SET_GPR_U32(ctx, 31, 0x4107E8u);
    ctx->pc = 0x4107E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4107E0u;
    // 0x4107e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4107E0u, 0x4107E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4107E8u;
label_4107e8:
    // 0x4107e8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4107e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4107ec:
    // 0x4107ec: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4107ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4107f0:
    // 0x4107f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4107f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4107f4:
    // 0x4107f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4107f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4107f8:
    // 0x4107f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4107f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4107fc:
    // 0x4107fc: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x4107fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_410800:
    // 0x410800: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x410800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_410804:
    // 0x410804: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x410804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_410808:
    // 0x410808: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x410808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_41080c:
    // 0x41080c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x41080cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_410810:
    // 0x410810: 0xa2050008  sb          $a1, 0x8($s0)
    ctx->pc = 0x410810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 5));
label_410814:
    // 0x410814: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x410814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_410818:
    // 0x410818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x410818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41081c:
    // 0x41081c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x41081cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_410820:
    // 0x410820: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x410820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_410824:
    // 0x410824: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x410824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_410828:
    // 0x410828: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x410828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41082c:
    // 0x41082c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41082cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410830:
    // 0x410830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x410830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410834:
    // 0x410834: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x410834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410838:
    // 0x410838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41083c:
    // 0x41083c: 0x3e00008  jr          $ra
label_410840:
    if (ctx->pc == 0x410840u) {
        ctx->pc = 0x410840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41083Cu;
        // 0x410840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410844u;
        goto label_410844;
    }
    ctx->pc = 0x41083Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41083Cu;
        // 0x410840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41083Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410844u;
label_410844:
    // 0x410844: 0x0  nop
    ctx->pc = 0x410844u;
    // NOP
    ctx->pc = 0x410848u;
}
