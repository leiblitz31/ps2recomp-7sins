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

// Function: sub_00499208
// Address: 0x499208 - 0x4993e8
void sub_00499208_0x499208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499208_0x499208");
#endif

    switch (ctx->pc) {
        case 0x499208u: goto label_499208;
        case 0x49920cu: goto label_49920c;
        case 0x499210u: goto label_499210;
        case 0x499214u: goto label_499214;
        case 0x499218u: goto label_499218;
        case 0x49921cu: goto label_49921c;
        case 0x499220u: goto label_499220;
        case 0x499224u: goto label_499224;
        case 0x499228u: goto label_499228;
        case 0x49922cu: goto label_49922c;
        case 0x499230u: goto label_499230;
        case 0x499234u: goto label_499234;
        case 0x499238u: goto label_499238;
        case 0x49923cu: goto label_49923c;
        case 0x499240u: goto label_499240;
        case 0x499244u: goto label_499244;
        case 0x499248u: goto label_499248;
        case 0x49924cu: goto label_49924c;
        case 0x499250u: goto label_499250;
        case 0x499254u: goto label_499254;
        case 0x499258u: goto label_499258;
        case 0x49925cu: goto label_49925c;
        case 0x499260u: goto label_499260;
        case 0x499264u: goto label_499264;
        case 0x499268u: goto label_499268;
        case 0x49926cu: goto label_49926c;
        case 0x499270u: goto label_499270;
        case 0x499274u: goto label_499274;
        case 0x499278u: goto label_499278;
        case 0x49927cu: goto label_49927c;
        case 0x499280u: goto label_499280;
        case 0x499284u: goto label_499284;
        case 0x499288u: goto label_499288;
        case 0x49928cu: goto label_49928c;
        case 0x499290u: goto label_499290;
        case 0x499294u: goto label_499294;
        case 0x499298u: goto label_499298;
        case 0x49929cu: goto label_49929c;
        case 0x4992a0u: goto label_4992a0;
        case 0x4992a4u: goto label_4992a4;
        case 0x4992a8u: goto label_4992a8;
        case 0x4992acu: goto label_4992ac;
        case 0x4992b0u: goto label_4992b0;
        case 0x4992b4u: goto label_4992b4;
        case 0x4992b8u: goto label_4992b8;
        case 0x4992bcu: goto label_4992bc;
        case 0x4992c0u: goto label_4992c0;
        case 0x4992c4u: goto label_4992c4;
        case 0x4992c8u: goto label_4992c8;
        case 0x4992ccu: goto label_4992cc;
        case 0x4992d0u: goto label_4992d0;
        case 0x4992d4u: goto label_4992d4;
        case 0x4992d8u: goto label_4992d8;
        case 0x4992dcu: goto label_4992dc;
        case 0x4992e0u: goto label_4992e0;
        case 0x4992e4u: goto label_4992e4;
        case 0x4992e8u: goto label_4992e8;
        case 0x4992ecu: goto label_4992ec;
        case 0x4992f0u: goto label_4992f0;
        case 0x4992f4u: goto label_4992f4;
        case 0x4992f8u: goto label_4992f8;
        case 0x4992fcu: goto label_4992fc;
        case 0x499300u: goto label_499300;
        case 0x499304u: goto label_499304;
        case 0x499308u: goto label_499308;
        case 0x49930cu: goto label_49930c;
        case 0x499310u: goto label_499310;
        case 0x499314u: goto label_499314;
        case 0x499318u: goto label_499318;
        case 0x49931cu: goto label_49931c;
        case 0x499320u: goto label_499320;
        case 0x499324u: goto label_499324;
        case 0x499328u: goto label_499328;
        case 0x49932cu: goto label_49932c;
        case 0x499330u: goto label_499330;
        case 0x499334u: goto label_499334;
        case 0x499338u: goto label_499338;
        case 0x49933cu: goto label_49933c;
        case 0x499340u: goto label_499340;
        case 0x499344u: goto label_499344;
        case 0x499348u: goto label_499348;
        case 0x49934cu: goto label_49934c;
        case 0x499350u: goto label_499350;
        case 0x499354u: goto label_499354;
        case 0x499358u: goto label_499358;
        case 0x49935cu: goto label_49935c;
        case 0x499360u: goto label_499360;
        case 0x499364u: goto label_499364;
        case 0x499368u: goto label_499368;
        case 0x49936cu: goto label_49936c;
        case 0x499370u: goto label_499370;
        case 0x499374u: goto label_499374;
        case 0x499378u: goto label_499378;
        case 0x49937cu: goto label_49937c;
        case 0x499380u: goto label_499380;
        case 0x499384u: goto label_499384;
        case 0x499388u: goto label_499388;
        case 0x49938cu: goto label_49938c;
        case 0x499390u: goto label_499390;
        case 0x499394u: goto label_499394;
        case 0x499398u: goto label_499398;
        case 0x49939cu: goto label_49939c;
        case 0x4993a0u: goto label_4993a0;
        case 0x4993a4u: goto label_4993a4;
        case 0x4993a8u: goto label_4993a8;
        case 0x4993acu: goto label_4993ac;
        case 0x4993b0u: goto label_4993b0;
        case 0x4993b4u: goto label_4993b4;
        case 0x4993b8u: goto label_4993b8;
        case 0x4993bcu: goto label_4993bc;
        case 0x4993c0u: goto label_4993c0;
        case 0x4993c4u: goto label_4993c4;
        case 0x4993c8u: goto label_4993c8;
        case 0x4993ccu: goto label_4993cc;
        case 0x4993d0u: goto label_4993d0;
        case 0x4993d4u: goto label_4993d4;
        case 0x4993d8u: goto label_4993d8;
        case 0x4993dcu: goto label_4993dc;
        case 0x4993e0u: goto label_4993e0;
        case 0x4993e4u: goto label_4993e4;
        default: break;
    }

    ctx->pc = 0x499208u;

