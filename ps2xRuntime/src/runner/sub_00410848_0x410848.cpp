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

// Function: sub_00410848
// Address: 0x410848 - 0x410a00
void sub_00410848_0x410848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410848_0x410848");
#endif

    switch (ctx->pc) {
        case 0x410848u: goto label_410848;
        case 0x41084cu: goto label_41084c;
        case 0x410850u: goto label_410850;
        case 0x410854u: goto label_410854;
        case 0x410858u: goto label_410858;
        case 0x41085cu: goto label_41085c;
        case 0x410860u: goto label_410860;
        case 0x410864u: goto label_410864;
        case 0x410868u: goto label_410868;
        case 0x41086cu: goto label_41086c;
        case 0x410870u: goto label_410870;
        case 0x410874u: goto label_410874;
        case 0x410878u: goto label_410878;
        case 0x41087cu: goto label_41087c;
        case 0x410880u: goto label_410880;
        case 0x410884u: goto label_410884;
        case 0x410888u: goto label_410888;
        case 0x41088cu: goto label_41088c;
        case 0x410890u: goto label_410890;
        case 0x410894u: goto label_410894;
        case 0x410898u: goto label_410898;
        case 0x41089cu: goto label_41089c;
        case 0x4108a0u: goto label_4108a0;
        case 0x4108a4u: goto label_4108a4;
        case 0x4108a8u: goto label_4108a8;
        case 0x4108acu: goto label_4108ac;
        case 0x4108b0u: goto label_4108b0;
        case 0x4108b4u: goto label_4108b4;
        case 0x4108b8u: goto label_4108b8;
        case 0x4108bcu: goto label_4108bc;
        case 0x4108c0u: goto label_4108c0;
        case 0x4108c4u: goto label_4108c4;
        case 0x4108c8u: goto label_4108c8;
        case 0x4108ccu: goto label_4108cc;
        case 0x4108d0u: goto label_4108d0;
        case 0x4108d4u: goto label_4108d4;
        case 0x4108d8u: goto label_4108d8;
        case 0x4108dcu: goto label_4108dc;
        case 0x4108e0u: goto label_4108e0;
        case 0x4108e4u: goto label_4108e4;
        case 0x4108e8u: goto label_4108e8;
        case 0x4108ecu: goto label_4108ec;
        case 0x4108f0u: goto label_4108f0;
        case 0x4108f4u: goto label_4108f4;
        case 0x4108f8u: goto label_4108f8;
        case 0x4108fcu: goto label_4108fc;
        case 0x410900u: goto label_410900;
        case 0x410904u: goto label_410904;
        case 0x410908u: goto label_410908;
        case 0x41090cu: goto label_41090c;
        case 0x410910u: goto label_410910;
        case 0x410914u: goto label_410914;
        case 0x410918u: goto label_410918;
        case 0x41091cu: goto label_41091c;
        case 0x410920u: goto label_410920;
        case 0x410924u: goto label_410924;
        case 0x410928u: goto label_410928;
        case 0x41092cu: goto label_41092c;
        case 0x410930u: goto label_410930;
        case 0x410934u: goto label_410934;
        case 0x410938u: goto label_410938;
        case 0x41093cu: goto label_41093c;
        case 0x410940u: goto label_410940;
        case 0x410944u: goto label_410944;
        case 0x410948u: goto label_410948;
        case 0x41094cu: goto label_41094c;
        case 0x410950u: goto label_410950;
        case 0x410954u: goto label_410954;
        case 0x410958u: goto label_410958;
        case 0x41095cu: goto label_41095c;
        case 0x410960u: goto label_410960;
        case 0x410964u: goto label_410964;
        case 0x410968u: goto label_410968;
        case 0x41096cu: goto label_41096c;
        case 0x410970u: goto label_410970;
        case 0x410974u: goto label_410974;
        case 0x410978u: goto label_410978;
        case 0x41097cu: goto label_41097c;
        case 0x410980u: goto label_410980;
        case 0x410984u: goto label_410984;
        case 0x410988u: goto label_410988;
        case 0x41098cu: goto label_41098c;
        case 0x410990u: goto label_410990;
        case 0x410994u: goto label_410994;
        case 0x410998u: goto label_410998;
        case 0x41099cu: goto label_41099c;
        case 0x4109a0u: goto label_4109a0;
        case 0x4109a4u: goto label_4109a4;
        case 0x4109a8u: goto label_4109a8;
        case 0x4109acu: goto label_4109ac;
        case 0x4109b0u: goto label_4109b0;
        case 0x4109b4u: goto label_4109b4;
        case 0x4109b8u: goto label_4109b8;
        case 0x4109bcu: goto label_4109bc;
        case 0x4109c0u: goto label_4109c0;
        case 0x4109c4u: goto label_4109c4;
        case 0x4109c8u: goto label_4109c8;
        case 0x4109ccu: goto label_4109cc;
        case 0x4109d0u: goto label_4109d0;
        case 0x4109d4u: goto label_4109d4;
        case 0x4109d8u: goto label_4109d8;
        case 0x4109dcu: goto label_4109dc;
        case 0x4109e0u: goto label_4109e0;
        case 0x4109e4u: goto label_4109e4;
        case 0x4109e8u: goto label_4109e8;
        case 0x4109ecu: goto label_4109ec;
        case 0x4109f0u: goto label_4109f0;
        case 0x4109f4u: goto label_4109f4;
        case 0x4109f8u: goto label_4109f8;
        case 0x4109fcu: goto label_4109fc;
        default: break;
    }

    ctx->pc = 0x410848u;

