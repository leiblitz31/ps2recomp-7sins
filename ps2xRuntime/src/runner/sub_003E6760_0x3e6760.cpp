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

// Function: sub_003E6760
// Address: 0x3e6760 - 0x3e7858
void sub_003E6760_0x3e6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6760_0x3e6760");
#endif

    switch (ctx->pc) {
        case 0x3e6918u: goto label_3e6918;
        case 0x3e69b8u: goto label_3e69b8;
        case 0x3e6a94u: goto label_3e6a94;
        case 0x3e6aacu: goto label_3e6aac;
        case 0x3e6ab8u: goto label_3e6ab8;
        case 0x3e6ad0u: goto label_3e6ad0;
        case 0x3e6adcu: goto label_3e6adc;
        case 0x3e6af0u: goto label_3e6af0;
        case 0x3e6afcu: goto label_3e6afc;
        case 0x3e6b24u: goto label_3e6b24;
        case 0x3e6b34u: goto label_3e6b34;
        case 0x3e6b44u: goto label_3e6b44;
        case 0x3e6b58u: goto label_3e6b58;
        case 0x3e6b84u: goto label_3e6b84;
        case 0x3e6b9cu: goto label_3e6b9c;
        case 0x3e6bc0u: goto label_3e6bc0;
        case 0x3e6bccu: goto label_3e6bcc;
        case 0x3e6bd8u: goto label_3e6bd8;
        case 0x3e6be4u: goto label_3e6be4;
        case 0x3e6becu: goto label_3e6bec;
        case 0x3e6c04u: goto label_3e6c04;
        case 0x3e6c1cu: goto label_3e6c1c;
        case 0x3e6c28u: goto label_3e6c28;
        case 0x3e6c34u: goto label_3e6c34;
        case 0x3e6c40u: goto label_3e6c40;
        case 0x3e6c4cu: goto label_3e6c4c;
        case 0x3e6c54u: goto label_3e6c54;
        case 0x3e6c6cu: goto label_3e6c6c;
        case 0x3e6c84u: goto label_3e6c84;
        case 0x3e6c90u: goto label_3e6c90;
        case 0x3e6c9cu: goto label_3e6c9c;
        case 0x3e6ca8u: goto label_3e6ca8;
        case 0x3e6cb4u: goto label_3e6cb4;
        case 0x3e6cbcu: goto label_3e6cbc;
        case 0x3e6cd4u: goto label_3e6cd4;
        case 0x3e6cecu: goto label_3e6cec;
        case 0x3e6d10u: goto label_3e6d10;
        case 0x3e6d1cu: goto label_3e6d1c;
        case 0x3e6d28u: goto label_3e6d28;
        case 0x3e6d34u: goto label_3e6d34;
        case 0x3e6d3cu: goto label_3e6d3c;
        case 0x3e6d54u: goto label_3e6d54;
        case 0x3e6d6cu: goto label_3e6d6c;
        case 0x3e6d78u: goto label_3e6d78;
        case 0x3e6d84u: goto label_3e6d84;
        case 0x3e6d90u: goto label_3e6d90;
        case 0x3e6d9cu: goto label_3e6d9c;
        case 0x3e6da4u: goto label_3e6da4;
        case 0x3e6dbcu: goto label_3e6dbc;
        case 0x3e6dd4u: goto label_3e6dd4;
        case 0x3e6de0u: goto label_3e6de0;
        case 0x3e6decu: goto label_3e6dec;
        case 0x3e6df8u: goto label_3e6df8;
        case 0x3e6e04u: goto label_3e6e04;
        case 0x3e6e0cu: goto label_3e6e0c;
        case 0x3e6e28u: goto label_3e6e28;
        case 0x3e6fdcu: goto label_3e6fdc;
        case 0x3e6ff0u: goto label_3e6ff0;
        case 0x3e7000u: goto label_3e7000;
        case 0x3e7054u: goto label_3e7054;
        case 0x3e7064u: goto label_3e7064;
        case 0x3e7070u: goto label_3e7070;
        case 0x3e7080u: goto label_3e7080;
        case 0x3e708cu: goto label_3e708c;
        case 0x3e70a0u: goto label_3e70a0;
        case 0x3e70acu: goto label_3e70ac;
        case 0x3e70c8u: goto label_3e70c8;
        case 0x3e70e0u: goto label_3e70e0;
        case 0x3e70ecu: goto label_3e70ec;
        case 0x3e7100u: goto label_3e7100;
        case 0x3e710cu: goto label_3e710c;
        case 0x3e7118u: goto label_3e7118;
        case 0x3e7120u: goto label_3e7120;
        case 0x3e7138u: goto label_3e7138;
        case 0x3e7150u: goto label_3e7150;
        case 0x3e715cu: goto label_3e715c;
        case 0x3e7168u: goto label_3e7168;
        case 0x3e7174u: goto label_3e7174;
        case 0x3e7180u: goto label_3e7180;
        case 0x3e7188u: goto label_3e7188;
        case 0x3e71a0u: goto label_3e71a0;
        case 0x3e71b8u: goto label_3e71b8;
        case 0x3e71c4u: goto label_3e71c4;
        case 0x3e71d0u: goto label_3e71d0;
        case 0x3e71dcu: goto label_3e71dc;
        case 0x3e71e8u: goto label_3e71e8;
        case 0x3e71f0u: goto label_3e71f0;
        case 0x3e7208u: goto label_3e7208;
        case 0x3e7220u: goto label_3e7220;
        case 0x3e722cu: goto label_3e722c;
        case 0x3e7238u: goto label_3e7238;
        case 0x3e7244u: goto label_3e7244;
        case 0x3e7250u: goto label_3e7250;
        case 0x3e7258u: goto label_3e7258;
        case 0x3e7270u: goto label_3e7270;
        case 0x3e7288u: goto label_3e7288;
        case 0x3e7294u: goto label_3e7294;
        case 0x3e72a0u: goto label_3e72a0;
        case 0x3e72acu: goto label_3e72ac;
        case 0x3e72b8u: goto label_3e72b8;
        case 0x3e72c0u: goto label_3e72c0;
        case 0x3e72d8u: goto label_3e72d8;
        case 0x3e72f0u: goto label_3e72f0;
        case 0x3e72fcu: goto label_3e72fc;
        case 0x3e7308u: goto label_3e7308;
        case 0x3e7314u: goto label_3e7314;
        case 0x3e7320u: goto label_3e7320;
        case 0x3e7328u: goto label_3e7328;
        case 0x3e7340u: goto label_3e7340;
        case 0x3e7358u: goto label_3e7358;
        case 0x3e7364u: goto label_3e7364;
        case 0x3e7378u: goto label_3e7378;
        case 0x3e7384u: goto label_3e7384;
        case 0x3e7390u: goto label_3e7390;
        case 0x3e7398u: goto label_3e7398;
        case 0x3e73b0u: goto label_3e73b0;
        case 0x3e73c8u: goto label_3e73c8;
        case 0x3e73d4u: goto label_3e73d4;
        case 0x3e73e0u: goto label_3e73e0;
        case 0x3e73ecu: goto label_3e73ec;
        case 0x3e73f8u: goto label_3e73f8;
        case 0x3e7400u: goto label_3e7400;
        case 0x3e7530u: goto label_3e7530;
        case 0x3e7680u: goto label_3e7680;
        case 0x3e77d0u: goto label_3e77d0;
        default: break;
    }

    ctx->pc = 0x3e6760u;

    // 0x3e6760: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3e6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3e6764: 0x24031100  addiu       $v1, $zero, 0x1100
    ctx->pc = 0x3e6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x3e6768: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3e6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3e676c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3e676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3e6770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6774: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3e6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3e6778: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3e6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3e677c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3e677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3e6780: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3e6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3e6784: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3e6784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3e6788: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3e6788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3e678c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3e678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x3e6790: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e6790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e6794: 0xde290108  ld          $t1, 0x108($s1)
    ctx->pc = 0x3e6794u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3e6798: 0x31221100  andi        $v0, $t1, 0x1100
    ctx->pc = 0x3e6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4352);
    // 0x3e679c: 0x14430078  bne         $v0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x3E679Cu;
    {
        const bool branch_taken_0x3e679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E679Cu;
        // 0x3e67a0: 0x9237020a  lbu         $s7, 0x20A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e679c) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E67A4u;
    // 0x3e67a4: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x3e67a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x3e67a8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E67A8u;
    {
        const bool branch_taken_0x3e67a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67A8u;
        // 0x3e67ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67a8) {
            ctx->pc = 0x3E6838u;
            goto label_3e6838;
        }
    }
    ctx->pc = 0x3E67B0u;
    // 0x3e67b0: 0x9222020b  lbu         $v0, 0x20B($s1)
    ctx->pc = 0x3e67b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 523)));
    // 0x3e67b4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3e67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e67b8: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x3e67b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e67bc: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3E67BCu;
    {
        const bool branch_taken_0x3e67bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67BCu;
        // 0x3e67c0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67bc) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E67C4u;
    // 0x3e67c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e67c8: 0x2442e800  addiu       $v0, $v0, -0x1800
    ctx->pc = 0x3e67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961152));
    // 0x3e67cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e67d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e67d4: 0x800008  jr          $a0
    ctx->pc = 0x3E67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E67DCu: goto label_3e67dc;
            case 0x3E67F4u: goto label_3e67f4;
            case 0x3E680Cu: goto label_3e680c;
            case 0x3E6824u: goto label_3e6824;
            case 0x3E6980u: goto label_3e6980;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E67D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E67DCu;
label_3e67dc:
    // 0x3e67dc: 0x96230224  lhu         $v1, 0x224($s1)
    ctx->pc = 0x3e67dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e67e0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3e67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3e67e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e67e8: 0xa622021e  sh          $v0, 0x21E($s1)
    ctx->pc = 0x3e67e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e67ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E67ECu;
    {
        const bool branch_taken_0x3e67ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67ECu;
        // 0x3e67f0: 0xa6220224  sh          $v0, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67ec) {
            ctx->pc = 0x3E682Cu;
            goto label_3e682c;
        }
    }
    ctx->pc = 0x3E67F4u;
label_3e67f4:
    // 0x3e67f4: 0x96220224  lhu         $v0, 0x224($s1)
    ctx->pc = 0x3e67f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e67f8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3e67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3e67fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e67fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6800: 0xa622021e  sh          $v0, 0x21E($s1)
    ctx->pc = 0x3e6800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6804: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6804u;
    {
        const bool branch_taken_0x3e6804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6804u;
        // 0x3e6808: 0xa6220224  sh          $v0, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6804) {
            ctx->pc = 0x3E682Cu;
            goto label_3e682c;
        }
    }
    ctx->pc = 0x3E680Cu;
label_3e680c:
    // 0x3e680c: 0x96230224  lhu         $v1, 0x224($s1)
    ctx->pc = 0x3e680cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e6810: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3e6810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3e6814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6818: 0xa622021e  sh          $v0, 0x21E($s1)
    ctx->pc = 0x3e6818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e681c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E681Cu;
    {
        const bool branch_taken_0x3e681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E681Cu;
        // 0x3e6820: 0xa6220224  sh          $v0, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e681c) {
            ctx->pc = 0x3E682Cu;
            goto label_3e682c;
        }
    }
    ctx->pc = 0x3E6824u;
label_3e6824:
    // 0x3e6824: 0x96220224  lhu         $v0, 0x224($s1)
    ctx->pc = 0x3e6824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e6828: 0xa622021e  sh          $v0, 0x21E($s1)
    ctx->pc = 0x3e6828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 2));