label_499208:
    // 0x499208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49920c:
    // 0x49920c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499210:
    // 0x499210: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_499214:
    // 0x499214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499218:
    // 0x499218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49921c:
    // 0x49921c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49921cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499220:
    // 0x499220: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_499224:
    // 0x499224: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x499224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499228:
    // 0x499228: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49922c:
    // 0x49922c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499230:
    // 0x499230: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_499234:
    // 0x499234: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x499234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_499238:
    // 0x499238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49923c:
    // 0x49923c: 0x40f809  jalr        $v0
label_499240:
    if (ctx->pc == 0x499240u) {
        ctx->pc = 0x499240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49923Cu;
        // 0x499240: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499244u;
        goto label_499244;
    }
    ctx->pc = 0x49923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499244u);
        ctx->pc = 0x499240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49923Cu;
        // 0x499240: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49923Cu, 0x499244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499244u;
label_499244:
    // 0x499244: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x499244u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_499248:
    // 0x499248: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49924c:
    if (ctx->pc == 0x49924Cu) {
        ctx->pc = 0x49924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499248u;
        // 0x49924c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499250u;
        goto label_499250;
    }
    ctx->pc = 0x499248u;
    {
        const bool branch_taken_0x499248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499248u;
        // 0x49924c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499248) {
            ctx->pc = 0x499264u;
            goto label_499264;
        }
    }
    ctx->pc = 0x499250u;
label_499250:
    // 0x499250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_499254:
    if (ctx->pc == 0x499254u) {
        ctx->pc = 0x499254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499250u;
        // 0x499254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499258u;
        goto label_499258;
    }
    ctx->pc = 0x499250u;
    {
        const bool branch_taken_0x499250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499250u;
        // 0x499254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499250) {
            ctx->pc = 0x499260u;
            goto label_499260;
        }
    }
    ctx->pc = 0x499258u;
label_499258:
    // 0x499258: 0x10000002  b           . + 4 + (0x2 << 2)
label_49925c:
    if (ctx->pc == 0x49925Cu) {
        ctx->pc = 0x49925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499258u;
        // 0x49925c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499260u;
        goto label_499260;
    }
    ctx->pc = 0x499258u;
    {
        const bool branch_taken_0x499258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499258u;
        // 0x49925c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499258) {
            ctx->pc = 0x499264u;
            goto label_499264;
        }
    }
    ctx->pc = 0x499260u;
label_499260:
    // 0x499260: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_499264:
    // 0x499264: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x499264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_499268:
    // 0x499268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49926c:
    // 0x49926c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49926cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499270:
    // 0x499270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_499274:
    // 0x499274: 0x3e00008  jr          $ra
label_499278:
    if (ctx->pc == 0x499278u) {
        ctx->pc = 0x499278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499274u;
        // 0x499278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49927Cu;
        goto label_49927c;
    }
    ctx->pc = 0x499274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499274u;
        // 0x499278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49927Cu;
label_49927c:
    // 0x49927c: 0x0  nop
    ctx->pc = 0x49927cu;
    // NOP
label_499280:
    // 0x499280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_499284:
    // 0x499284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x499284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499288:
    // 0x499288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49928c:
    // 0x49928c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499290:
    // 0x499290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_499294:
    // 0x499294: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x499294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499298:
    // 0x499298: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49929c:
    // 0x49929c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x49929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4992a0:
    // 0x4992a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4992a4:
    // 0x4992a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4992a8:
    // 0x4992a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4992a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4992ac:
    // 0x4992ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4992acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4992b0:
    // 0x4992b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4992b4:
    // 0x4992b4: 0x40f809  jalr        $v0