label_410848:
    // 0x410848: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x410848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_41084c:
    // 0x41084c: 0x2782bdc8  addiu       $v0, $gp, -0x4238
    ctx->pc = 0x41084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
label_410850:
    // 0x410850: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x410850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_410854:
    // 0x410854: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x410854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_410858:
    // 0x410858: 0x8f92bdc8  lw          $s2, -0x4238($gp)
    ctx->pc = 0x410858u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_41085c:
    // 0x41085c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x41085cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410860:
    // 0x410860: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x410860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_410864:
    // 0x410864: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x410864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_410868:
    // 0x410868: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x410868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_41086c:
    // 0x41086c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_410870:
    // 0x410870: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x410870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_410874:
    // 0x410874: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x410874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_410878:
    // 0x410878: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x410878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_41087c:
    // 0x41087c: 0x12420052  beq         $s2, $v0, . + 4 + (0x52 << 2)
label_410880:
    if (ctx->pc == 0x410880u) {
        ctx->pc = 0x410880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41087Cu;
        // 0x410880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410884u;
        goto label_410884;
    }
    ctx->pc = 0x41087Cu;
    {
        const bool branch_taken_0x41087c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x410880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41087Cu;
        // 0x410880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41087c) {
            ctx->pc = 0x4109C8u;
            goto label_4109c8;
        }
    }
    ctx->pc = 0x410884u;
label_410884:
    // 0x410884: 0x0  nop
    ctx->pc = 0x410884u;
    // NOP
label_410888:
    // 0x410888: 0x2651ffe4  addiu       $s1, $s2, -0x1C
    ctx->pc = 0x410888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967268));
label_41088c:
    // 0x41088c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x41088cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410890:
    // 0x410890: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x410890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_410894:
    // 0x410894: 0x2654fff4  addiu       $s4, $s2, -0xC
    ctx->pc = 0x410894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
label_410898:
    // 0x410898: 0x10f40043  beq         $a3, $s4, . + 4 + (0x43 << 2)
label_41089c:
    if (ctx->pc == 0x41089Cu) {
        ctx->pc = 0x41089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410898u;
        // 0x41089c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108A0u;
        goto label_4108a0;
    }
    ctx->pc = 0x410898u;
    {
        const bool branch_taken_0x410898 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 20));
        ctx->pc = 0x41089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410898u;
        // 0x41089c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410898) {
            ctx->pc = 0x4109A8u;
            goto label_4109a8;
        }
    }
    ctx->pc = 0x4108A0u;
label_4108a0:
    // 0x4108a0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4108a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_4108a4:
    // 0x4108a4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x4108a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4108a8:
    // 0x4108a8: 0x2497e880  addiu       $s7, $a0, -0x1780
    ctx->pc = 0x4108a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_4108ac:
    // 0x4108ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4108acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4108b0:
    // 0x4108b0: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x4108b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4108b4:
    // 0x4108b4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4108b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4108b8:
    // 0x4108b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4108b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4108bc:
    // 0x4108bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4108bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4108c0:
    // 0x4108c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4108c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4108c4:
    // 0x4108c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4108c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4108c8:
    // 0x4108c8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4108c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4108cc:
    // 0x4108cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4108ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4108d0:
    // 0x4108d0: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_4108d4:
    if (ctx->pc == 0x4108D4u) {
        ctx->pc = 0x4108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108D0u;
        // 0x4108d4: 0x8cf30000  lw          $s3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108D8u;
        goto label_4108d8;
    }
    ctx->pc = 0x4108D0u;
    {
        const bool branch_taken_0x4108d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108D0u;
        // 0x4108d4: 0x8cf30000  lw          $s3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4108d0) {
            ctx->pc = 0x410968u;
            goto label_410968;
        }
    }
    ctx->pc = 0x4108D8u;