label_3e682c:
    // 0x3e682c: 0xa6220222  sh          $v0, 0x222($s1)
    ctx->pc = 0x3e682cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6830: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3E6830u;
    {
        const bool branch_taken_0x3e6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6830u;
        // 0x3e6834: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6830) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E6838u;
label_3e6838:
    // 0x3e6838: 0x16e20051  bne         $s7, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3E6838u;
    {
        const bool branch_taken_0x3e6838 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6838u;
        // 0x3e683c: 0x3c070008  lui         $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6838) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E6840u;
    // 0x3e6840: 0x9223021c  lbu         $v1, 0x21C($s1)
    ctx->pc = 0x3e6840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x3e6844: 0x8e2501f8  lw          $a1, 0x1F8($s1)
    ctx->pc = 0x3e6844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3e6848: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x3e6848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x3e684c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3e684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e6850: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3e6850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6858: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3e6858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e685c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6860: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3e6860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3e6864: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6868: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3e6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3e686c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e6870: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x3e6870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3e6874: 0xa623021e  sh          $v1, 0x21E($s1)
    ctx->pc = 0x3e6874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3e687c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6880: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3e6880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3e6884: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x3e6884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6888: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x3e6888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3e688c: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x3E688Cu;
    {
        const bool branch_taken_0x3e688c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E688Cu;
        // 0x3e6890: 0xa6240222  sh          $a0, 0x222($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e688c) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E6894u;
    // 0x3e6894: 0x31221000  andi        $v0, $t1, 0x1000
    ctx->pc = 0x3e6894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x3e6898: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E6898u;
    {
        const bool branch_taken_0x3e6898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6898) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E68A0u;
    // 0x3e68a0: 0x962b01fe  lhu         $t3, 0x1FE($s1)
    ctx->pc = 0x3e68a0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3e68a4: 0x11600036  beqz        $t3, . + 4 + (0x36 << 2)
    ctx->pc = 0x3E68A4u;
    {
        const bool branch_taken_0x3e68a4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68A4u;
        // 0x3e68a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68a4) {
            ctx->pc = 0x3E6980u;
            goto label_3e6980;
        }
    }
    ctx->pc = 0x3E68ACu;
    // 0x3e68ac: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x3e68acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e68b0: 0x19600013  blez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E68B0u;
    {
        const bool branch_taken_0x3e68b0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68B0u;
        // 0x3e68b4: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68b0) {
            ctx->pc = 0x3E6900u;
            goto label_3e6900;
        }
    }
    ctx->pc = 0x3E68B8u;
    // 0x3e68b8: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E68B8u;
    {
        const bool branch_taken_0x3e68b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e68b8) {
            ctx->pc = 0x3E68BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E68B8u;
            // 0x3e68bc: 0x8e240278  lw          $a0, 0x278($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E691Cu;
            goto label_3e691c;
        }
    }
    ctx->pc = 0x3E68C0u;
    // 0x3e68c0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e68c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e68c4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E68C4u;
    {
        const bool branch_taken_0x3e68c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e68c4) {
            ctx->pc = 0x3E68C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E68C4u;
            // 0x3e68c8: 0x8e230278  lw          $v1, 0x278($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6904u;
            goto label_3e6904;
        }
    }
    ctx->pc = 0x3E68CCu;
    // 0x3e68cc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e68ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e68d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E68D0u;
    {
        const bool branch_taken_0x3e68d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68D0u;
        // 0x3e68d4: 0x8e230278  lw          $v1, 0x278($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68d0) {
            ctx->pc = 0x3E68ECu;
            goto label_3e68ec;
        }
    }
    ctx->pc = 0x3E68D8u;
    // 0x3e68d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e68d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e68dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e68dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e68e0: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e68e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e68e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e68e8: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x3e68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_3e68ec:
    // 0x3e68ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3e68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e68f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e68f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e68f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3e68f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e68f8: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e68fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e68fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6900:
    // 0x3e6900: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x3e6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_3e6904:
    // 0x3e6904: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3e6904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e6908: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e690c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3e690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e6910: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3E6910u;
    {
        const bool branch_taken_0x3e6910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6910u;
        // 0x3e6914: 0x10b482a  slt         $t1, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6910) {
            ctx->pc = 0x3E6974u;
            goto label_3e6974;
        }
    }
    ctx->pc = 0x3E6918u;
label_3e6918:
    // 0x3e6918: 0x8e240278  lw          $a0, 0x278($s1)
    ctx->pc = 0x3e6918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_3e691c:
    // 0x3e691c: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x3e691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e6920: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x3e6920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3e6924: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x3e6924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x3e6928: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3e6928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3e692c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e692cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6930: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3e6930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3e6934: 0x10b482a  slt         $t1, $t0, $t3
    ctx->pc = 0x3e6934u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3e6938: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e6938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e693c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e693cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6940: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x3e6940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e6944: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e6944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6948: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e694c: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e6950: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e6950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6954: 0x8e240278  lw          $a0, 0x278($s1)
    ctx->pc = 0x3e6954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e6958: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3e6958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3e695c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e695cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6960: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e6960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e6964: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e6964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6968: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x3e6968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e696c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e6970: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e6974:
    // 0x3e6974: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x3e6974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3e6978: 0x1520ffe7  bnez        $t1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3E6978u;
    {
        const bool branch_taken_0x3e6978 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6978u;
        // 0x3e697c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6978) {
            ctx->pc = 0x3E6918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6918;
        }
    }
    ctx->pc = 0x3E6980u;
label_3e6980:
    // 0x3e6980: 0x6a220223  ldl         $v0, 0x223($s1)
    ctx->pc = 0x3e6980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e6984: 0x6e22021c  ldr         $v0, 0x21C($s1)
    ctx->pc = 0x3e6984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e6988: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x3e6988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e698c: 0xb222022d  sdl         $v0, 0x22D($s1)
    ctx->pc = 0x3e698cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e6990: 0xb6220226  sdr         $v0, 0x226($s1)
    ctx->pc = 0x3e6990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 550); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e6994: 0xa623022e  sh          $v1, 0x22E($s1)
    ctx->pc = 0x3e6994u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6998: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e6998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e699c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3e699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3e69a0: 0xde230108  ld          $v1, 0x108($s1)
    ctx->pc = 0x3e69a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3e69a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e69a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e69a8: 0x10400326  beqz        $v0, . + 4 + (0x326 << 2)
    ctx->pc = 0x3E69A8u;
    {
        const bool branch_taken_0x3e69a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69A8u;
        // 0x3e69ac: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69a8) {
            ctx->pc = 0x3E7644u;
            goto label_3e7644;
        }
    }
    ctx->pc = 0x3E69B0u;
    // 0x3e69b0: 0xc0fc252  jal         func_3F0948
    ctx->pc = 0x3E69B0u;
    SET_GPR_U32(ctx, 31, 0x3E69B8u);
    ctx->pc = 0x3E69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E69B0u;
    // 0x3e69b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F0948u, 0x3E69B0u, 0x3E69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69B8u;
label_3e69b8:
    // 0x3e69b8: 0xde220108  ld          $v0, 0x108($s1)
    ctx->pc = 0x3e69b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3e69bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e69bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e69c0: 0x10400293  beqz        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x3E69C0u;
    {
        const bool branch_taken_0x3e69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69C0u;
        // 0x3e69c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69c0) {
            ctx->pc = 0x3E7410u;
            goto label_3e7410;
        }
    }
    ctx->pc = 0x3E69C8u;
    // 0x3e69c8: 0x56e2017d  bnel        $s7, $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x3E69C8u;
    {
        const bool branch_taken_0x3e69c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e69c8) {
            ctx->pc = 0x3E69CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E69C8u;
            // 0x3e69cc: 0x9223020b  lbu         $v1, 0x20B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 523)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6FC0u;
            goto label_3e6fc0;
        }
    }
    ctx->pc = 0x3E69D0u;
    // 0x3e69d0: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x3e69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3e69d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e69d8: 0x92220214  lbu         $v0, 0x214($s1)
    ctx->pc = 0x3e69d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x3e69dc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3e69dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3e69e0: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E69E0u;
    {
        const bool branch_taken_0x3e69e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69E0u;
        // 0x3e69e4: 0x963e01fc  lhu         $fp, 0x1FC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69e0) {
            ctx->pc = 0x3E6A50u;
            goto label_3e6a50;
        }
    }
    ctx->pc = 0x3E69E8u;
    // 0x3e69e8: 0x8e270254  lw          $a3, 0x254($s1)
    ctx->pc = 0x3e69e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e69ec: 0x9622021e  lhu         $v0, 0x21E($s1)
    ctx->pc = 0x3e69ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e69f0: 0x8e26025c  lw          $a2, 0x25C($s1)
    ctx->pc = 0x3e69f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x3e69f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3e69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e69f8: 0x96240222  lhu         $a0, 0x222($s1)
    ctx->pc = 0x3e69f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e69fc: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x3e69fcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6a00: 0x96230220  lhu         $v1, 0x220($s1)
    ctx->pc = 0x3e6a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e6a04: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x3e6a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3e6a08: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3e6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e6a0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6a10: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3e6a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3e6a14: 0x9625021e  lhu         $a1, 0x21E($s1)
    ctx->pc = 0x3e6a14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e6a18: 0x96240220  lhu         $a0, 0x220($s1)
    ctx->pc = 0x3e6a18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e6a1c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x3e6a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6a20: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3e6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e6a24: 0x96220222  lhu         $v0, 0x222($s1)
    ctx->pc = 0x3e6a24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e6a28: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3e6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3e6a2c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3e6a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e6a30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3e6a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3e6a34: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x3e6a34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6a38: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e6a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e6a3c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3e6a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6a40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e6a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6a44: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x3e6a44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6a48: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x3E6A48u;
    {
        const bool branch_taken_0x3e6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A48u;
        // 0x3e6a4c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a48) {
            ctx->pc = 0x3E6E14u;
            goto label_3e6e14;
        }
    }
    ctx->pc = 0x3E6A50u;
label_3e6a50:
    // 0x3e6a50: 0x92230214  lbu         $v1, 0x214($s1)
    ctx->pc = 0x3e6a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x3e6a54: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E6A54u;
    {
        const bool branch_taken_0x3e6a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A54u;
        // 0x3e6a58: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a54) {
            ctx->pc = 0x3E6A9Cu;
            goto label_3e6a9c;
        }
    }
    ctx->pc = 0x3E6A5Cu;
    // 0x3e6a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6A5Cu;
    {
        const bool branch_taken_0x3e6a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A5Cu;
        // 0x3e6a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a5c) {
            ctx->pc = 0x3E6A74u;
            goto label_3e6a74;
        }
    }
    ctx->pc = 0x3E6A64u;
    // 0x3e6a64: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E6A64u;
    {
        const bool branch_taken_0x3e6a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e6a64) {
            ctx->pc = 0x3E6A84u;
            goto label_3e6a84;
        }
    }
    ctx->pc = 0x3E6A6Cu;
    // 0x3e6a6c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3E6A6Cu;
    {
        const bool branch_taken_0x3e6a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6a6c) {
            ctx->pc = 0x3E6B04u;
            goto label_3e6b04;
        }
    }
    ctx->pc = 0x3E6A74u;
label_3e6a74:
    // 0x3e6a74: 0x10770012  beq         $v1, $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E6A74u;
    {
        const bool branch_taken_0x3e6a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x3e6a74) {
            ctx->pc = 0x3E6AC0u;
            goto label_3e6ac0;
        }
    }
    ctx->pc = 0x3E6A7Cu;
    // 0x3e6a7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3E6A7Cu;
    {
        const bool branch_taken_0x3e6a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6a7c) {
            ctx->pc = 0x3E6B04u;
            goto label_3e6b04;
        }
    }
    ctx->pc = 0x3E6A84u;