label_4992b8:
    if (ctx->pc == 0x4992B8u) {
        ctx->pc = 0x4992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992B4u;
        // 0x4992b8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4992BCu;
        goto label_4992bc;
    }
    ctx->pc = 0x4992B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4992BCu);
        ctx->pc = 0x4992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992B4u;
        // 0x4992b8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4992B4u, 0x4992BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4992BCu;
label_4992bc:
    // 0x4992bc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4992bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4992c0:
    // 0x4992c0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4992c4:
    if (ctx->pc == 0x4992C4u) {
        ctx->pc = 0x4992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992C0u;
        // 0x4992c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4992C8u;
        goto label_4992c8;
    }
    ctx->pc = 0x4992C0u;
    {
        const bool branch_taken_0x4992c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992C0u;
        // 0x4992c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992c0) {
            ctx->pc = 0x4992DCu;
            goto label_4992dc;
        }
    }
    ctx->pc = 0x4992C8u;
label_4992c8:
    // 0x4992c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4992cc:
    if (ctx->pc == 0x4992CCu) {
        ctx->pc = 0x4992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992C8u;
        // 0x4992cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4992D0u;
        goto label_4992d0;
    }
    ctx->pc = 0x4992C8u;
    {
        const bool branch_taken_0x4992c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992C8u;
        // 0x4992cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992c8) {
            ctx->pc = 0x4992D8u;
            goto label_4992d8;
        }
    }
    ctx->pc = 0x4992D0u;
label_4992d0:
    // 0x4992d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4992d4:
    if (ctx->pc == 0x4992D4u) {
        ctx->pc = 0x4992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992D0u;
        // 0x4992d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4992D8u;
        goto label_4992d8;
    }
    ctx->pc = 0x4992D0u;
    {
        const bool branch_taken_0x4992d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992D0u;
        // 0x4992d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4992d0) {
            ctx->pc = 0x4992DCu;
            goto label_4992dc;
        }
    }
    ctx->pc = 0x4992D8u;
label_4992d8:
    // 0x4992d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4992d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4992dc:
    // 0x4992dc: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4992dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4992e0:
    // 0x4992e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4992e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4992e4:
    // 0x4992e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4992e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4992e8:
    // 0x4992e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4992e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4992ec:
    // 0x4992ec: 0x3e00008  jr          $ra
label_4992f0:
    if (ctx->pc == 0x4992F0u) {
        ctx->pc = 0x4992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992ECu;
        // 0x4992f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4992F4u;
        goto label_4992f4;
    }
    ctx->pc = 0x4992ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4992ECu;
        // 0x4992f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4992ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4992F4u;
label_4992f4:
    // 0x4992f4: 0x0  nop
    ctx->pc = 0x4992f4u;
    // NOP
label_4992f8:
    // 0x4992f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4992f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4992fc:
    // 0x4992fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499300:
    // 0x499300: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_499304:
    // 0x499304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499308:
    // 0x499308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49930c:
    // 0x49930c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x49930cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499310:
    // 0x499310: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_499314:
    // 0x499314: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x499314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499318:
    // 0x499318: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49931c:
    // 0x49931c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499320:
    // 0x499320: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_499324:
    // 0x499324: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x499324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_499328:
    // 0x499328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49932c:
    // 0x49932c: 0x40f809  jalr        $v0
label_499330:
    if (ctx->pc == 0x499330u) {
        ctx->pc = 0x499330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49932Cu;
        // 0x499330: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499334u;
        goto label_499334;
    }
    ctx->pc = 0x49932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499334u);
        ctx->pc = 0x499330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49932Cu;
        // 0x499330: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49932Cu, 0x499334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499334u;
label_499334:
    // 0x499334: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x499334u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_499338:
    // 0x499338: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49933c:
    if (ctx->pc == 0x49933Cu) {
        ctx->pc = 0x49933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499338u;
        // 0x49933c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499340u;
        goto label_499340;
    }
    ctx->pc = 0x499338u;
    {
        const bool branch_taken_0x499338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499338u;
        // 0x49933c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499338) {
            ctx->pc = 0x499354u;
            goto label_499354;
        }
    }
    ctx->pc = 0x499340u;
label_499340:
    // 0x499340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_499344:
    if (ctx->pc == 0x499344u) {
        ctx->pc = 0x499344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499340u;
        // 0x499344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499348u;
        goto label_499348;
    }
    ctx->pc = 0x499340u;
    {
        const bool branch_taken_0x499340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499340u;
        // 0x499344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499340) {
            ctx->pc = 0x499350u;
            goto label_499350;
        }
    }
    ctx->pc = 0x499348u;