label_4108d8:
    // 0x4108d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4108dc:
    // 0x4108dc: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
label_4108e0:
    if (ctx->pc == 0x4108E0u) {
        ctx->pc = 0x4108E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108DCu;
        // 0x4108e0: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108E4u;
        goto label_4108e4;
    }
    ctx->pc = 0x4108DCu;
    {
        const bool branch_taken_0x4108dc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4108E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108DCu;
        // 0x4108e0: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4108dc) {
            ctx->pc = 0x41091Cu;
            goto label_41091c;
        }
    }
    ctx->pc = 0x4108E4u;
label_4108e4:
    // 0x4108e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_4108e8:
    if (ctx->pc == 0x4108E8u) {
        ctx->pc = 0x4108E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108E4u;
        // 0x4108e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108ECu;
        goto label_4108ec;
    }
    ctx->pc = 0x4108E4u;
    {
        const bool branch_taken_0x4108e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4108E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108E4u;
        // 0x4108e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4108e4) {
            ctx->pc = 0x410934u;
            goto label_410934;
        }
    }
    ctx->pc = 0x4108ECu;
label_4108ec:
    // 0x4108ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4108f0:
    if (ctx->pc == 0x4108F0u) {
        ctx->pc = 0x4108F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108ECu;
        // 0x4108f0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108F4u;
        goto label_4108f4;
    }
    ctx->pc = 0x4108ECu;
    {
        const bool branch_taken_0x4108ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4108ec) {
            ctx->pc = 0x4108F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4108ECu;
            // 0x4108f0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410920u;
            goto label_410920;
        }
    }
    ctx->pc = 0x4108F4u;
label_4108f4:
    // 0x4108f4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4108f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4108f8:
    // 0x4108f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4108fc:
    if (ctx->pc == 0x4108FCu) {
        ctx->pc = 0x4108FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108F8u;
        // 0x4108fc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410900u;
        goto label_410900;
    }
    ctx->pc = 0x4108F8u;
    {
        const bool branch_taken_0x4108f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4108f8) {
            ctx->pc = 0x4108FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4108F8u;
            // 0x4108fc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410910u;
            goto label_410910;
        }
    }
    ctx->pc = 0x410900u;
label_410900:
    // 0x410900: 0x90e60008  lbu         $a2, 0x8($a3)
    ctx->pc = 0x410900u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_410904:
    // 0x410904: 0x24e40009  addiu       $a0, $a3, 0x9
    ctx->pc = 0x410904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
label_410908:
    // 0x410908: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x410908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41090c:
    // 0x41090c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41090cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410910:
    // 0x410910: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410914:
    // 0x410914: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410918:
    // 0x410918: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41091c:
    // 0x41091c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41091cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410920:
    // 0x410920: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410924:
    // 0x410924: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410928:
    // 0x410928: 0x130402b  sltu        $t0, $t1, $s0
    ctx->pc = 0x410928u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41092c:
    // 0x41092c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_410930:
    if (ctx->pc == 0x410930u) {
        ctx->pc = 0x410930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41092Cu;
        // 0x410930: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410934u;
        goto label_410934;
    }
    ctx->pc = 0x41092Cu;
    {
        const bool branch_taken_0x41092c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x410930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41092Cu;
        // 0x410930: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41092c) {
            ctx->pc = 0x410968u;
            goto label_410968;
        }
    }
    ctx->pc = 0x410934u;
label_410934:
    // 0x410934: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x410934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410938:
    // 0x410938: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x410938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_41093c:
    // 0x41093c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x41093cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_410940:
    // 0x410940: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x410940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_410944:
    // 0x410944: 0x130402b  sltu        $t0, $t1, $s0
    ctx->pc = 0x410944u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_410948:
    // 0x410948: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x410948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41094c:
    // 0x41094c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x41094cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_410950:
    // 0x410950: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x410950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_410954:
    // 0x410954: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x410954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_410958:
    // 0x410958: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41095c:
    // 0x41095c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x41095cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_410960:
    // 0x410960: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
label_410964:
    if (ctx->pc == 0x410964u) {
        ctx->pc = 0x410964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410960u;
        // 0x410964: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410968u;
        goto label_410968;
    }
    ctx->pc = 0x410960u;
    {
        const bool branch_taken_0x410960 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x410964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410960u;
        // 0x410964: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410960) {
            ctx->pc = 0x410938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410938;
        }
    }
    ctx->pc = 0x410968u;
label_410968:
    // 0x410968: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