label_3e6a84:
    // 0x3e6a84: 0x3413ffc0  ori         $s3, $zero, 0xFFC0
    ctx->pc = 0x3e6a84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e6a88: 0x139bbc  dsll32      $s3, $s3, 14
    ctx->pc = 0x3e6a88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 14));
    // 0x3e6a8c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E6A8Cu;
    SET_GPR_U32(ctx, 31, 0x3E6A94u);
    ctx->pc = 0x3E6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A8Cu;
    // 0x3e6a90: 0xc62c0250  lwc1        $f12, 0x250($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E6A8Cu, 0x3E6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A94u;
label_3e6a94:
    // 0x3e6a94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3E6A94u;
    {
        const bool branch_taken_0x3e6a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A94u;
        // 0x3e6a98: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a94) {
            ctx->pc = 0x3E6B10u;
            goto label_3e6b10;
        }
    }
    ctx->pc = 0x3E6A9Cu;
label_3e6a9c:
    // 0x3e6a9c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3e6a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e6aa0: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3e6aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3e6aa4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E6AA4u;
    SET_GPR_U32(ctx, 31, 0x3E6AACu);
    ctx->pc = 0x3E6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AA4u;
    // 0x3e6aa8: 0xc62c024c  lwc1        $f12, 0x24C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E6AA4u, 0x3E6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AACu;
label_3e6aac:
    // 0x3e6aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e6aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ab0: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E6AB0u;
    SET_GPR_U32(ctx, 31, 0x3E6AB8u);
    ctx->pc = 0x3E6AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AB0u;
    // 0x3e6ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E6AB0u, 0x3E6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AB8u;
label_3e6ab8:
    // 0x3e6ab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6AB8u;
    {
        const bool branch_taken_0x3e6ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6AB8u;
        // 0x3e6abc: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ab8) {
            ctx->pc = 0x3E6AE0u;
            goto label_3e6ae0;
        }
    }
    ctx->pc = 0x3E6AC0u;
label_3e6ac0:
    // 0x3e6ac0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3e6ac0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e6ac4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3e6ac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3e6ac8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E6AC8u;
    SET_GPR_U32(ctx, 31, 0x3E6AD0u);
    ctx->pc = 0x3E6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AC8u;
    // 0x3e6acc: 0xc62c0218  lwc1        $f12, 0x218($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E6AC8u, 0x3E6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AD0u;
label_3e6ad0:
    // 0x3e6ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e6ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ad4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E6AD4u;
    SET_GPR_U32(ctx, 31, 0x3E6ADCu);
    ctx->pc = 0x3E6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AD4u;
    // 0x3e6ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E6AD4u, 0x3E6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6ADCu;
label_3e6adc:
    // 0x3e6adc: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x3e6adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e6ae0:
    // 0x3e6ae0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6ae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ae4: 0xc62c0250  lwc1        $f12, 0x250($s1)
    ctx->pc = 0x3e6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e6ae8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E6AE8u;
    SET_GPR_U32(ctx, 31, 0x3E6AF0u);
    ctx->pc = 0x3E6AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AE8u;
    // 0x3e6aec: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E6AE8u, 0x3E6AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AF0u;
label_3e6af0:
    // 0x3e6af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6af4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E6AF4u;
    SET_GPR_U32(ctx, 31, 0x3E6AFCu);
    ctx->pc = 0x3E6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AF4u;
    // 0x3e6af8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E6AF4u, 0x3E6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AFCu;
label_3e6afc:
    // 0x3e6afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6AFCu;
    {
        const bool branch_taken_0x3e6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6AFCu;
        // 0x3e6b00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6afc) {
            ctx->pc = 0x3E6B10u;
            goto label_3e6b10;
        }
    }
    ctx->pc = 0x3E6B04u;
label_3e6b04:
    // 0x3e6b04: 0x3414ffc0  ori         $s4, $zero, 0xFFC0
    ctx->pc = 0x3e6b04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e6b08: 0x14a3bc  dsll32      $s4, $s4, 14
    ctx->pc = 0x3e6b08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x3e6b0c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3e6b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b10:
    // 0x3e6b10: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3e6b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e6b14: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3e6b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3e6b18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e6b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b1c: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x3E6B1Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B24u);
    ctx->pc = 0x3E6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B1Cu;
    // 0x3e6b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x3E6B1Cu, 0x3E6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B24u;
label_3e6b24:
    // 0x3e6b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e6b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e6b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b2c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3E6B2Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B34u);
    ctx->pc = 0x3E6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B2Cu;
    // 0x3e6b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3E6B2Cu, 0x3E6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B34u;
label_3e6b34:
    // 0x3e6b34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6B34u;
    {
        const bool branch_taken_0x3e6b34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3E6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B34u;
        // 0x3e6b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b34) {
            ctx->pc = 0x3E6B48u;
            goto label_3e6b48;
        }
    }
    ctx->pc = 0x3E6B3Cu;
    // 0x3e6b3c: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x3E6B3Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B44u);
    ctx->pc = 0x3E6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B3Cu;
    // 0x3e6b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x3E6B3Cu, 0x3E6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B44u;
label_3e6b44:
    // 0x3e6b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e6b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b48:
    // 0x3e6b48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3e6b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3e6b4c: 0xdc25e840  ld          $a1, -0x17C0($at)
    ctx->pc = 0x3e6b4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE840u));
    // 0x3e6b50: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3E6B50u;
    SET_GPR_U32(ctx, 31, 0x3E6B58u);
    ctx->pc = 0x3E6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B50u;
    // 0x3e6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3E6B50u, 0x3E6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B58u;
label_3e6b58:
    // 0x3e6b58: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E6B58u;
    {
        const bool branch_taken_0x3e6b58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3e6b58) {
            ctx->pc = 0x3E6B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6B58u;
            // 0x3e6b5c: 0x8630021e  lh          $s0, 0x21E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6B7Cu;
            goto label_3e6b7c;
        }
    }
    ctx->pc = 0x3E6B60u;
    // 0x3e6b60: 0x9222021e  lbu         $v0, 0x21E($s1)
    ctx->pc = 0x3e6b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e6b64: 0x92230220  lbu         $v1, 0x220($s1)
    ctx->pc = 0x3e6b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e6b68: 0x92240222  lbu         $a0, 0x222($s1)
    ctx->pc = 0x3e6b68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e6b6c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x3e6b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6b70: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3e6b70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6b74: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3E6B74u;
    {
        const bool branch_taken_0x3e6b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B74u;
        // 0x3e6b78: 0xa3a40002  sb          $a0, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b74) {
            ctx->pc = 0x3E6CC8u;
            goto label_3e6cc8;
        }
    }
    ctx->pc = 0x3E6B7Cu;
label_3e6b7c:
    // 0x3e6b7c: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6B7Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B84u);
    ctx->pc = 0x3E6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B7Cu;
    // 0x3e6b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6B7Cu, 0x3E6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B84u;
label_3e6b84:
    // 0x3e6b84: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6B84u;
    {
        const bool branch_taken_0x3e6b84 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6b84) {
            ctx->pc = 0x3E6B9Cu;
            goto label_3e6b9c;
        }
    }
    ctx->pc = 0x3E6B8Cu;
    // 0x3e6b8c: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6b90: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6b94: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6B94u;
    SET_GPR_U32(ctx, 31, 0x3E6B9Cu);
    ctx->pc = 0x3E6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B94u;
    // 0x3e6b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6B94u, 0x3E6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B9Cu;
label_3e6b9c:
    // 0x3e6b9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3e6b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3e6ba0: 0xdc32e848  ld          $s2, -0x17B8($at)
    ctx->pc = 0x3e6ba0u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x5FE848u));
    // 0x3e6ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ba8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3e6ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3e6bac: 0xdc35e850  ld          $s5, -0x17B0($at)
    ctx->pc = 0x3e6bacu;
    SET_GPR_U64(ctx, 21, FAST_READ64(0x5FE850u));
    // 0x3e6bb0: 0x3416ff80  ori         $s6, $zero, 0xFF80
    ctx->pc = 0x3e6bb0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3e6bb4: 0x16b3bc  dsll32      $s6, $s6, 14
    ctx->pc = 0x3e6bb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x3e6bb8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6BB8u;
    SET_GPR_U32(ctx, 31, 0x3E6BC0u);
    ctx->pc = 0x3E6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BB8u;
    // 0x3e6bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6BB8u, 0x3E6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BC0u;
label_3e6bc0:
    // 0x3e6bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bc4: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6BC4u;
    SET_GPR_U32(ctx, 31, 0x3E6BCCu);
    ctx->pc = 0x3E6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BC4u;
    // 0x3e6bc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6BC4u, 0x3E6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BCCu;
label_3e6bcc:
    // 0x3e6bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bd0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6BD0u;
    SET_GPR_U32(ctx, 31, 0x3E6BD8u);
    ctx->pc = 0x3E6BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BD0u;
    // 0x3e6bd4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6BD0u, 0x3E6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BD8u;
label_3e6bd8:
    // 0x3e6bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bdc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6BDCu;
    SET_GPR_U32(ctx, 31, 0x3E6BE4u);
    ctx->pc = 0x3E6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BDCu;
    // 0x3e6be0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6BDCu, 0x3E6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BE4u;
label_3e6be4:
    // 0x3e6be4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6BE4u;
    SET_GPR_U32(ctx, 31, 0x3E6BECu);
    ctx->pc = 0x3E6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BE4u;
    // 0x3e6be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6BE4u, 0x3E6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BECu;
label_3e6bec:
    // 0x3e6bec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6bf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e6bf4: 0x86300220  lh          $s0, 0x220($s1)
    ctx->pc = 0x3e6bf4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e6bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bfc: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6BFCu;
    SET_GPR_U32(ctx, 31, 0x3E6C04u);
    ctx->pc = 0x3E6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BFCu;
    // 0x3e6c00: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6BFCu, 0x3E6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C04u;
label_3e6c04:
    // 0x3e6c04: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6C04u;
    {
        const bool branch_taken_0x3e6c04 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6c04) {
            ctx->pc = 0x3E6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6C04u;
            // 0x3e6c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6C20u;
            goto label_3e6c20;
        }
    }
    ctx->pc = 0x3E6C0Cu;
    // 0x3e6c0c: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6c10: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6c14: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6C14u;
    SET_GPR_U32(ctx, 31, 0x3E6C1Cu);
    ctx->pc = 0x3E6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C14u;
    // 0x3e6c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6C14u, 0x3E6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C1Cu;
label_3e6c1c:
    // 0x3e6c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c20:
    // 0x3e6c20: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6C20u;
    SET_GPR_U32(ctx, 31, 0x3E6C28u);
    ctx->pc = 0x3E6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C20u;
    // 0x3e6c24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6C20u, 0x3E6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C28u;
label_3e6c28:
    // 0x3e6c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c2c: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6C2Cu;
    SET_GPR_U32(ctx, 31, 0x3E6C34u);
    ctx->pc = 0x3E6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C2Cu;
    // 0x3e6c30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6C2Cu, 0x3E6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C34u;
label_3e6c34:
    // 0x3e6c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c38: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6C38u;
    SET_GPR_U32(ctx, 31, 0x3E6C40u);
    ctx->pc = 0x3E6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C38u;
    // 0x3e6c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6C38u, 0x3E6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C40u;
label_3e6c40:
    // 0x3e6c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c44: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6C44u;
    SET_GPR_U32(ctx, 31, 0x3E6C4Cu);
    ctx->pc = 0x3E6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C44u;
    // 0x3e6c48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6C44u, 0x3E6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C4Cu;
label_3e6c4c:
    // 0x3e6c4c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6C4Cu;
    SET_GPR_U32(ctx, 31, 0x3E6C54u);
    ctx->pc = 0x3E6C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C4Cu;
    // 0x3e6c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6C4Cu, 0x3E6C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C54u;