label_499348:
    // 0x499348: 0x10000002  b           . + 4 + (0x2 << 2)
label_49934c:
    if (ctx->pc == 0x49934Cu) {
        ctx->pc = 0x49934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499348u;
        // 0x49934c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499350u;
        goto label_499350;
    }
    ctx->pc = 0x499348u;
    {
        const bool branch_taken_0x499348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499348u;
        // 0x49934c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499348) {
            ctx->pc = 0x499354u;
            goto label_499354;
        }
    }
    ctx->pc = 0x499350u;
label_499350:
    // 0x499350: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_499354:
    // 0x499354: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x499354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_499358:
    // 0x499358: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49935c:
    // 0x49935c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49935cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499360:
    // 0x499360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_499364:
    // 0x499364: 0x3e00008  jr          $ra
label_499368:
    if (ctx->pc == 0x499368u) {
        ctx->pc = 0x499368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499364u;
        // 0x499368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49936Cu;
        goto label_49936c;
    }
    ctx->pc = 0x499364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499364u;
        // 0x499368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49936Cu;
label_49936c:
    // 0x49936c: 0x0  nop
    ctx->pc = 0x49936cu;
    // NOP
label_499370:
    // 0x499370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_499374:
    // 0x499374: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x499374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499378:
    // 0x499378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49937c:
    // 0x49937c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49937cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499380:
    // 0x499380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_499384:
    // 0x499384: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x499384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499388:
    // 0x499388: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_49938c:
    // 0x49938c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x49938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499390:
    // 0x499390: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_499394:
    // 0x499394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x499394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499398:
    // 0x499398: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_49939c:
    // 0x49939c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4993a0:
    // 0x4993a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4993a4:
    // 0x4993a4: 0x40f809  jalr        $v0
label_4993a8:
    if (ctx->pc == 0x4993A8u) {
        ctx->pc = 0x4993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993A4u;
        // 0x4993a8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4993ACu;
        goto label_4993ac;
    }
    ctx->pc = 0x4993A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4993ACu);
        ctx->pc = 0x4993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993A4u;
        // 0x4993a8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4993A4u, 0x4993ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4993ACu;
label_4993ac:
    // 0x4993ac: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4993acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4993b0:
    // 0x4993b0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4993b4:
    if (ctx->pc == 0x4993B4u) {
        ctx->pc = 0x4993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993B0u;
        // 0x4993b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4993B8u;
        goto label_4993b8;
    }
    ctx->pc = 0x4993B0u;
    {
        const bool branch_taken_0x4993b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993B0u;
        // 0x4993b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993b0) {
            ctx->pc = 0x4993CCu;
            goto label_4993cc;
        }
    }
    ctx->pc = 0x4993B8u;
label_4993b8:
    // 0x4993b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4993bc:
    if (ctx->pc == 0x4993BCu) {
        ctx->pc = 0x4993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993B8u;
        // 0x4993bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4993C0u;
        goto label_4993c0;
    }
    ctx->pc = 0x4993B8u;
    {
        const bool branch_taken_0x4993b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993B8u;
        // 0x4993bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993b8) {
            ctx->pc = 0x4993C8u;
            goto label_4993c8;
        }
    }
    ctx->pc = 0x4993C0u;
label_4993c0:
    // 0x4993c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4993c4:
    if (ctx->pc == 0x4993C4u) {
        ctx->pc = 0x4993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993C0u;
        // 0x4993c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4993C8u;
        goto label_4993c8;
    }
    ctx->pc = 0x4993C0u;
    {
        const bool branch_taken_0x4993c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993C0u;
        // 0x4993c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993c0) {
            ctx->pc = 0x4993CCu;
            goto label_4993cc;
        }
    }
    ctx->pc = 0x4993C8u;
label_4993c8:
    // 0x4993c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4993c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4993cc:
    // 0x4993cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4993ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4993d0:
    // 0x4993d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4993d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4993d4:
    // 0x4993d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4993d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4993d8:
    // 0x4993d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4993d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4993dc:
    // 0x4993dc: 0x3e00008  jr          $ra
label_4993e0:
    if (ctx->pc == 0x4993E0u) {
        ctx->pc = 0x4993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993DCu;
        // 0x4993e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4993E4u;
        goto label_4993e4;
    }
    ctx->pc = 0x4993DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993DCu;
        // 0x4993e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4993DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4993E4u;
label_4993e4:
    // 0x4993e4: 0x0  nop
    ctx->pc = 0x4993e4u;
    // NOP
    ctx->pc = 0x4993e8u;
}