label_41096c:
    if (ctx->pc == 0x41096Cu) {
        ctx->pc = 0x41096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410968u;
        // 0x41096c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410970u;
        goto label_410970;
    }
    ctx->pc = 0x410968u;
    {
        const bool branch_taken_0x410968 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x410968) {
            ctx->pc = 0x41096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410968u;
            // 0x41096c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410988u;
            goto label_410988;
        }
    }
    ctx->pc = 0x410970u;
label_410970:
    // 0x410970: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x410970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_410974:
    // 0x410974: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x410974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_410978:
    // 0x410978: 0x40f809  jalr        $v0
label_41097c:
    if (ctx->pc == 0x41097Cu) {
        ctx->pc = 0x41097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410978u;
        // 0x41097c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410980u;
        goto label_410980;
    }
    ctx->pc = 0x410978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410980u);
        ctx->pc = 0x41097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410978u;
        // 0x41097c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410978u, 0x410980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410980u;
label_410980:
    // 0x410980: 0x10000007  b           . + 4 + (0x7 << 2)
label_410984:
    if (ctx->pc == 0x410984u) {
        ctx->pc = 0x410984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410980u;
        // 0x410984: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410988u;
        goto label_410988;
    }
    ctx->pc = 0x410980u;
    {
        const bool branch_taken_0x410980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410980u;
        // 0x410984: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410980) {
            ctx->pc = 0x4109A0u;
            goto label_4109a0;
        }
    }
    ctx->pc = 0x410988u;
label_410988:
    // 0x410988: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x410988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
label_41098c:
    // 0x41098c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x41098cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_410990:
    // 0x410990: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x410990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_410994:
    // 0x410994: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x410994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_410998:
    // 0x410998: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x410998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_41099c:
    // 0x41099c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x41099cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4109a0:
    // 0x4109a0: 0x54f4ffc3  bnel        $a3, $s4, . + 4 + (-0x3D << 2)
label_4109a4:
    if (ctx->pc == 0x4109A4u) {
        ctx->pc = 0x4109A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109A0u;
        // 0x4109a4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109A8u;
        goto label_4109a8;
    }
    ctx->pc = 0x4109A0u;
    {
        const bool branch_taken_0x4109a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 20));
        if (branch_taken_0x4109a0) {
            ctx->pc = 0x4109A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4109A0u;
            // 0x4109a4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4108B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4108b0;
        }
    }
    ctx->pc = 0x4109A8u;
label_4109a8:
    // 0x4109a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4109a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4109ac:
    // 0x4109ac: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x4109acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4109b0:
    // 0x4109b0: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x4109b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4109b4:
    // 0x4109b4: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x4109b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4109b8:
    // 0x4109b8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x4109b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4109bc:
    // 0x4109bc: 0x2782bdc8  addiu       $v0, $gp, -0x4238
    ctx->pc = 0x4109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
label_4109c0:
    // 0x4109c0: 0x1642ffb1  bne         $s2, $v0, . + 4 + (-0x4F << 2)
label_4109c4:
    if (ctx->pc == 0x4109C4u) {
        ctx->pc = 0x4109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109C0u;
        // 0x4109c4: 0x9ef021  addu        $fp, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109C8u;
        goto label_4109c8;
    }
    ctx->pc = 0x4109C0u;
    {
        const bool branch_taken_0x4109c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109C0u;
        // 0x4109c4: 0x9ef021  addu        $fp, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4109c0) {
            ctx->pc = 0x410888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410888;
        }
    }
    ctx->pc = 0x4109C8u;
label_4109c8:
    // 0x4109c8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x4109c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4109cc:
    // 0x4109cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4109ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4109d0:
    // 0x4109d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4109d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4109d4:
    // 0x4109d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4109d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4109d8:
    // 0x4109d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4109d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4109dc:
    // 0x4109dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4109dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4109e0:
    // 0x4109e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4109e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4109e4:
    // 0x4109e4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4109e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4109e8:
    // 0x4109e8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4109e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4109ec:
    // 0x4109ec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4109ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4109f0:
    // 0x4109f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4109f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4109f4:
    // 0x4109f4: 0x3e00008  jr          $ra
label_4109f8:
    if (ctx->pc == 0x4109F8u) {
        ctx->pc = 0x4109F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109F4u;
        // 0x4109f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109FCu;
        goto label_4109fc;
    }
    ctx->pc = 0x4109F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4109F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109F4u;
        // 0x4109f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4109F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4109FCu;
label_4109fc:
    // 0x4109fc: 0x0  nop
    ctx->pc = 0x4109fcu;
    // NOP
    ctx->pc = 0x410a00u;
}