label_3e6c54:
    // 0x3e6c54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6c58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e6c5c: 0x86300222  lh          $s0, 0x222($s1)
    ctx->pc = 0x3e6c5cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e6c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c64: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6C64u;
    SET_GPR_U32(ctx, 31, 0x3E6C6Cu);
    ctx->pc = 0x3E6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C64u;
    // 0x3e6c68: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6C64u, 0x3E6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C6Cu;
label_3e6c6c:
    // 0x3e6c6c: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6C6Cu;
    {
        const bool branch_taken_0x3e6c6c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6c6c) {
            ctx->pc = 0x3E6C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6C6Cu;
            // 0x3e6c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6C88u;
            goto label_3e6c88;
        }
    }
    ctx->pc = 0x3E6C74u;
    // 0x3e6c74: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6c78: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6c7c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E6C84u);
    ctx->pc = 0x3E6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C7Cu;
    // 0x3e6c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6C7Cu, 0x3E6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C84u;
label_3e6c84:
    // 0x3e6c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c88:
    // 0x3e6c88: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6C88u;
    SET_GPR_U32(ctx, 31, 0x3E6C90u);
    ctx->pc = 0x3E6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C88u;
    // 0x3e6c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6C88u, 0x3E6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C90u;
label_3e6c90:
    // 0x3e6c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c94: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6C94u;
    SET_GPR_U32(ctx, 31, 0x3E6C9Cu);
    ctx->pc = 0x3E6C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C94u;
    // 0x3e6c98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6C94u, 0x3E6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C9Cu;
label_3e6c9c:
    // 0x3e6c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ca0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6CA0u;
    SET_GPR_U32(ctx, 31, 0x3E6CA8u);
    ctx->pc = 0x3E6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CA0u;
    // 0x3e6ca4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6CA0u, 0x3E6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CA8u;
label_3e6ca8:
    // 0x3e6ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cac: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6CACu;
    SET_GPR_U32(ctx, 31, 0x3E6CB4u);
    ctx->pc = 0x3E6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CACu;
    // 0x3e6cb0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6CACu, 0x3E6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CB4u;
label_3e6cb4:
    // 0x3e6cb4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6CB4u;
    SET_GPR_U32(ctx, 31, 0x3E6CBCu);
    ctx->pc = 0x3E6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CB4u;
    // 0x3e6cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6CB4u, 0x3E6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CBCu;
label_3e6cbc:
    // 0x3e6cbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6cbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6cc0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6cc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e6cc4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x3e6cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_3e6cc8:
    // 0x3e6cc8: 0x8630021e  lh          $s0, 0x21E($s1)
    ctx->pc = 0x3e6cc8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e6ccc: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6CCCu;
    SET_GPR_U32(ctx, 31, 0x3E6CD4u);
    ctx->pc = 0x3E6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CCCu;
    // 0x3e6cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6CCCu, 0x3E6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CD4u;
label_3e6cd4:
    // 0x3e6cd4: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6CD4u;
    {
        const bool branch_taken_0x3e6cd4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6cd4) {
            ctx->pc = 0x3E6CECu;
            goto label_3e6cec;
        }
    }
    ctx->pc = 0x3E6CDCu;
    // 0x3e6cdc: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6ce0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6ce4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6CE4u;
    SET_GPR_U32(ctx, 31, 0x3E6CECu);
    ctx->pc = 0x3E6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CE4u;
    // 0x3e6ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6CE4u, 0x3E6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CECu;
label_3e6cec:
    // 0x3e6cec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3e6cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3e6cf0: 0xdc32e858  ld          $s2, -0x17A8($at)
    ctx->pc = 0x3e6cf0u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x5FE858u));
    // 0x3e6cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cf8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3e6cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3e6cfc: 0xdc33e860  ld          $s3, -0x17A0($at)
    ctx->pc = 0x3e6cfcu;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x5FE860u));
    // 0x3e6d00: 0x3415ff80  ori         $s5, $zero, 0xFF80
    ctx->pc = 0x3e6d00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3e6d04: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x3e6d04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x3e6d08: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6D08u;
    SET_GPR_U32(ctx, 31, 0x3E6D10u);
    ctx->pc = 0x3E6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D08u;
    // 0x3e6d0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6D08u, 0x3E6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D10u;
label_3e6d10:
    // 0x3e6d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d14: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6D14u;
    SET_GPR_U32(ctx, 31, 0x3E6D1Cu);
    ctx->pc = 0x3E6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D14u;
    // 0x3e6d18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6D14u, 0x3E6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D1Cu;
label_3e6d1c:
    // 0x3e6d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d20: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6D20u;
    SET_GPR_U32(ctx, 31, 0x3E6D28u);
    ctx->pc = 0x3E6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D20u;
    // 0x3e6d24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6D20u, 0x3E6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D28u;
label_3e6d28:
    // 0x3e6d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d2c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6D2Cu;
    SET_GPR_U32(ctx, 31, 0x3E6D34u);
    ctx->pc = 0x3E6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D2Cu;
    // 0x3e6d30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6D2Cu, 0x3E6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D34u;
label_3e6d34:
    // 0x3e6d34: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6D34u;
    SET_GPR_U32(ctx, 31, 0x3E6D3Cu);
    ctx->pc = 0x3E6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D34u;
    // 0x3e6d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6D34u, 0x3E6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D3Cu;
label_3e6d3c:
    // 0x3e6d3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6d3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6d40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6d40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e6d44: 0x86300220  lh          $s0, 0x220($s1)
    ctx->pc = 0x3e6d44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e6d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d4c: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6D4Cu;
    SET_GPR_U32(ctx, 31, 0x3E6D54u);
    ctx->pc = 0x3E6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D4Cu;
    // 0x3e6d50: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6D4Cu, 0x3E6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D54u;
label_3e6d54:
    // 0x3e6d54: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6D54u;
    {
        const bool branch_taken_0x3e6d54 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6d54) {
            ctx->pc = 0x3E6D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D54u;
            // 0x3e6d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6D70u;
            goto label_3e6d70;
        }
    }
    ctx->pc = 0x3E6D5Cu;
    // 0x3e6d5c: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6d60: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6d64: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6D64u;
    SET_GPR_U32(ctx, 31, 0x3E6D6Cu);
    ctx->pc = 0x3E6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D64u;
    // 0x3e6d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6D64u, 0x3E6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D6Cu;
label_3e6d6c:
    // 0x3e6d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6d70:
    // 0x3e6d70: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6D70u;
    SET_GPR_U32(ctx, 31, 0x3E6D78u);
    ctx->pc = 0x3E6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D70u;
    // 0x3e6d74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6D70u, 0x3E6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D78u;
label_3e6d78:
    // 0x3e6d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d7c: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E6D84u);
    ctx->pc = 0x3E6D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D7Cu;
    // 0x3e6d80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6D7Cu, 0x3E6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D84u;
label_3e6d84:
    // 0x3e6d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d88: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6D88u;
    SET_GPR_U32(ctx, 31, 0x3E6D90u);
    ctx->pc = 0x3E6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D88u;
    // 0x3e6d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6D88u, 0x3E6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D90u;
label_3e6d90:
    // 0x3e6d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d94: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6D94u;
    SET_GPR_U32(ctx, 31, 0x3E6D9Cu);
    ctx->pc = 0x3E6D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D94u;
    // 0x3e6d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6D94u, 0x3E6D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D9Cu;
label_3e6d9c:
    // 0x3e6d9c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6D9Cu;
    SET_GPR_U32(ctx, 31, 0x3E6DA4u);
    ctx->pc = 0x3E6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D9Cu;
    // 0x3e6da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6D9Cu, 0x3E6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DA4u;
label_3e6da4:
    // 0x3e6da4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6da4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6da8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e6dac: 0x86300222  lh          $s0, 0x222($s1)
    ctx->pc = 0x3e6dacu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e6db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6db4: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E6DB4u;
    SET_GPR_U32(ctx, 31, 0x3E6DBCu);
    ctx->pc = 0x3E6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DB4u;
    // 0x3e6db8: 0xa3a20011  sb          $v0, 0x11($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E6DB4u, 0x3E6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DBCu;
label_3e6dbc:
    // 0x3e6dbc: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6DBCu;
    {
        const bool branch_taken_0x3e6dbc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e6dbc) {
            ctx->pc = 0x3E6DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6DBCu;
            // 0x3e6dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DD8u;
            goto label_3e6dd8;
        }
    }
    ctx->pc = 0x3E6DC4u;
    // 0x3e6dc4: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e6dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e6dc8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e6dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e6dcc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6DCCu;
    SET_GPR_U32(ctx, 31, 0x3E6DD4u);
    ctx->pc = 0x3E6DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DCCu;
    // 0x3e6dd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6DCCu, 0x3E6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DD4u;
label_3e6dd4:
    // 0x3e6dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6dd8:
    // 0x3e6dd8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6DD8u;
    SET_GPR_U32(ctx, 31, 0x3E6DE0u);
    ctx->pc = 0x3E6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DD8u;
    // 0x3e6ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6DD8u, 0x3E6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DE0u;
label_3e6de0:
    // 0x3e6de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6de4: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E6DE4u;
    SET_GPR_U32(ctx, 31, 0x3E6DECu);
    ctx->pc = 0x3E6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DE4u;
    // 0x3e6de8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E6DE4u, 0x3E6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DECu;
label_3e6dec:
    // 0x3e6dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6df0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E6DF0u;
    SET_GPR_U32(ctx, 31, 0x3E6DF8u);
    ctx->pc = 0x3E6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DF0u;
    // 0x3e6df4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E6DF0u, 0x3E6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DF8u;
label_3e6df8:
    // 0x3e6df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6dfc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6DFCu;
    SET_GPR_U32(ctx, 31, 0x3E6E04u);
    ctx->pc = 0x3E6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DFCu;
    // 0x3e6e00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6DFCu, 0x3E6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6E04u;
label_3e6e04:
    // 0x3e6e04: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E6E04u;
    SET_GPR_U32(ctx, 31, 0x3E6E0Cu);
    ctx->pc = 0x3E6E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6E04u;
    // 0x3e6e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E6E04u, 0x3E6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6E0Cu;
label_3e6e0c:
    // 0x3e6e0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e6e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e6e10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e6e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3e6e14:
    // 0x3e6e14: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x3e6e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6e18: 0x13c00256  beqz        $fp, . + 4 + (0x256 << 2)
    ctx->pc = 0x3E6E18u;
    {
        const bool branch_taken_0x3e6e18 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E18u;
        // 0x3e6e1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e18) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E6E20u;
    // 0x3e6e20: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x3e6e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6e24: 0x0  nop
    ctx->pc = 0x3e6e24u;
    // NOP
label_3e6e28:
    // 0x3e6e28: 0x962201fe  lhu         $v0, 0x1FE($s1)
    ctx->pc = 0x3e6e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3e6e2c: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x3e6e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e6e30: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3E6E30u;
    {
        const bool branch_taken_0x3e6e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E30u;
        // 0x3e6e34: 0x240e00ff  addiu       $t6, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e30) {
            ctx->pc = 0x3E6F6Cu;
            goto label_3e6f6c;
        }
    }
    ctx->pc = 0x3E6E38u;
    // 0x3e6e38: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x3e6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e6e3c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3e6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3e6e40: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6e44: 0x506e004a  beql        $v1, $t6, . + 4 + (0x4A << 2)
    ctx->pc = 0x3E6E44u;
    {
        const bool branch_taken_0x3e6e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        if (branch_taken_0x3e6e44) {
            ctx->pc = 0x3E6E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6E44u;
            // 0x3e6e48: 0x8e220254  lw          $v0, 0x254($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F70u;
            goto label_3e6f70;
        }
    }
    ctx->pc = 0x3E6E4Cu;
    // 0x3e6e4c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E6E4Cu;
    {
        const bool branch_taken_0x3e6e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e4c) {
            ctx->pc = 0x3E6E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6E4Cu;
            // 0x3e6e50: 0x8e24025c  lw          $a0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6E70u;
            goto label_3e6e70;
        }
    }
    ctx->pc = 0x3E6E54u;
    // 0x3e6e54: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x3e6e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6e58: 0x83a30001  lb          $v1, 0x1($sp)
    ctx->pc = 0x3e6e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3e6e5c: 0x83a40002  lb          $a0, 0x2($sp)
    ctx->pc = 0x3e6e5cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3e6e60: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3e6e60u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e6e64: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3e6e64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6e68: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3E6E68u;
    {
        const bool branch_taken_0x3e6e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E68u;
        // 0x3e6e6c: 0xa1240002  sb          $a0, 0x2($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e68) {
            ctx->pc = 0x3E6FA8u;
            goto label_3e6fa8;
        }
    }
    ctx->pc = 0x3E6E70u;
label_3e6e70:
    // 0x3e6e70: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3e6e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e6e74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e6e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6e78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3e6e7c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x3e6e7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6e80: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e6e80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6e84: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x3e6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3e6e88: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x3e6e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e6e8c: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x3e6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x3e6e90: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x3e6e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6e94: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x3e6e94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3e6e98: 0x912d0002  lbu         $t5, 0x2($t1)
    ctx->pc = 0x3e6e98u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3e6e9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6ea0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3e6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3e6ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6ea8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3e6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3e6eac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6eb0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3e6eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3e6eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e6eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e6eb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e6ebc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e6ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6ec0: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3e6ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6ec4: 0x8e240278  lw          $a0, 0x278($s1)
    ctx->pc = 0x3e6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e6ec8: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x3e6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x3e6ecc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3e6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3e6ed0: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x3e6ed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x3e6ed4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e6ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6ed8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e6edc: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x3e6edcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6ee0: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x3e6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3e6ee4: 0x8e260258  lw          $a2, 0x258($s1)
    ctx->pc = 0x3e6ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x3e6ee8: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3e6ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e6eec: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x3e6eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6ef0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6ef4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3e6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3e6ef8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6efc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3e6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3e6f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6f04: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3e6f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3e6f08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e6f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e6f0c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3e6f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3e6f10: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e6f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e6f14: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3e6f14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6f18: 0x8e240278  lw          $a0, 0x278($s1)
    ctx->pc = 0x3e6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e6f1c: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x3e6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x3e6f20: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3e6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3e6f24: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x3e6f24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x3e6f28: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e6f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e6f2c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x3e6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3e6f30: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x3e6f30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6f34: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x3e6f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3e6f38: 0x8e260258  lw          $a2, 0x258($s1)
    ctx->pc = 0x3e6f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x3e6f3c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3e6f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e6f40: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x3e6f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6f44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6f48: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3e6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3e6f4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6f50: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3e6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3e6f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6f58: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3e6f58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3e6f5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e6f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e6f60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3e6f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3e6f64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E6F64u;
    {
        const bool branch_taken_0x3e6f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F64u;
        // 0x3e6f68: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f64) {
            ctx->pc = 0x3E6FA4u;
            goto label_3e6fa4;
        }
    }
    ctx->pc = 0x3E6F6Cu;
label_3e6f6c:
    // 0x3e6f6c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_3e6f70:
    // 0x3e6f70: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3e6f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e6f74: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3e6f74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3e6f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6f7c: 0x91250002  lbu         $a1, 0x2($t1)
    ctx->pc = 0x3e6f7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3e6f80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6f84: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3e6f84u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6f88: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e6f8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e6f90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6f94: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3e6f94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e6f98: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e6f9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6fa0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e6fa4:
    // 0x3e6fa4: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x3e6fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
label_3e6fa8:
    // 0x3e6fa8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3e6fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3e6fac: 0x17e102a  slt         $v0, $t3, $fp
    ctx->pc = 0x3e6facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3e6fb0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3E6FB0u;
    {
        const bool branch_taken_0x3e6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FB0u;
        // 0x3e6fb4: 0x25290003  addiu       $t1, $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fb0) {
            ctx->pc = 0x3E6E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6e28;
        }
    }
    ctx->pc = 0x3E6FB8u;
    // 0x3e6fb8: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x3E6FB8u;
    {
        const bool branch_taken_0x3e6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FB8u;
        // 0x3e6fbc: 0xde220108  ld          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fb8) {
            ctx->pc = 0x3E7778u;
            goto label_3e7778;
        }
    }
    ctx->pc = 0x3E6FC0u;
label_3e6fc0:
    // 0x3e6fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6fc4: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x3e6fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3e6fc8: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x3e6fc8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x3e6fcc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6FCCu;
    {
        const bool branch_taken_0x3e6fcc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3E6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FCCu;
        // 0x3e6fd0: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fcc) {
            ctx->pc = 0x3E6FE4u;
            goto label_3e6fe4;
        }
    }
    ctx->pc = 0x3E6FD4u;
    // 0x3e6fd4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3E6FD4u;
    SET_GPR_U32(ctx, 31, 0x3E6FDCu);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3E6FD4u, 0x3E6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FDCu;
label_3e6fdc:
    // 0x3e6fdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6FDCu;
    {
        const bool branch_taken_0x3e6fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FDCu;
        // 0x3e6fe0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fdc) {
            ctx->pc = 0x3E7004u;
            goto label_3e7004;
        }
    }
    ctx->pc = 0x3E6FE4u;
label_3e6fe4:
    // 0x3e6fe4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3e6fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e6fe8: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3E6FE8u;
    SET_GPR_U32(ctx, 31, 0x3E6FF0u);
    ctx->pc = 0x3E6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FE8u;
    // 0x3e6fec: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3E6FE8u, 0x3E6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FF0u;
label_3e6ff0:
    // 0x3e6ff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e6ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ff8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E6FF8u;
    SET_GPR_U32(ctx, 31, 0x3E7000u);
    ctx->pc = 0x3E6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FF8u;
    // 0x3e6ffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E6FF8u, 0x3E7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7000u;
label_3e7000:
    // 0x3e7000: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7004:
    // 0x3e7004: 0x3414ffc0  ori         $s4, $zero, 0xFFC0
    ctx->pc = 0x3e7004u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3e7008: 0x14a3bc  dsll32      $s4, $s4, 14
    ctx->pc = 0x3e7008u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x3e700c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e7010: 0x92230214  lbu         $v1, 0x214($s1)
    ctx->pc = 0x3e7010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x3e7014: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E7014u;
    {
        const bool branch_taken_0x3e7014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7014u;
        // 0x3e7018: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7014) {
            ctx->pc = 0x3E705Cu;
            goto label_3e705c;
        }
    }
    ctx->pc = 0x3E701Cu;
    // 0x3e701c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e701cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e7020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7020u;
    {
        const bool branch_taken_0x3e7020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7020u;
        // 0x3e7024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7020) {
            ctx->pc = 0x3E7038u;
            goto label_3e7038;
        }
    }
    ctx->pc = 0x3E7028u;
    // 0x3e7028: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E7028u;
    {
        const bool branch_taken_0x3e7028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7028u;
        // 0x3e702c: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7028) {
            ctx->pc = 0x3E704Cu;
            goto label_3e704c;
        }
    }
    ctx->pc = 0x3E7030u;
    // 0x3e7030: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3E7030u;
    {
        const bool branch_taken_0x3e7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7030) {
            ctx->pc = 0x3E70B4u;
            goto label_3e70b4;
        }
    }
    ctx->pc = 0x3E7038u;
label_3e7038:
    // 0x3e7038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e703c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E703Cu;
    {
        const bool branch_taken_0x3e703c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E703Cu;
        // 0x3e7040: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e703c) {
            ctx->pc = 0x3E7078u;
            goto label_3e7078;
        }
    }
    ctx->pc = 0x3E7044u;
    // 0x3e7044: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3E7044u;
    {
        const bool branch_taken_0x3e7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7044) {
            ctx->pc = 0x3E70B4u;
            goto label_3e70b4;
        }
    }
    ctx->pc = 0x3E704Cu;
label_3e704c:
    // 0x3e704c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E704Cu;
    SET_GPR_U32(ctx, 31, 0x3E7054u);
    ctx->pc = 0x3E7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E704Cu;
    // 0x3e7050: 0xc62c0250  lwc1        $f12, 0x250($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E704Cu, 0x3E7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7054u;
label_3e7054:
    // 0x3e7054: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3E7054u;
    {
        const bool branch_taken_0x3e7054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7054u;
        // 0x3e7058: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7054) {
            ctx->pc = 0x3E70B0u;
            goto label_3e70b0;
        }
    }
    ctx->pc = 0x3E705Cu;
label_3e705c:
    // 0x3e705c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E705Cu;
    SET_GPR_U32(ctx, 31, 0x3E7064u);
    ctx->pc = 0x3E7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E705Cu;
    // 0x3e7060: 0xc62c024c  lwc1        $f12, 0x24C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E705Cu, 0x3E7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7064u;
label_3e7064:
    // 0x3e7064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e7064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7068: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E7068u;
    SET_GPR_U32(ctx, 31, 0x3E7070u);
    ctx->pc = 0x3E706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7068u;
    // 0x3e706c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E7068u, 0x3E7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7070u;
label_3e7070:
    // 0x3e7070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E7070u;
    {
        const bool branch_taken_0x3e7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7070u;
        // 0x3e7074: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7070) {
            ctx->pc = 0x3E7090u;
            goto label_3e7090;
        }
    }
    ctx->pc = 0x3E7078u;
label_3e7078:
    // 0x3e7078: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E7078u;
    SET_GPR_U32(ctx, 31, 0x3E7080u);
    ctx->pc = 0x3E707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7078u;
    // 0x3e707c: 0xc62c0218  lwc1        $f12, 0x218($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E7078u, 0x3E7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7080u;
label_3e7080:
    // 0x3e7080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e7080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7084: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E7084u;
    SET_GPR_U32(ctx, 31, 0x3E708Cu);
    ctx->pc = 0x3E7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7084u;
    // 0x3e7088: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E7084u, 0x3E708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E708Cu;
label_3e708c:
    // 0x3e708c: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x3e708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7090:
    // 0x3e7090: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e7090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7094: 0xc62c0250  lwc1        $f12, 0x250($s1)
    ctx->pc = 0x3e7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e7098: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E7098u;
    SET_GPR_U32(ctx, 31, 0x3E70A0u);
    ctx->pc = 0x3E709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7098u;
    // 0x3e709c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E7098u, 0x3E70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70A0u;
label_3e70a0:
    // 0x3e70a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e70a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70a4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E70A4u;
    SET_GPR_U32(ctx, 31, 0x3E70ACu);
    ctx->pc = 0x3E70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70A4u;
    // 0x3e70a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E70A4u, 0x3E70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70ACu;
label_3e70ac:
    // 0x3e70ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e70acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e70b0:
    // 0x3e70b0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x3e70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
label_3e70b4:
    // 0x3e70b4: 0x504000a0  beql        $v0, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3E70B4u;
    {
        const bool branch_taken_0x3e70b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e70b4) {
            ctx->pc = 0x3E70B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E70B4u;
            // 0x3e70b8: 0x86300224  lh          $s0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7338u;
            goto label_3e7338;
        }
    }
    ctx->pc = 0x3E70BCu;
    // 0x3e70bc: 0x8630021e  lh          $s0, 0x21E($s1)
    ctx->pc = 0x3e70bcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e70c0: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E70C0u;
    SET_GPR_U32(ctx, 31, 0x3E70C8u);
    ctx->pc = 0x3E70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70C0u;
    // 0x3e70c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E70C0u, 0x3E70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70C8u;
label_3e70c8:
    // 0x3e70c8: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E70C8u;
    {
        const bool branch_taken_0x3e70c8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e70c8) {
            ctx->pc = 0x3E70CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E70C8u;
            // 0x3e70cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E70E4u;
            goto label_3e70e4;
        }
    }
    ctx->pc = 0x3E70D0u;
    // 0x3e70d0: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e70d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e70d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e70d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e70d8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E70D8u;
    SET_GPR_U32(ctx, 31, 0x3E70E0u);
    ctx->pc = 0x3E70DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70D8u;
    // 0x3e70dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E70D8u, 0x3E70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70E0u;
label_3e70e0:
    // 0x3e70e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e70e4:
    // 0x3e70e4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E70E4u;
    SET_GPR_U32(ctx, 31, 0x3E70ECu);
    ctx->pc = 0x3E70E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70E4u;
    // 0x3e70e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E70E4u, 0x3E70ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70ECu;
label_3e70ec:
    // 0x3e70ec: 0x3415ff80  ori         $s5, $zero, 0xFF80
    ctx->pc = 0x3e70ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3e70f0: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x3e70f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x3e70f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e70f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70f8: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E70F8u;
    SET_GPR_U32(ctx, 31, 0x3E7100u);
    ctx->pc = 0x3E70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70F8u;
    // 0x3e70fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E70F8u, 0x3E7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7100u;
label_3e7100:
    // 0x3e7100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7104: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E7104u;
    SET_GPR_U32(ctx, 31, 0x3E710Cu);
    ctx->pc = 0x3E7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7104u;
    // 0x3e7108: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E7104u, 0x3E710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E710Cu;
label_3e710c:
    // 0x3e710c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7110: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7110u;
    SET_GPR_U32(ctx, 31, 0x3E7118u);
    ctx->pc = 0x3E7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7110u;
    // 0x3e7114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7110u, 0x3E7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7118u;
label_3e7118:
    // 0x3e7118: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E7118u;
    SET_GPR_U32(ctx, 31, 0x3E7120u);
    ctx->pc = 0x3E711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7118u;
    // 0x3e711c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E7118u, 0x3E7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7120u;
label_3e7120:
    // 0x3e7120: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e7124: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e7124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e7128: 0x86300220  lh          $s0, 0x220($s1)
    ctx->pc = 0x3e7128u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e712c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7130: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E7130u;
    SET_GPR_U32(ctx, 31, 0x3E7138u);
    ctx->pc = 0x3E7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7130u;
    // 0x3e7134: 0xa6220228  sh          $v0, 0x228($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E7130u, 0x3E7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7138u;
label_3e7138:
    // 0x3e7138: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7138u;
    {
        const bool branch_taken_0x3e7138 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e7138) {
            ctx->pc = 0x3E713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7138u;
            // 0x3e713c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7154u;
            goto label_3e7154;
        }
    }
    ctx->pc = 0x3E7140u;
    // 0x3e7140: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e7140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e7144: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e7144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e7148: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7148u;
    SET_GPR_U32(ctx, 31, 0x3E7150u);
    ctx->pc = 0x3E714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7148u;
    // 0x3e714c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7148u, 0x3E7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7150u;
label_3e7150:
    // 0x3e7150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7154:
    // 0x3e7154: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E7154u;
    SET_GPR_U32(ctx, 31, 0x3E715Cu);
    ctx->pc = 0x3E7158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7154u;
    // 0x3e7158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E7154u, 0x3E715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E715Cu;
label_3e715c:
    // 0x3e715c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7160: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E7160u;
    SET_GPR_U32(ctx, 31, 0x3E7168u);
    ctx->pc = 0x3E7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7160u;
    // 0x3e7164: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E7160u, 0x3E7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7168u;
label_3e7168:
    // 0x3e7168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e716c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E716Cu;
    SET_GPR_U32(ctx, 31, 0x3E7174u);
    ctx->pc = 0x3E7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E716Cu;
    // 0x3e7170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E716Cu, 0x3E7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7174u;
label_3e7174:
    // 0x3e7174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7178: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7178u;
    SET_GPR_U32(ctx, 31, 0x3E7180u);
    ctx->pc = 0x3E717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7178u;
    // 0x3e717c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7178u, 0x3E7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7180u;
label_3e7180:
    // 0x3e7180: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E7180u;
    SET_GPR_U32(ctx, 31, 0x3E7188u);
    ctx->pc = 0x3E7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7180u;
    // 0x3e7184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E7180u, 0x3E7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7188u;
label_3e7188:
    // 0x3e7188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e718c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e718cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e7190: 0x86300222  lh          $s0, 0x222($s1)
    ctx->pc = 0x3e7190u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e7194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7198: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E7198u;
    SET_GPR_U32(ctx, 31, 0x3E71A0u);
    ctx->pc = 0x3E719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7198u;
    // 0x3e719c: 0xa622022a  sh          $v0, 0x22A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E7198u, 0x3E71A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71A0u;
label_3e71a0:
    // 0x3e71a0: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E71A0u;
    {
        const bool branch_taken_0x3e71a0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e71a0) {
            ctx->pc = 0x3E71A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E71A0u;
            // 0x3e71a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E71BCu;
            goto label_3e71bc;
        }
    }
    ctx->pc = 0x3E71A8u;
    // 0x3e71a8: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e71a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e71ac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e71acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e71b0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E71B0u;
    SET_GPR_U32(ctx, 31, 0x3E71B8u);
    ctx->pc = 0x3E71B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71B0u;
    // 0x3e71b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E71B0u, 0x3E71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71B8u;
label_3e71b8:
    // 0x3e71b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e71b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e71bc:
    // 0x3e71bc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E71BCu;
    SET_GPR_U32(ctx, 31, 0x3E71C4u);
    ctx->pc = 0x3E71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71BCu;
    // 0x3e71c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E71BCu, 0x3E71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71C4u;
label_3e71c4:
    // 0x3e71c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e71c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71c8: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E71C8u;
    SET_GPR_U32(ctx, 31, 0x3E71D0u);
    ctx->pc = 0x3E71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71C8u;
    // 0x3e71cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E71C8u, 0x3E71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71D0u;
label_3e71d0:
    // 0x3e71d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e71d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71d4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E71D4u;
    SET_GPR_U32(ctx, 31, 0x3E71DCu);
    ctx->pc = 0x3E71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71D4u;
    // 0x3e71d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E71D4u, 0x3E71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71DCu;
label_3e71dc:
    // 0x3e71dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e71dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71e0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E71E0u;
    SET_GPR_U32(ctx, 31, 0x3E71E8u);
    ctx->pc = 0x3E71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71E0u;
    // 0x3e71e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E71E0u, 0x3E71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71E8u;
label_3e71e8:
    // 0x3e71e8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E71E8u;
    SET_GPR_U32(ctx, 31, 0x3E71F0u);
    ctx->pc = 0x3E71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71E8u;
    // 0x3e71ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E71E8u, 0x3E71F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71F0u;
label_3e71f0:
    // 0x3e71f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e71f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e71f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e71f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e71f8: 0x8630021e  lh          $s0, 0x21E($s1)
    ctx->pc = 0x3e71f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e71fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7200: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E7200u;
    SET_GPR_U32(ctx, 31, 0x3E7208u);
    ctx->pc = 0x3E7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7200u;
    // 0x3e7204: 0xa622022c  sh          $v0, 0x22C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E7200u, 0x3E7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7208u;
label_3e7208:
    // 0x3e7208: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7208u;
    {
        const bool branch_taken_0x3e7208 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e7208) {
            ctx->pc = 0x3E720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7208u;
            // 0x3e720c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7224u;
            goto label_3e7224;
        }
    }
    ctx->pc = 0x3E7210u;
    // 0x3e7210: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e7210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e7214: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e7214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e7218: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7218u;
    SET_GPR_U32(ctx, 31, 0x3E7220u);
    ctx->pc = 0x3E721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7218u;
    // 0x3e721c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7218u, 0x3E7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7220u;
label_3e7220:
    // 0x3e7220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7224:
    // 0x3e7224: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E7224u;
    SET_GPR_U32(ctx, 31, 0x3E722Cu);
    ctx->pc = 0x3E7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7224u;
    // 0x3e7228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E7224u, 0x3E722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E722Cu;
label_3e722c:
    // 0x3e722c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7230: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E7230u;
    SET_GPR_U32(ctx, 31, 0x3E7238u);
    ctx->pc = 0x3E7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7230u;
    // 0x3e7234: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E7230u, 0x3E7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7238u;
label_3e7238:
    // 0x3e7238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e723c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E723Cu;
    SET_GPR_U32(ctx, 31, 0x3E7244u);
    ctx->pc = 0x3E7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E723Cu;
    // 0x3e7240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E723Cu, 0x3E7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7244u;
label_3e7244:
    // 0x3e7244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7248: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7248u;
    SET_GPR_U32(ctx, 31, 0x3E7250u);
    ctx->pc = 0x3E724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7248u;
    // 0x3e724c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7248u, 0x3E7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7250u;
label_3e7250:
    // 0x3e7250: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E7250u;
    SET_GPR_U32(ctx, 31, 0x3E7258u);
    ctx->pc = 0x3E7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7250u;
    // 0x3e7254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E7250u, 0x3E7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7258u;
label_3e7258:
    // 0x3e7258: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e725c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e725cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e7260: 0x86300220  lh          $s0, 0x220($s1)
    ctx->pc = 0x3e7260u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e7264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7268: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E7268u;
    SET_GPR_U32(ctx, 31, 0x3E7270u);
    ctx->pc = 0x3E726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7268u;
    // 0x3e726c: 0xa622021e  sh          $v0, 0x21E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 542), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E7268u, 0x3E7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7270u;
label_3e7270:
    // 0x3e7270: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7270u;
    {
        const bool branch_taken_0x3e7270 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e7270) {
            ctx->pc = 0x3E7274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7270u;
            // 0x3e7274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E728Cu;
            goto label_3e728c;
        }
    }
    ctx->pc = 0x3E7278u;
    // 0x3e7278: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e7278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e727c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e727cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e7280: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7280u;
    SET_GPR_U32(ctx, 31, 0x3E7288u);
    ctx->pc = 0x3E7284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7280u;
    // 0x3e7284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7280u, 0x3E7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7288u;
label_3e7288:
    // 0x3e7288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e728c:
    // 0x3e728c: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E728Cu;
    SET_GPR_U32(ctx, 31, 0x3E7294u);
    ctx->pc = 0x3E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E728Cu;
    // 0x3e7290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E728Cu, 0x3E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7294u;
label_3e7294:
    // 0x3e7294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7298: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E7298u;
    SET_GPR_U32(ctx, 31, 0x3E72A0u);
    ctx->pc = 0x3E729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7298u;
    // 0x3e729c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E7298u, 0x3E72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72A0u;
label_3e72a0:
    // 0x3e72a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e72a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72a4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E72A4u;
    SET_GPR_U32(ctx, 31, 0x3E72ACu);
    ctx->pc = 0x3E72A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72A4u;
    // 0x3e72a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E72A4u, 0x3E72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72ACu;
label_3e72ac:
    // 0x3e72ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e72acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72b0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E72B0u;
    SET_GPR_U32(ctx, 31, 0x3E72B8u);
    ctx->pc = 0x3E72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72B0u;
    // 0x3e72b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E72B0u, 0x3E72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72B8u;
label_3e72b8:
    // 0x3e72b8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E72B8u;
    SET_GPR_U32(ctx, 31, 0x3E72C0u);
    ctx->pc = 0x3E72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72B8u;
    // 0x3e72bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E72B8u, 0x3E72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72C0u;
label_3e72c0:
    // 0x3e72c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e72c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e72c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e72c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e72c8: 0x86300222  lh          $s0, 0x222($s1)
    ctx->pc = 0x3e72c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e72cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e72ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72d0: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E72D0u;
    SET_GPR_U32(ctx, 31, 0x3E72D8u);
    ctx->pc = 0x3E72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72D0u;
    // 0x3e72d4: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E72D0u, 0x3E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72D8u;
label_3e72d8:
    // 0x3e72d8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E72D8u;
    {
        const bool branch_taken_0x3e72d8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3E72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72D8u;
        // 0x3e72dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72d8) {
            ctx->pc = 0x3E72F4u;
            goto label_3e72f4;
        }
    }
    ctx->pc = 0x3E72E0u;
    // 0x3e72e0: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e72e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e72e4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e72e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e72e8: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E72E8u;
    SET_GPR_U32(ctx, 31, 0x3E72F0u);
    ctx->pc = 0x3E72ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72E8u;
    // 0x3e72ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E72E8u, 0x3E72F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72F0u;
label_3e72f0:
    // 0x3e72f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e72f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e72f4:
    // 0x3e72f4: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E72F4u;
    SET_GPR_U32(ctx, 31, 0x3E72FCu);
    ctx->pc = 0x3E72F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E72F4u;
    // 0x3e72f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E72F4u, 0x3E72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E72FCu;
label_3e72fc:
    // 0x3e72fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e72fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7300: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E7300u;
    SET_GPR_U32(ctx, 31, 0x3E7308u);
    ctx->pc = 0x3E7304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7300u;
    // 0x3e7304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E7300u, 0x3E7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7308u;
label_3e7308:
    // 0x3e7308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e730c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E730Cu;
    SET_GPR_U32(ctx, 31, 0x3E7314u);
    ctx->pc = 0x3E7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E730Cu;
    // 0x3e7310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E730Cu, 0x3E7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7314u;
label_3e7314:
    // 0x3e7314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7318: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7318u;
    SET_GPR_U32(ctx, 31, 0x3E7320u);
    ctx->pc = 0x3E731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7318u;
    // 0x3e731c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7318u, 0x3E7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7320u;
label_3e7320:
    // 0x3e7320: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E7320u;
    SET_GPR_U32(ctx, 31, 0x3E7328u);
    ctx->pc = 0x3E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7320u;
    // 0x3e7324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E7320u, 0x3E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7328u;
label_3e7328:
    // 0x3e7328: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e732c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e732cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e7330: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3E7330u;
    {
        const bool branch_taken_0x3e7330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7330u;
        // 0x3e7334: 0xa6220222  sh          $v0, 0x222($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7330) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E7338u;
label_3e7338:
    // 0x3e7338: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E7338u;
    SET_GPR_U32(ctx, 31, 0x3E7340u);
    ctx->pc = 0x3E733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7338u;
    // 0x3e733c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E7338u, 0x3E7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7340u;
label_3e7340:
    // 0x3e7340: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7340u;
    {
        const bool branch_taken_0x3e7340 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3e7340) {
            ctx->pc = 0x3E7344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7340u;
            // 0x3e7344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E735Cu;
            goto label_3e735c;
        }
    }
    ctx->pc = 0x3E7348u;
    // 0x3e7348: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e7348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e734c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e734cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e7350: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7350u;
    SET_GPR_U32(ctx, 31, 0x3E7358u);
    ctx->pc = 0x3E7354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7350u;
    // 0x3e7354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7350u, 0x3E7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7358u;
label_3e7358:
    // 0x3e7358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e735c:
    // 0x3e735c: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E735Cu;
    SET_GPR_U32(ctx, 31, 0x3E7364u);
    ctx->pc = 0x3E7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E735Cu;
    // 0x3e7360: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E735Cu, 0x3E7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7364u;
label_3e7364:
    // 0x3e7364: 0x3415ff80  ori         $s5, $zero, 0xFF80
    ctx->pc = 0x3e7364u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3e7368: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x3e7368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x3e736c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7370: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E7370u;
    SET_GPR_U32(ctx, 31, 0x3E7378u);
    ctx->pc = 0x3E7374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7370u;
    // 0x3e7374: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E7370u, 0x3E7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7378u;
label_3e7378:
    // 0x3e7378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e737c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E737Cu;
    SET_GPR_U32(ctx, 31, 0x3E7384u);
    ctx->pc = 0x3E7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E737Cu;
    // 0x3e7380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E737Cu, 0x3E7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7384u;
label_3e7384:
    // 0x3e7384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7388: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E7388u;
    SET_GPR_U32(ctx, 31, 0x3E7390u);
    ctx->pc = 0x3E738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7388u;
    // 0x3e738c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E7388u, 0x3E7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7390u;
label_3e7390:
    // 0x3e7390: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E7390u;
    SET_GPR_U32(ctx, 31, 0x3E7398u);
    ctx->pc = 0x3E7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7390u;
    // 0x3e7394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E7390u, 0x3E7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7398u;
label_3e7398:
    // 0x3e7398: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e739c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e739cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e73a0: 0x86300224  lh          $s0, 0x224($s1)
    ctx->pc = 0x3e73a0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x3e73a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e73a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73a8: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3E73A8u;
    SET_GPR_U32(ctx, 31, 0x3E73B0u);
    ctx->pc = 0x3E73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73A8u;
    // 0x3e73ac: 0xa622022e  sh          $v0, 0x22E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3E73A8u, 0x3E73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73B0u;
label_3e73b0:
    // 0x3e73b0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E73B0u;
    {
        const bool branch_taken_0x3e73b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3E73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E73B0u;
        // 0x3e73b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e73b0) {
            ctx->pc = 0x3E73CCu;
            goto label_3e73cc;
        }
    }
    ctx->pc = 0x3E73B8u;
    // 0x3e73b8: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x3e73b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3e73bc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3e73bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3e73c0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E73C0u;
    SET_GPR_U32(ctx, 31, 0x3E73C8u);
    ctx->pc = 0x3E73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73C0u;
    // 0x3e73c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E73C0u, 0x3E73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73C8u;
label_3e73c8:
    // 0x3e73c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e73c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e73cc:
    // 0x3e73cc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3E73CCu;
    SET_GPR_U32(ctx, 31, 0x3E73D4u);
    ctx->pc = 0x3E73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73CCu;
    // 0x3e73d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3E73CCu, 0x3E73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73D4u;
label_3e73d4:
    // 0x3e73d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e73d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73d8: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3E73D8u;
    SET_GPR_U32(ctx, 31, 0x3E73E0u);
    ctx->pc = 0x3E73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73D8u;
    // 0x3e73dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3E73D8u, 0x3E73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73E0u;
label_3e73e0:
    // 0x3e73e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e73e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73e4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3E73E4u;
    SET_GPR_U32(ctx, 31, 0x3E73ECu);
    ctx->pc = 0x3E73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73E4u;
    // 0x3e73e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3E73E4u, 0x3E73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73ECu;
label_3e73ec:
    // 0x3e73ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e73ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e73f0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3E73F0u;
    SET_GPR_U32(ctx, 31, 0x3E73F8u);
    ctx->pc = 0x3E73F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73F0u;
    // 0x3e73f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3E73F0u, 0x3E73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73F8u;
label_3e73f8:
    // 0x3e73f8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3E73F8u;
    SET_GPR_U32(ctx, 31, 0x3E7400u);
    ctx->pc = 0x3E73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73F8u;
    // 0x3e73fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3E73F8u, 0x3E7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7400u;
label_3e7400:
    // 0x3e7400: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e7400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e7404: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e7404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e7408: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x3E7408u;
    {
        const bool branch_taken_0x3e7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7408u;
        // 0x3e740c: 0xa6220224  sh          $v0, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7408) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E7410u;
label_3e7410:
    // 0x3e7410: 0x56e200d9  bnel        $s7, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x3E7410u;
    {
        const bool branch_taken_0x3e7410 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7410) {
            ctx->pc = 0x3E7414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7410u;
            // 0x3e7414: 0xde220108  ld          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7778u;
            goto label_3e7778;
        }
    }
    ctx->pc = 0x3E7418u;
    // 0x3e7418: 0x962201fc  lhu         $v0, 0x1FC($s1)
    ctx->pc = 0x3e7418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x3e741c: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3E741Cu;
    {
        const bool branch_taken_0x3e741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E741Cu;
        // 0x3e7420: 0x8e2301f8  lw          $v1, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e741c) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E7424u;
    // 0x3e7424: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3e7424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7428: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3e7428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e742c: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x3e742cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x3e7430: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e7430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e7434: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E7434u;
    {
        const bool branch_taken_0x3e7434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7434u;
        // 0x3e7438: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7434) {
            ctx->pc = 0x3E751Cu;
            goto label_3e751c;
        }
    }
    ctx->pc = 0x3E743Cu;
    // 0x3e743c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e743cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e7440: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E7440u;
    {
        const bool branch_taken_0x3e7440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7440u;
        // 0x3e7444: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7440) {
            ctx->pc = 0x3E74D4u;
            goto label_3e74d4;
        }
    }
    ctx->pc = 0x3E7448u;
    // 0x3e7448: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E7448u;
    {
        const bool branch_taken_0x3e7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7448u;
        // 0x3e744c: 0x8e230254  lw          $v1, 0x254($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7448) {
            ctx->pc = 0x3E7494u;
            goto label_3e7494;
        }
    }
    ctx->pc = 0x3E7450u;
    // 0x3e7450: 0x24c50003  addiu       $a1, $a2, 0x3
    ctx->pc = 0x3e7450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3e7454: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e7454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e7458: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3e7458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3e745c: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3e745cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e7460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e7464: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7468: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3e7468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3e746c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e746cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7470: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e7478: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e747c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3e747cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7480: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e7488: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e748c: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x3e748cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7490: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e7490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_3e7494:
    // 0x3e7494: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3e7494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3e7498: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e7498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e749c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3e749cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3e74a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e74a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e74a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e74a8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3e74a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3e74ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e74acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e74b0: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e74b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e74b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e74b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e74bc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e74bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e74c0: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e74c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e74c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e74c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e74cc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3e74ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e74d0: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3e74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_3e74d4:
    // 0x3e74d4: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e74d8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3e74d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3e74dc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e74dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e74e0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3e74e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3e74e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e74e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e74e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e74ec: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3e74ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3e74f0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e74f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e74f4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e74f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e74fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e74fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7500: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e7500u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7504: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e750c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e750cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7510: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3e7510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7514: 0x11400097  beqz        $t2, . + 4 + (0x97 << 2)
    ctx->pc = 0x3E7514u;
    {
        const bool branch_taken_0x3e7514 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7514u;
        // 0x3e7518: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7514) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E751Cu;
label_3e751c:
    // 0x3e751c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e751cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7520: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3e7520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7524: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e7524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7528: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3e7528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e752c: 0x0  nop
    ctx->pc = 0x3e752cu;
    // NOP
label_3e7530:
    // 0x3e7530: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e7530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7534: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x3e7534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3e7538: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e7538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e753c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e7540: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7544: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e7544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7548: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3e7548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3e754c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e7554: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7558: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x3e7558u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e755c: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x3e755cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3e7560: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e7568: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e756c: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x3e756cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7570: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7574: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3e7574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3e7578: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e757c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e757cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7580: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3e7580u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7584: 0x90e40004  lbu         $a0, 0x4($a3)
    ctx->pc = 0x3e7584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3e7588: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e758c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e7590: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7594: 0xa1020004  sb          $v0, 0x4($t0)
    ctx->pc = 0x3e7594u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7598: 0x91230005  lbu         $v1, 0x5($t1)
    ctx->pc = 0x3e7598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3e759c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e75a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e75a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e75a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e75a8: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3e75a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e75ac: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3e75acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3e75b0: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e75b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e75b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e75b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e75bc: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3e75bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e75c0: 0x90e40007  lbu         $a0, 0x7($a3)
    ctx->pc = 0x3e75c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x3e75c4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e75c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e75cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e75ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e75d0: 0xa1020007  sb          $v0, 0x7($t0)
    ctx->pc = 0x3e75d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e75d4: 0x91230008  lbu         $v1, 0x8($t1)
    ctx->pc = 0x3e75d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3e75d8: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e75dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e75e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e75e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e75e4: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x3e75e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e75e8: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x3e75e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x3e75ec: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x3e75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e75f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e75f4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e75f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e75f8: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x3e75f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e75fc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3e75fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3e7600: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x3e7600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x3e7604: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7608: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x3e7608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x3e760c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e7610: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e7610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7614: 0xa102000a  sb          $v0, 0xA($t0)
    ctx->pc = 0x3e7614u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7618: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x3e7618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x3e761c: 0x9123000b  lbu         $v1, 0xB($t1)
    ctx->pc = 0x3e761cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x3e7620: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x3e7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x3e7624: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x3e7624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x3e7628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e762c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e762cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7630: 0xa0c2000b  sb          $v0, 0xB($a2)
    ctx->pc = 0x3e7630u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7634: 0x1540ffbe  bnez        $t2, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3E7634u;
    {
        const bool branch_taken_0x3e7634 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7634u;
        // 0x3e7638: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7634) {
            ctx->pc = 0x3E7530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7530;
        }
    }
    ctx->pc = 0x3E763Cu;
    // 0x3e763c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3E763Cu;
    {
        const bool branch_taken_0x3e763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E763Cu;
        // 0x3e7640: 0xde220108  ld          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e763c) {
            ctx->pc = 0x3E7778u;
            goto label_3e7778;
        }
    }
    ctx->pc = 0x3E7644u;
label_3e7644:
    // 0x3e7644: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3E7644u;
    {
        const bool branch_taken_0x3e7644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7644u;
        // 0x3e7648: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7644) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E764Cu;
    // 0x3e764c: 0x56e2004a  bnel        $s7, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3E764Cu;
    {
        const bool branch_taken_0x3e764c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e764c) {
            ctx->pc = 0x3E7650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E764Cu;
            // 0x3e7650: 0xde220108  ld          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7778u;
            goto label_3e7778;
        }
    }
    ctx->pc = 0x3E7654u;
    // 0x3e7654: 0x92230220  lbu         $v1, 0x220($s1)
    ctx->pc = 0x3e7654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x3e7658: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3e7658u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e765c: 0x92240222  lbu         $a0, 0x222($s1)
    ctx->pc = 0x3e765cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x3e7660: 0x9222021e  lbu         $v0, 0x21E($s1)
    ctx->pc = 0x3e7660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x3e7664: 0x962f01fe  lhu         $t7, 0x1FE($s1)
    ctx->pc = 0x3e7664u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3e7668: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3e7668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e766c: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x3e766cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e7670: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3e7670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7674: 0x11e0003f  beqz        $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E7674u;
    {
        const bool branch_taken_0x3e7674 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7674u;
        // 0x3e7678: 0x8e2201f8  lw          $v0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7674) {
            ctx->pc = 0x3E7774u;
            goto label_3e7774;
        }
    }
    ctx->pc = 0x3E767Cu;
    // 0x3e767c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x3e767cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7680:
    // 0x3e7680: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x3e7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e7684: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e7684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e7688: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e7688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e768c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E768Cu;
    {
        const bool branch_taken_0x3e768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E768Cu;
        // 0x3e7690: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e768c) {
            ctx->pc = 0x3E76B4u;
            goto label_3e76b4;
        }
    }
    ctx->pc = 0x3E7694u;
    // 0x3e7694: 0x83a20020  lb          $v0, 0x20($sp)
    ctx->pc = 0x3e7694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7698: 0x83a30021  lb          $v1, 0x21($sp)
    ctx->pc = 0x3e7698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x3e769c: 0x83a40022  lb          $a0, 0x22($sp)
    ctx->pc = 0x3e769cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x3e76a0: 0xa1a20000  sb          $v0, 0x0($t5)
    ctx->pc = 0x3e76a0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e76a4: 0xa1a30001  sb          $v1, 0x1($t5)
    ctx->pc = 0x3e76a4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e76a8: 0xa1a40002  sb          $a0, 0x2($t5)
    ctx->pc = 0x3e76a8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e76ac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E76ACu;
    {
        const bool branch_taken_0x3e76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76ACu;
        // 0x3e76b0: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e76ac) {
            ctx->pc = 0x3E7768u;
            goto label_3e7768;
        }
    }
    ctx->pc = 0x3E76B4u;
label_3e76b4:
    // 0x3e76b4: 0x1069002b  beq         $v1, $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3E76B4u;
    {
        const bool branch_taken_0x3e76b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x3E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76B4u;
        // 0x3e76b8: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e76b4) {
            ctx->pc = 0x3E7764u;
            goto label_3e7764;
        }
    }
    ctx->pc = 0x3E76BCu;
    // 0x3e76bc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3e76bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e76c0: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3e76c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3e76c4: 0x1261823  subu        $v1, $t1, $a2
    ctx->pc = 0x3e76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3e76c8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x3e76c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e76cc: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x3e76ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3e76d0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x3e76d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e76d4: 0x91a70002  lbu         $a3, 0x2($t5)
    ctx->pc = 0x3e76d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3e76d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e76dc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3e76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3e76e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e76e4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3e76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3e76e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e76ec: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3e76ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3e76f0: 0xa1a20000  sb          $v0, 0x0($t5)
    ctx->pc = 0x3e76f0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e76f4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x3e76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e76f8: 0x93a50021  lbu         $a1, 0x21($sp)
    ctx->pc = 0x3e76f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x3e76fc: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x3e76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x3e7700: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e7700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e7704: 0x1223023  subu        $a2, $t1, $v0
    ctx->pc = 0x3e7704u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e7708: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3e7708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e770c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x3e770cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3e7710: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e7710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e7714: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x3e7714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3e7718: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3e7718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3e771c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3e771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3e7720: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e7724: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x3e7724u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x3e7728: 0xa1a40001  sb          $a0, 0x1($t5)
    ctx->pc = 0x3e7728u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e772c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x3e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x3e7730: 0x93a40022  lbu         $a0, 0x22($sp)
    ctx->pc = 0x3e7730u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x3e7734: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e7738: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e7738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e773c: 0x1232823  subu        $a1, $t1, $v1
    ctx->pc = 0x3e773cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3e7740: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3e7740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3e7744: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3e7744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e7748: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3e7748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3e774c: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x3e774cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x3e7750: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3e7750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3e7754: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x3e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x3e7758: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3e7758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e775c: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x3e775cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x3e7760: 0xa1a70002  sb          $a3, 0x2($t5)
    ctx->pc = 0x3e7760u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 7));
label_3e7764:
    // 0x3e7764: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3e7764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_3e7768:
    // 0x3e7768: 0x1cf102a  slt         $v0, $t6, $t7
    ctx->pc = 0x3e7768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x3e776c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3E776Cu;
    {
        const bool branch_taken_0x3e776c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E776Cu;
        // 0x3e7770: 0x25ad0003  addiu       $t5, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e776c) {
            ctx->pc = 0x3E7680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7680;
        }
    }
    ctx->pc = 0x3E7774u;
label_3e7774:
    // 0x3e7774: 0xde220108  ld          $v0, 0x108($s1)
    ctx->pc = 0x3e7774u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
label_3e7778:
    // 0x3e7778: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e7778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3e777c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E777Cu;
    {
        const bool branch_taken_0x3e777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E777Cu;
        // 0x3e7780: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e777c) {
            ctx->pc = 0x3E7828u;
            goto label_3e7828;
        }
    }
    ctx->pc = 0x3E7784u;
    // 0x3e7784: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7788: 0x56e20028  bnel        $s7, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3E7788u;
    {
        const bool branch_taken_0x3e7788 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7788) {
            ctx->pc = 0x3E778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7788u;
            // 0x3e778c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E782Cu;
            goto label_3e782c;
        }
    }
    ctx->pc = 0x3E7790u;
    // 0x3e7790: 0x9225026c  lbu         $a1, 0x26C($s1)
    ctx->pc = 0x3e7790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x3e7794: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e7798: 0x9223026d  lbu         $v1, 0x26D($s1)
    ctx->pc = 0x3e7798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 621)));
    // 0x3e779c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e779cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e77a0: 0x9224026e  lbu         $a0, 0x26E($s1)
    ctx->pc = 0x3e77a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 622)));
    // 0x3e77a4: 0x455823  subu        $t3, $v0, $a1
    ctx->pc = 0x3e77a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e77a8: 0x435023  subu        $t2, $v0, $v1
    ctx->pc = 0x3e77a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e77ac: 0x2d650009  sltiu       $a1, $t3, 0x9
    ctx->pc = 0x3e77acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e77b0: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x3e77b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e77b4: 0x2d430009  sltiu       $v1, $t2, 0x9
    ctx->pc = 0x3e77b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e77b8: 0x2d220009  sltiu       $v0, $t1, 0x9
    ctx->pc = 0x3e77b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e77bc: 0x962c01fc  lhu         $t4, 0x1FC($s1)
    ctx->pc = 0x3e77bcu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x3e77c0: 0x5580a  movz        $t3, $zero, $a1
    ctx->pc = 0x3e77c0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x3e77c4: 0x3500a  movz        $t2, $zero, $v1
    ctx->pc = 0x3e77c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x3e77c8: 0x11800017  beqz        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E77C8u;
    {
        const bool branch_taken_0x3e77c8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77C8u;
        // 0x3e77cc: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e77c8) {
            ctx->pc = 0x3E7828u;
            goto label_3e7828;
        }
    }
    ctx->pc = 0x3E77D0u;
label_3e77d0:
    // 0x3e77d0: 0x8e2601f8  lw          $a2, 0x1F8($s1)
    ctx->pc = 0x3e77d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3e77d4: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x3e77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3e77d8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3e77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3e77dc: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3e77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e77e0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x3e77e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e77e4: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x3e77e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3e77e8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e77e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e77ec: 0x10c382b  sltu        $a3, $t0, $t4
    ctx->pc = 0x3e77ecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3e77f0: 0x1621007  srav        $v0, $v0, $t3
    ctx->pc = 0x3e77f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
    // 0x3e77f4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e77f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e77f8: 0x8e2401f8  lw          $a0, 0x1F8($s1)
    ctx->pc = 0x3e77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3e77fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e7800: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3e7800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3e7804: 0x1421007  srav        $v0, $v0, $t2
    ctx->pc = 0x3e7804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x3e7808: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3e7808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e780c: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x3e780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x3e7810: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3e7810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3e7814: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3e7814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3e7818: 0x1221007  srav        $v0, $v0, $t1
    ctx->pc = 0x3e7818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x3e781c: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E781Cu;
    {
        const bool branch_taken_0x3e781c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E781Cu;
        // 0x3e7820: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e781c) {
            ctx->pc = 0x3E77D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e77d0;
        }
    }
    ctx->pc = 0x3E7824u;
    // 0x3e7824: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3e7824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e7828:
    // 0x3e7828: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3e7828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e782c:
    // 0x3e782c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3e782cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3e7830: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3e7830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e7834: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3e7834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e7838: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3e7838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e783c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3e783cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e7840: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3e7840u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e7844: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3e7844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e7848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e7848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e784c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E784Cu;
        // 0x3e7850: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E784Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7854u;
    // 0x3e7854: 0x0  nop
    ctx->pc = 0x3e7854u;
    // NOP
    ctx->pc = 0x3e7858u;
}
