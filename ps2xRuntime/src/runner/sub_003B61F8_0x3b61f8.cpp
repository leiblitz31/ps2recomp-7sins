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

// Function: sub_003B61F8
// Address: 0x3b61f8 - 0x3b6558
void sub_003B61F8_0x3b61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B61F8_0x3b61f8");
#endif

    switch (ctx->pc) {
        case 0x3b61f8u: goto label_3b61f8;
        case 0x3b61fcu: goto label_3b61fc;
        case 0x3b6200u: goto label_3b6200;
        case 0x3b6204u: goto label_3b6204;
        case 0x3b6208u: goto label_3b6208;
        case 0x3b620cu: goto label_3b620c;
        case 0x3b6210u: goto label_3b6210;
        case 0x3b6214u: goto label_3b6214;
        case 0x3b6218u: goto label_3b6218;
        case 0x3b621cu: goto label_3b621c;
        case 0x3b6220u: goto label_3b6220;
        case 0x3b6224u: goto label_3b6224;
        case 0x3b6228u: goto label_3b6228;
        case 0x3b622cu: goto label_3b622c;
        case 0x3b6230u: goto label_3b6230;
        case 0x3b6234u: goto label_3b6234;
        case 0x3b6238u: goto label_3b6238;
        case 0x3b623cu: goto label_3b623c;
        case 0x3b6240u: goto label_3b6240;
        case 0x3b6244u: goto label_3b6244;
        case 0x3b6248u: goto label_3b6248;
        case 0x3b624cu: goto label_3b624c;
        case 0x3b6250u: goto label_3b6250;
        case 0x3b6254u: goto label_3b6254;
        case 0x3b6258u: goto label_3b6258;
        case 0x3b625cu: goto label_3b625c;
        case 0x3b6260u: goto label_3b6260;
        case 0x3b6264u: goto label_3b6264;
        case 0x3b6268u: goto label_3b6268;
        case 0x3b626cu: goto label_3b626c;
        case 0x3b6270u: goto label_3b6270;
        case 0x3b6274u: goto label_3b6274;
        case 0x3b6278u: goto label_3b6278;
        case 0x3b627cu: goto label_3b627c;
        case 0x3b6280u: goto label_3b6280;
        case 0x3b6284u: goto label_3b6284;
        case 0x3b6288u: goto label_3b6288;
        case 0x3b628cu: goto label_3b628c;
        case 0x3b6290u: goto label_3b6290;
        case 0x3b6294u: goto label_3b6294;
        case 0x3b6298u: goto label_3b6298;
        case 0x3b629cu: goto label_3b629c;
        case 0x3b62a0u: goto label_3b62a0;
        case 0x3b62a4u: goto label_3b62a4;
        case 0x3b62a8u: goto label_3b62a8;
        case 0x3b62acu: goto label_3b62ac;
        case 0x3b62b0u: goto label_3b62b0;
        case 0x3b62b4u: goto label_3b62b4;
        case 0x3b62b8u: goto label_3b62b8;
        case 0x3b62bcu: goto label_3b62bc;
        case 0x3b62c0u: goto label_3b62c0;
        case 0x3b62c4u: goto label_3b62c4;
        case 0x3b62c8u: goto label_3b62c8;
        case 0x3b62ccu: goto label_3b62cc;
        case 0x3b62d0u: goto label_3b62d0;
        case 0x3b62d4u: goto label_3b62d4;
        case 0x3b62d8u: goto label_3b62d8;
        case 0x3b62dcu: goto label_3b62dc;
        case 0x3b62e0u: goto label_3b62e0;
        case 0x3b62e4u: goto label_3b62e4;
        case 0x3b62e8u: goto label_3b62e8;
        case 0x3b62ecu: goto label_3b62ec;
        case 0x3b62f0u: goto label_3b62f0;
        case 0x3b62f4u: goto label_3b62f4;
        case 0x3b62f8u: goto label_3b62f8;
        case 0x3b62fcu: goto label_3b62fc;
        case 0x3b6300u: goto label_3b6300;
        case 0x3b6304u: goto label_3b6304;
        case 0x3b6308u: goto label_3b6308;
        case 0x3b630cu: goto label_3b630c;
        case 0x3b6310u: goto label_3b6310;
        case 0x3b6314u: goto label_3b6314;
        case 0x3b6318u: goto label_3b6318;
        case 0x3b631cu: goto label_3b631c;
        case 0x3b6320u: goto label_3b6320;
        case 0x3b6324u: goto label_3b6324;
        case 0x3b6328u: goto label_3b6328;
        case 0x3b632cu: goto label_3b632c;
        case 0x3b6330u: goto label_3b6330;
        case 0x3b6334u: goto label_3b6334;
        case 0x3b6338u: goto label_3b6338;
        case 0x3b633cu: goto label_3b633c;
        case 0x3b6340u: goto label_3b6340;
        case 0x3b6344u: goto label_3b6344;
        case 0x3b6348u: goto label_3b6348;
        case 0x3b634cu: goto label_3b634c;
        case 0x3b6350u: goto label_3b6350;
        case 0x3b6354u: goto label_3b6354;
        case 0x3b6358u: goto label_3b6358;
        case 0x3b635cu: goto label_3b635c;
        case 0x3b6360u: goto label_3b6360;
        case 0x3b6364u: goto label_3b6364;
        case 0x3b6368u: goto label_3b6368;
        case 0x3b636cu: goto label_3b636c;
        case 0x3b6370u: goto label_3b6370;
        case 0x3b6374u: goto label_3b6374;
        case 0x3b6378u: goto label_3b6378;
        case 0x3b637cu: goto label_3b637c;
        case 0x3b6380u: goto label_3b6380;
        case 0x3b6384u: goto label_3b6384;
        case 0x3b6388u: goto label_3b6388;
        case 0x3b638cu: goto label_3b638c;
        case 0x3b6390u: goto label_3b6390;
        case 0x3b6394u: goto label_3b6394;
        case 0x3b6398u: goto label_3b6398;
        case 0x3b639cu: goto label_3b639c;
        case 0x3b63a0u: goto label_3b63a0;
        case 0x3b63a4u: goto label_3b63a4;
        case 0x3b63a8u: goto label_3b63a8;
        case 0x3b63acu: goto label_3b63ac;
        case 0x3b63b0u: goto label_3b63b0;
        case 0x3b63b4u: goto label_3b63b4;
        case 0x3b63b8u: goto label_3b63b8;
        case 0x3b63bcu: goto label_3b63bc;
        case 0x3b63c0u: goto label_3b63c0;
        case 0x3b63c4u: goto label_3b63c4;
        case 0x3b63c8u: goto label_3b63c8;
        case 0x3b63ccu: goto label_3b63cc;
        case 0x3b63d0u: goto label_3b63d0;
        case 0x3b63d4u: goto label_3b63d4;
        case 0x3b63d8u: goto label_3b63d8;
        case 0x3b63dcu: goto label_3b63dc;
        case 0x3b63e0u: goto label_3b63e0;
        case 0x3b63e4u: goto label_3b63e4;
        case 0x3b63e8u: goto label_3b63e8;
        case 0x3b63ecu: goto label_3b63ec;
        case 0x3b63f0u: goto label_3b63f0;
        case 0x3b63f4u: goto label_3b63f4;
        case 0x3b63f8u: goto label_3b63f8;
        case 0x3b63fcu: goto label_3b63fc;
        case 0x3b6400u: goto label_3b6400;
        case 0x3b6404u: goto label_3b6404;
        case 0x3b6408u: goto label_3b6408;
        case 0x3b640cu: goto label_3b640c;
        case 0x3b6410u: goto label_3b6410;
        case 0x3b6414u: goto label_3b6414;
        case 0x3b6418u: goto label_3b6418;
        case 0x3b641cu: goto label_3b641c;
        case 0x3b6420u: goto label_3b6420;
        case 0x3b6424u: goto label_3b6424;
        case 0x3b6428u: goto label_3b6428;
        case 0x3b642cu: goto label_3b642c;
        case 0x3b6430u: goto label_3b6430;
        case 0x3b6434u: goto label_3b6434;
        case 0x3b6438u: goto label_3b6438;
        case 0x3b643cu: goto label_3b643c;
        case 0x3b6440u: goto label_3b6440;
        case 0x3b6444u: goto label_3b6444;
        case 0x3b6448u: goto label_3b6448;
        case 0x3b644cu: goto label_3b644c;
        case 0x3b6450u: goto label_3b6450;
        case 0x3b6454u: goto label_3b6454;
        case 0x3b6458u: goto label_3b6458;
        case 0x3b645cu: goto label_3b645c;
        case 0x3b6460u: goto label_3b6460;
        case 0x3b6464u: goto label_3b6464;
        case 0x3b6468u: goto label_3b6468;
        case 0x3b646cu: goto label_3b646c;
        case 0x3b6470u: goto label_3b6470;
        case 0x3b6474u: goto label_3b6474;
        case 0x3b6478u: goto label_3b6478;
        case 0x3b647cu: goto label_3b647c;
        case 0x3b6480u: goto label_3b6480;
        case 0x3b6484u: goto label_3b6484;
        case 0x3b6488u: goto label_3b6488;
        case 0x3b648cu: goto label_3b648c;
        case 0x3b6490u: goto label_3b6490;
        case 0x3b6494u: goto label_3b6494;
        case 0x3b6498u: goto label_3b6498;
        case 0x3b649cu: goto label_3b649c;
        case 0x3b64a0u: goto label_3b64a0;
        case 0x3b64a4u: goto label_3b64a4;
        case 0x3b64a8u: goto label_3b64a8;
        case 0x3b64acu: goto label_3b64ac;
        case 0x3b64b0u: goto label_3b64b0;
        case 0x3b64b4u: goto label_3b64b4;
        case 0x3b64b8u: goto label_3b64b8;
        case 0x3b64bcu: goto label_3b64bc;
        case 0x3b64c0u: goto label_3b64c0;
        case 0x3b64c4u: goto label_3b64c4;
        case 0x3b64c8u: goto label_3b64c8;
        case 0x3b64ccu: goto label_3b64cc;
        case 0x3b64d0u: goto label_3b64d0;
        case 0x3b64d4u: goto label_3b64d4;
        case 0x3b64d8u: goto label_3b64d8;
        case 0x3b64dcu: goto label_3b64dc;
        case 0x3b64e0u: goto label_3b64e0;
        case 0x3b64e4u: goto label_3b64e4;
        case 0x3b64e8u: goto label_3b64e8;
        case 0x3b64ecu: goto label_3b64ec;
        case 0x3b64f0u: goto label_3b64f0;
        case 0x3b64f4u: goto label_3b64f4;
        case 0x3b64f8u: goto label_3b64f8;
        case 0x3b64fcu: goto label_3b64fc;
        case 0x3b6500u: goto label_3b6500;
        case 0x3b6504u: goto label_3b6504;
        case 0x3b6508u: goto label_3b6508;
        case 0x3b650cu: goto label_3b650c;
        case 0x3b6510u: goto label_3b6510;
        case 0x3b6514u: goto label_3b6514;
        case 0x3b6518u: goto label_3b6518;
        case 0x3b651cu: goto label_3b651c;
        case 0x3b6520u: goto label_3b6520;
        case 0x3b6524u: goto label_3b6524;
        case 0x3b6528u: goto label_3b6528;
        case 0x3b652cu: goto label_3b652c;
        case 0x3b6530u: goto label_3b6530;
        case 0x3b6534u: goto label_3b6534;
        case 0x3b6538u: goto label_3b6538;
        case 0x3b653cu: goto label_3b653c;
        case 0x3b6540u: goto label_3b6540;
        case 0x3b6544u: goto label_3b6544;
        case 0x3b6548u: goto label_3b6548;
        case 0x3b654cu: goto label_3b654c;
        case 0x3b6550u: goto label_3b6550;
        case 0x3b6554u: goto label_3b6554;
        default: break;
    }

    ctx->pc = 0x3b61f8u;

label_3b61f8:
    // 0x3b61f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b61f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b61fc:
    // 0x3b61fc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b6200:
    // 0x3b6200: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b6204:
    // 0x3b6204: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b6204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6208:
    // 0x3b6208: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b620c:
    // 0x3b620c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b620cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6210:
    // 0x3b6210: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b6210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b6214:
    // 0x3b6214: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b6218:
    // 0x3b6218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b621c:
    // 0x3b621c: 0xc0ed312  jal         func_3B4C48
label_3b6220:
    if (ctx->pc == 0x3B6220u) {
        ctx->pc = 0x3B6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B621Cu;
        // 0x3b6220: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6224u;
        goto label_3b6224;
    }
    ctx->pc = 0x3B621Cu;
    SET_GPR_U32(ctx, 31, 0x3B6224u);
    ctx->pc = 0x3B6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B621Cu;
    // 0x3b6220: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C48u, 0x3B621Cu, 0x3B6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6224u;
label_3b6224:
    // 0x3b6224: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_3b6228:
    if (ctx->pc == 0x3B6228u) {
        ctx->pc = 0x3B6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6224u;
        // 0x3b6228: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B622Cu;
        goto label_3b622c;
    }
    ctx->pc = 0x3B6224u;
    {
        const bool branch_taken_0x3b6224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6224u;
        // 0x3b6228: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6224) {
            ctx->pc = 0x3B647Cu;
            goto label_3b647c;
        }
    }
    ctx->pc = 0x3B622Cu;
label_3b622c:
    // 0x3b622c: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x3b622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_3b6230:
    // 0x3b6230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6234:
    // 0x3b6234: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b6234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b6238:
    // 0x3b6238: 0xc10486e  jal         func_4121B8
label_3b623c:
    if (ctx->pc == 0x3B623Cu) {
        ctx->pc = 0x3B623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6238u;
        // 0x3b623c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6240u;
        goto label_3b6240;
    }
    ctx->pc = 0x3B6238u;
    SET_GPR_U32(ctx, 31, 0x3B6240u);
    ctx->pc = 0x3B623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6238u;
    // 0x3b623c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B6238u, 0x3B6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6240u;
label_3b6240:
    // 0x3b6240: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_3b6244:
    if (ctx->pc == 0x3B6244u) {
        ctx->pc = 0x3B6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6240u;
        // 0x3b6244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6248u;
        goto label_3b6248;
    }
    ctx->pc = 0x3B6240u;
    {
        const bool branch_taken_0x3b6240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6240u;
        // 0x3b6244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6240) {
            ctx->pc = 0x3B6534u;
            goto label_3b6534;
        }
    }
    ctx->pc = 0x3B6248u;
label_3b6248:
    // 0x3b6248: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_3b624c:
    if (ctx->pc == 0x3B624Cu) {
        ctx->pc = 0x3B624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6248u;
        // 0x3b624c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6250u;
        goto label_3b6250;
    }
    ctx->pc = 0x3B6248u;
    {
        const bool branch_taken_0x3b6248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6248u;
        // 0x3b624c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6248) {
            ctx->pc = 0x3B62A8u;
            goto label_3b62a8;
        }
    }
    ctx->pc = 0x3B6250u;
label_3b6250:
    // 0x3b6250: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b6250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_3b6254:
    // 0x3b6254: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3b6254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3b6258:
    // 0x3b6258: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3b6258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_3b625c:
    // 0x3b625c: 0x24537fd8  addiu       $s3, $v0, 0x7FD8
    ctx->pc = 0x3b625cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32728));
label_3b6260:
    // 0x3b6260: 0xc1036d2  jal         func_40DB48
label_3b6264:
    if (ctx->pc == 0x3B6264u) {
        ctx->pc = 0x3B6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6260u;
        // 0x3b6264: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6268u;
        goto label_3b6268;
    }
    ctx->pc = 0x3B6260u;
    SET_GPR_U32(ctx, 31, 0x3B6268u);
    ctx->pc = 0x3B6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6260u;
    // 0x3b6264: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6260u, 0x3B6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6268u;
label_3b6268:
    // 0x3b6268: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x3b6268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_3b626c:
    // 0x3b626c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b6270:
    // 0x3b6270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6274:
    // 0x3b6274: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b6274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b6278:
    // 0x3b6278: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b6278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b627c:
    // 0x3b627c: 0x121100ad  beq         $s0, $s1, . + 4 + (0xAD << 2)
label_3b6280:
    if (ctx->pc == 0x3B6280u) {
        ctx->pc = 0x3B6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B627Cu;
        // 0x3b6280: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6284u;
        goto label_3b6284;
    }
    ctx->pc = 0x3B627Cu;
    {
        const bool branch_taken_0x3b627c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B627Cu;
        // 0x3b6280: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b627c) {
            ctx->pc = 0x3B6534u;
            goto label_3b6534;
        }
    }
    ctx->pc = 0x3B6284u;
label_3b6284:
    // 0x3b6284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6288:
    // 0x3b6288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b6288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b628c:
    // 0x3b628c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b628cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6290:
    // 0x3b6290: 0x260f809  jalr        $s3
label_3b6294:
    if (ctx->pc == 0x3B6294u) {
        ctx->pc = 0x3B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6290u;
        // 0x3b6294: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6298u;
        goto label_3b6298;
    }
    ctx->pc = 0x3B6290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x3B6298u);
        ctx->pc = 0x3B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6290u;
        // 0x3b6294: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6290u, 0x3B6298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6298u;
label_3b6298:
    // 0x3b6298: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b629c:
    if (ctx->pc == 0x3B629Cu) {
        ctx->pc = 0x3B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6298u;
        // 0x3b629c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62A0u;
        goto label_3b62a0;
    }
    ctx->pc = 0x3B6298u;
    {
        const bool branch_taken_0x3b6298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6298u;
        // 0x3b629c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6298) {
            ctx->pc = 0x3B6288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6288;
        }
    }
    ctx->pc = 0x3B62A0u;
label_3b62a0:
    // 0x3b62a0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_3b62a4:
    if (ctx->pc == 0x3B62A4u) {
        ctx->pc = 0x3B62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62A0u;
        // 0x3b62a4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62A8u;
        goto label_3b62a8;
    }
    ctx->pc = 0x3B62A0u;
    {
        const bool branch_taken_0x3b62a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62A0u;
        // 0x3b62a4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62a0) {
            ctx->pc = 0x3B6534u;
            goto label_3b6534;
        }
    }
    ctx->pc = 0x3B62A8u;
label_3b62a8:
    // 0x3b62a8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b62ac:
    // 0x3b62ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b62acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b62b0:
    // 0x3b62b0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b62b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b62b4:
    // 0x3b62b4: 0x24a57e10  addiu       $a1, $a1, 0x7E10
    ctx->pc = 0x3b62b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32272));
label_3b62b8:
    // 0x3b62b8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3b62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3b62bc:
    // 0x3b62bc: 0xc0ede40  jal         func_3B7900
label_3b62c0:
    if (ctx->pc == 0x3B62C0u) {
        ctx->pc = 0x3B62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62BCu;
        // 0x3b62c0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62C4u;
        goto label_3b62c4;
    }
    ctx->pc = 0x3B62BCu;
    SET_GPR_U32(ctx, 31, 0x3B62C4u);
    ctx->pc = 0x3B62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B62BCu;
    // 0x3b62c0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B62BCu, 0x3B62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62C4u;
label_3b62c4:
    // 0x3b62c4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x3b62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3b62c8:
    // 0x3b62c8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_3b62cc:
    if (ctx->pc == 0x3B62CCu) {
        ctx->pc = 0x3B62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62C8u;
        // 0x3b62cc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62D0u;
        goto label_3b62d0;
    }
    ctx->pc = 0x3B62C8u;
    {
        const bool branch_taken_0x3b62c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62C8u;
        // 0x3b62cc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62c8) {
            ctx->pc = 0x3B6320u;
            goto label_3b6320;
        }
    }
    ctx->pc = 0x3B62D0u;
label_3b62d0:
    // 0x3b62d0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b62d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b62d4:
    // 0x3b62d4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b62d8:
    // 0x3b62d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b62dc:
    // 0x3b62dc: 0x40f809  jalr        $v0
label_3b62e0:
    if (ctx->pc == 0x3B62E0u) {
        ctx->pc = 0x3B62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62DCu;
        // 0x3b62e0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62E4u;
        goto label_3b62e4;
    }
    ctx->pc = 0x3B62DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B62E4u);
        ctx->pc = 0x3B62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62DCu;
        // 0x3b62e0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B62DCu, 0x3B62E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B62E4u;
label_3b62e4:
    // 0x3b62e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3b62e8:
    if (ctx->pc == 0x3B62E8u) {
        ctx->pc = 0x3B62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62E4u;
        // 0x3b62e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B62ECu;
        goto label_3b62ec;
    }
    ctx->pc = 0x3B62E4u;
    {
        const bool branch_taken_0x3b62e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62E4u;
        // 0x3b62e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62e4) {
            ctx->pc = 0x3B6324u;
            goto label_3b6324;
        }
    }
    ctx->pc = 0x3B62ECu;
label_3b62ec:
    // 0x3b62ec: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3b62ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3b62f0:
    // 0x3b62f0: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x3b62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_3b62f4:
    // 0x3b62f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3b62f8:
    // 0x3b62f8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3b62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3b62fc:
    // 0x3b62fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b6300:
    // 0x3b6300: 0xc1035f6  jal         func_40D7D8
label_3b6304:
    if (ctx->pc == 0x3B6304u) {
        ctx->pc = 0x3B6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6300u;
        // 0x3b6304: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6308u;
        goto label_3b6308;
    }
    ctx->pc = 0x3B6300u;
    SET_GPR_U32(ctx, 31, 0x3B6308u);
    ctx->pc = 0x3B6304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6300u;
    // 0x3b6304: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3B6300u, 0x3B6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6308u;
label_3b6308:
    // 0x3b6308: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b6308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3b630c:
    // 0x3b630c: 0xc103628  jal         func_40D8A0
label_3b6310:
    if (ctx->pc == 0x3B6310u) {
        ctx->pc = 0x3B6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B630Cu;
        // 0x3b6310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6314u;
        goto label_3b6314;
    }
    ctx->pc = 0x3B630Cu;
    SET_GPR_U32(ctx, 31, 0x3B6314u);
    ctx->pc = 0x3B6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B630Cu;
    // 0x3b6310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3B630Cu, 0x3B6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6314u;
label_3b6314:
    // 0x3b6314: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b6318:
    if (ctx->pc == 0x3B6318u) {
        ctx->pc = 0x3B6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6314u;
        // 0x3b6318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B631Cu;
        goto label_3b631c;
    }
    ctx->pc = 0x3B6314u;
    {
        const bool branch_taken_0x3b6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6314u;
        // 0x3b6318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6314) {
            ctx->pc = 0x3B6340u;
            goto label_3b6340;
        }
    }
    ctx->pc = 0x3B631Cu;
label_3b631c:
    // 0x3b631c: 0x0  nop
    ctx->pc = 0x3b631cu;
    // NOP
label_3b6320:
    // 0x3b6320: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3b6320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3b6324:
    // 0x3b6324: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b6324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b6328:
    // 0x3b6328: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b6328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3b632c:
    // 0x3b632c: 0x24a57e80  addiu       $a1, $a1, 0x7E80
    ctx->pc = 0x3b632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
label_3b6330:
    // 0x3b6330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6334:
    // 0x3b6334: 0xc0ede40  jal         func_3B7900
label_3b6338:
    if (ctx->pc == 0x3B6338u) {
        ctx->pc = 0x3B6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6334u;
        // 0x3b6338: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B633Cu;
        goto label_3b633c;
    }
    ctx->pc = 0x3B6334u;
    SET_GPR_U32(ctx, 31, 0x3B633Cu);
    ctx->pc = 0x3B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6334u;
    // 0x3b6338: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B6334u, 0x3B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B633Cu;
label_3b633c:
    // 0x3b633c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3b633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b6340:
    // 0x3b6340: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_3b6344:
    if (ctx->pc == 0x3B6344u) {
        ctx->pc = 0x3B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6340u;
        // 0x3b6344: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6348u;
        goto label_3b6348;
    }
    ctx->pc = 0x3B6340u;
    {
        const bool branch_taken_0x3b6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6340u;
        // 0x3b6344: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6340) {
            ctx->pc = 0x3B647Cu;
            goto label_3b647c;
        }
    }
    ctx->pc = 0x3B6348u;
label_3b6348:
    // 0x3b6348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b634c:
    // 0x3b634c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x3b634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b6350:
    // 0x3b6350: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b6350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b6354:
    // 0x3b6354: 0xc103440  jal         func_40D100
label_3b6358:
    if (ctx->pc == 0x3B6358u) {
        ctx->pc = 0x3B6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6354u;
        // 0x3b6358: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B635Cu;
        goto label_3b635c;
    }
    ctx->pc = 0x3B6354u;
    SET_GPR_U32(ctx, 31, 0x3B635Cu);
    ctx->pc = 0x3B6358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6354u;
    // 0x3b6358: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B6354u, 0x3B635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B635Cu;
label_3b635c:
    // 0x3b635c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b6360:
    if (ctx->pc == 0x3B6360u) {
        ctx->pc = 0x3B6364u;
        goto label_3b6364;
    }
    ctx->pc = 0x3B635Cu;
    {
        const bool branch_taken_0x3b635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b635c) {
            ctx->pc = 0x3B636Cu;
            goto label_3b636c;
        }
    }
    ctx->pc = 0x3B6364u;
label_3b6364:
    // 0x3b6364: 0x10000043  b           . + 4 + (0x43 << 2)
label_3b6368:
    if (ctx->pc == 0x3B6368u) {
        ctx->pc = 0x3B6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6364u;
        // 0x3b6368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B636Cu;
        goto label_3b636c;
    }
    ctx->pc = 0x3B6364u;
    {
        const bool branch_taken_0x3b6364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6364u;
        // 0x3b6368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6364) {
            ctx->pc = 0x3B6474u;
            goto label_3b6474;
        }
    }
    ctx->pc = 0x3B636Cu;
label_3b636c:
    // 0x3b636c: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
label_3b6370:
    if (ctx->pc == 0x3B6370u) {
        ctx->pc = 0x3B6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B636Cu;
        // 0x3b6370: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6374u;
        goto label_3b6374;
    }
    ctx->pc = 0x3B636Cu;
    {
        const bool branch_taken_0x3b636c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B636Cu;
        // 0x3b6370: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b636c) {
            ctx->pc = 0x3B6470u;
            goto label_3b6470;
        }
    }
    ctx->pc = 0x3B6374u;
label_3b6374:
    // 0x3b6374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b6374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6378:
    // 0x3b6378: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
label_3b637c:
    if (ctx->pc == 0x3B637Cu) {
        ctx->pc = 0x3B637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6378u;
        // 0x3b637c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6380u;
        goto label_3b6380;
    }
    ctx->pc = 0x3B6378u;
    {
        const bool branch_taken_0x3b6378 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3B637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6378u;
        // 0x3b637c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6378) {
            ctx->pc = 0x3B63D8u;
            goto label_3b63d8;
        }
    }
    ctx->pc = 0x3B6380u;
label_3b6380:
    // 0x3b6380: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_3b6384:
    if (ctx->pc == 0x3B6384u) {
        ctx->pc = 0x3B6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6380u;
        // 0x3b6384: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6388u;
        goto label_3b6388;
    }
    ctx->pc = 0x3B6380u;
    {
        const bool branch_taken_0x3b6380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6380u;
        // 0x3b6384: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6380) {
            ctx->pc = 0x3B6404u;
            goto label_3b6404;
        }
    }
    ctx->pc = 0x3B6388u;
label_3b6388:
    // 0x3b6388: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3b6388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b638c:
    // 0x3b638c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3b6390:
    if (ctx->pc == 0x3B6390u) {
        ctx->pc = 0x3B6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B638Cu;
        // 0x3b6390: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6394u;
        goto label_3b6394;
    }
    ctx->pc = 0x3B638Cu;
    {
        const bool branch_taken_0x3b638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B638Cu;
        // 0x3b6390: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b638c) {
            ctx->pc = 0x3B63DCu;
            goto label_3b63dc;
        }
    }
    ctx->pc = 0x3B6394u;
label_3b6394:
    // 0x3b6394: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b6394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b6398:
    // 0x3b6398: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3b639c:
    if (ctx->pc == 0x3B639Cu) {
        ctx->pc = 0x3B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6398u;
        // 0x3b639c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63A0u;
        goto label_3b63a0;
    }
    ctx->pc = 0x3B6398u;
    {
        const bool branch_taken_0x3b6398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6398u;
        // 0x3b639c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6398) {
            ctx->pc = 0x3B63BCu;
            goto label_3b63bc;
        }
    }
    ctx->pc = 0x3B63A0u;
label_3b63a0:
    // 0x3b63a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b63a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b63a4:
    // 0x3b63a4: 0xc0ee92c  jal         func_3BA4B0
label_3b63a8:
    if (ctx->pc == 0x3B63A8u) {
        ctx->pc = 0x3B63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63A4u;
        // 0x3b63a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63ACu;
        goto label_3b63ac;
    }
    ctx->pc = 0x3B63A4u;
    SET_GPR_U32(ctx, 31, 0x3B63ACu);
    ctx->pc = 0x3B63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B63A4u;
    // 0x3b63a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B63A4u, 0x3B63ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B63ACu;
label_3b63ac:
    // 0x3b63ac: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_3b63b0:
    if (ctx->pc == 0x3B63B0u) {
        ctx->pc = 0x3B63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63ACu;
        // 0x3b63b0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63B4u;
        goto label_3b63b4;
    }
    ctx->pc = 0x3B63ACu;
    {
        const bool branch_taken_0x3b63ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63ACu;
        // 0x3b63b0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b63ac) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B63B4u;
label_3b63b4:
    // 0x3b63b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3b63b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b63b8:
    // 0x3b63b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b63bc:
    // 0x3b63bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b63bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b63c0:
    // 0x3b63c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b63c4:
    // 0x3b63c4: 0xc0ee92c  jal         func_3BA4B0
label_3b63c8:
    if (ctx->pc == 0x3B63C8u) {
        ctx->pc = 0x3B63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63C4u;
        // 0x3b63c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63CCu;
        goto label_3b63cc;
    }
    ctx->pc = 0x3B63C4u;
    SET_GPR_U32(ctx, 31, 0x3B63CCu);
    ctx->pc = 0x3B63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B63C4u;
    // 0x3b63c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B63C4u, 0x3B63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B63CCu;
label_3b63cc:
    // 0x3b63cc: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_3b63d0:
    if (ctx->pc == 0x3B63D0u) {
        ctx->pc = 0x3B63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63CCu;
        // 0x3b63d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63D4u;
        goto label_3b63d4;
    }
    ctx->pc = 0x3B63CCu;
    {
        const bool branch_taken_0x3b63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63CCu;
        // 0x3b63d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b63cc) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B63D4u;
label_3b63d4:
    // 0x3b63d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b63d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b63d8:
    // 0x3b63d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b63dc:
    // 0x3b63dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b63dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b63e0:
    // 0x3b63e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b63e4:
    // 0x3b63e4: 0xc0ee92c  jal         func_3BA4B0
label_3b63e8:
    if (ctx->pc == 0x3B63E8u) {
        ctx->pc = 0x3B63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63E4u;
        // 0x3b63e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63ECu;
        goto label_3b63ec;
    }
    ctx->pc = 0x3B63E4u;
    SET_GPR_U32(ctx, 31, 0x3B63ECu);
    ctx->pc = 0x3B63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B63E4u;
    // 0x3b63e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B63E4u, 0x3B63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B63ECu;
label_3b63ec:
    // 0x3b63ec: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_3b63f0:
    if (ctx->pc == 0x3B63F0u) {
        ctx->pc = 0x3B63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63ECu;
        // 0x3b63f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B63F4u;
        goto label_3b63f4;
    }
    ctx->pc = 0x3B63ECu;
    {
        const bool branch_taken_0x3b63ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63ECu;
        // 0x3b63f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b63ec) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B63F4u;
label_3b63f4:
    // 0x3b63f4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3b63f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3b63f8:
    // 0x3b63f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3b63fc:
    if (ctx->pc == 0x3B63FCu) {
        ctx->pc = 0x3B63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63F8u;
        // 0x3b63fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6400u;
        goto label_3b6400;
    }
    ctx->pc = 0x3B63F8u;
    {
        const bool branch_taken_0x3b63f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63F8u;
        // 0x3b63fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b63f8) {
            ctx->pc = 0x3B6470u;
            goto label_3b6470;
        }
    }
    ctx->pc = 0x3B6400u;
label_3b6400:
    // 0x3b6400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b6400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6404:
    // 0x3b6404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b6404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6408:
    // 0x3b6408: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b6408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b640c:
    // 0x3b640c: 0xc0ee92c  jal         func_3BA4B0
label_3b6410:
    if (ctx->pc == 0x3B6410u) {
        ctx->pc = 0x3B6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B640Cu;
        // 0x3b6410: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6414u;
        goto label_3b6414;
    }
    ctx->pc = 0x3B640Cu;
    SET_GPR_U32(ctx, 31, 0x3B6414u);
    ctx->pc = 0x3B6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B640Cu;
    // 0x3b6410: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B640Cu, 0x3B6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6414u;
label_3b6414:
    // 0x3b6414: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
label_3b6418:
    if (ctx->pc == 0x3B6418u) {
        ctx->pc = 0x3B6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6414u;
        // 0x3b6418: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B641Cu;
        goto label_3b641c;
    }
    ctx->pc = 0x3B6414u;
    {
        const bool branch_taken_0x3b6414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6414u;
        // 0x3b6418: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6414) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B641Cu;
label_3b641c:
    // 0x3b641c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6420:
    // 0x3b6420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b6420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b6424:
    // 0x3b6424: 0xc0ee92c  jal         func_3BA4B0
label_3b6428:
    if (ctx->pc == 0x3B6428u) {
        ctx->pc = 0x3B6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6424u;
        // 0x3b6428: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B642Cu;
        goto label_3b642c;
    }
    ctx->pc = 0x3B6424u;
    SET_GPR_U32(ctx, 31, 0x3B642Cu);
    ctx->pc = 0x3B6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6424u;
    // 0x3b6428: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B6424u, 0x3B642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B642Cu;
label_3b642c:
    // 0x3b642c: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_3b6430:
    if (ctx->pc == 0x3B6430u) {
        ctx->pc = 0x3B6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B642Cu;
        // 0x3b6430: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6434u;
        goto label_3b6434;
    }
    ctx->pc = 0x3B642Cu;
    {
        const bool branch_taken_0x3b642c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B642Cu;
        // 0x3b6430: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b642c) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B6434u;
label_3b6434:
    // 0x3b6434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b6434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6438:
    // 0x3b6438: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b643c:
    // 0x3b643c: 0xc0ee92c  jal         func_3BA4B0
label_3b6440:
    if (ctx->pc == 0x3B6440u) {
        ctx->pc = 0x3B6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B643Cu;
        // 0x3b6440: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6444u;
        goto label_3b6444;
    }
    ctx->pc = 0x3B643Cu;
    SET_GPR_U32(ctx, 31, 0x3B6444u);
    ctx->pc = 0x3B6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B643Cu;
    // 0x3b6440: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B643Cu, 0x3B6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6444u;
label_3b6444:
    // 0x3b6444: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
label_3b6448:
    if (ctx->pc == 0x3B6448u) {
        ctx->pc = 0x3B6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6444u;
        // 0x3b6448: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B644Cu;
        goto label_3b644c;
    }
    ctx->pc = 0x3B6444u;
    {
        const bool branch_taken_0x3b6444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6444u;
        // 0x3b6448: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6444) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B644Cu;
label_3b644c:
    // 0x3b644c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6450:
    // 0x3b6450: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b6450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b6454:
    // 0x3b6454: 0xc0ee92c  jal         func_3BA4B0
label_3b6458:
    if (ctx->pc == 0x3B6458u) {
        ctx->pc = 0x3B6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6454u;
        // 0x3b6458: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B645Cu;
        goto label_3b645c;
    }
    ctx->pc = 0x3B6454u;
    SET_GPR_U32(ctx, 31, 0x3B645Cu);
    ctx->pc = 0x3B6458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6454u;
    // 0x3b6458: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4B0u, 0x3B6454u, 0x3B645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B645Cu;
label_3b645c:
    // 0x3b645c: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
label_3b6460:
    if (ctx->pc == 0x3B6460u) {
        ctx->pc = 0x3B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B645Cu;
        // 0x3b6460: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6464u;
        goto label_3b6464;
    }
    ctx->pc = 0x3B645Cu;
    {
        const bool branch_taken_0x3b645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B645Cu;
        // 0x3b6460: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b645c) {
            ctx->pc = 0x3B6364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6364;
        }
    }
    ctx->pc = 0x3B6464u;
label_3b6464:
    // 0x3b6464: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3b6464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3b6468:
    // 0x3b6468: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_3b646c:
    if (ctx->pc == 0x3B646Cu) {
        ctx->pc = 0x3B646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6468u;
        // 0x3b646c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6470u;
        goto label_3b6470;
    }
    ctx->pc = 0x3B6468u;
    {
        const bool branch_taken_0x3b6468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6468u;
        // 0x3b646c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6468) {
            ctx->pc = 0x3B6400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6400;
        }
    }
    ctx->pc = 0x3B6470u;
label_3b6470:
    // 0x3b6470: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b6474:
    // 0x3b6474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b6478:
    if (ctx->pc == 0x3B6478u) {
        ctx->pc = 0x3B6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6474u;
        // 0x3b6478: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B647Cu;
        goto label_3b647c;
    }
    ctx->pc = 0x3B6474u;
    {
        const bool branch_taken_0x3b6474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6474u;
        // 0x3b6478: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6474) {
            ctx->pc = 0x3B6484u;
            goto label_3b6484;
        }
    }
    ctx->pc = 0x3B647Cu;
label_3b647c:
    // 0x3b647c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3b6480:
    if (ctx->pc == 0x3B6480u) {
        ctx->pc = 0x3B6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B647Cu;
        // 0x3b6480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6484u;
        goto label_3b6484;
    }
    ctx->pc = 0x3B647Cu;
    {
        const bool branch_taken_0x3b647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B647Cu;
        // 0x3b6480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b647c) {
            ctx->pc = 0x3B6534u;
            goto label_3b6534;
        }
    }
    ctx->pc = 0x3B6484u;
label_3b6484:
    // 0x3b6484: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b6484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_3b6488:
    // 0x3b6488: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3b6488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3b648c:
    // 0x3b648c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_3b6490:
    // 0x3b6490: 0x24537fd8  addiu       $s3, $v0, 0x7FD8
    ctx->pc = 0x3b6490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32728));
label_3b6494:
    // 0x3b6494: 0xc1036d2  jal         func_40DB48
label_3b6498:
    if (ctx->pc == 0x3B6498u) {
        ctx->pc = 0x3B6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6494u;
        // 0x3b6498: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B649Cu;
        goto label_3b649c;
    }
    ctx->pc = 0x3B6494u;
    SET_GPR_U32(ctx, 31, 0x3B649Cu);
    ctx->pc = 0x3B6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6494u;
    // 0x3b6498: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B6494u, 0x3B649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B649Cu;
label_3b649c:
    // 0x3b649c: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x3b649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_3b64a0:
    // 0x3b64a0: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b64a4:
    // 0x3b64a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b64a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b64a8:
    // 0x3b64a8: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b64a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b64ac:
    // 0x3b64ac: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b64acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b64b0:
    // 0x3b64b0: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_3b64b4:
    if (ctx->pc == 0x3B64B4u) {
        ctx->pc = 0x3B64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64B0u;
        // 0x3b64b4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64B8u;
        goto label_3b64b8;
    }
    ctx->pc = 0x3B64B0u;
    {
        const bool branch_taken_0x3b64b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64B0u;
        // 0x3b64b4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64b0) {
            ctx->pc = 0x3B64DCu;
            goto label_3b64dc;
        }
    }
    ctx->pc = 0x3B64B8u;
label_3b64b8:
    // 0x3b64b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b64b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b64bc:
    // 0x3b64bc: 0x0  nop
    ctx->pc = 0x3b64bcu;
    // NOP
label_3b64c0:
    // 0x3b64c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b64c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b64c4:
    // 0x3b64c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b64c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b64c8:
    // 0x3b64c8: 0x260f809  jalr        $s3
label_3b64cc:
    if (ctx->pc == 0x3B64CCu) {
        ctx->pc = 0x3B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64C8u;
        // 0x3b64cc: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64D0u;
        goto label_3b64d0;
    }
    ctx->pc = 0x3B64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x3B64D0u);
        ctx->pc = 0x3B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64C8u;
        // 0x3b64cc: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B64C8u, 0x3B64D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B64D0u;
label_3b64d0:
    // 0x3b64d0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b64d4:
    if (ctx->pc == 0x3B64D4u) {
        ctx->pc = 0x3B64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64D0u;
        // 0x3b64d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64D8u;
        goto label_3b64d8;
    }
    ctx->pc = 0x3B64D0u;
    {
        const bool branch_taken_0x3b64d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64D0u;
        // 0x3b64d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64d0) {
            ctx->pc = 0x3B64C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b64c0;
        }
    }
    ctx->pc = 0x3B64D8u;
label_3b64d8:
    // 0x3b64d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3b64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b64dc:
    // 0x3b64dc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_3b64e0:
    if (ctx->pc == 0x3B64E0u) {
        ctx->pc = 0x3B64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64DCu;
        // 0x3b64e0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64E4u;
        goto label_3b64e4;
    }
    ctx->pc = 0x3B64DCu;
    {
        const bool branch_taken_0x3b64dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b64dc) {
            ctx->pc = 0x3B64E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B64DCu;
            // 0x3b64e0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6534u;
            goto label_3b6534;
        }
    }
    ctx->pc = 0x3B64E4u;
label_3b64e4:
    // 0x3b64e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b64e8:
    if (ctx->pc == 0x3B64E8u) {
        ctx->pc = 0x3B64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64E4u;
        // 0x3b64e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64ECu;
        goto label_3b64ec;
    }
    ctx->pc = 0x3B64E4u;
    {
        const bool branch_taken_0x3b64e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64E4u;
        // 0x3b64e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64e4) {
            ctx->pc = 0x3B651Cu;
            goto label_3b651c;
        }
    }
    ctx->pc = 0x3B64ECu;
label_3b64ec:
    // 0x3b64ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b64ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b64f0:
    // 0x3b64f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b64f4:
    // 0x3b64f4: 0x0  nop
    ctx->pc = 0x3b64f4u;
    // NOP
label_3b64f8:
    // 0x3b64f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b64f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b64fc:
    // 0x3b64fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3b64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3b6500:
    // 0x3b6500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b6500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6504:
    // 0x3b6504: 0xc0ee520  jal         func_3B9480
label_3b6508:
    if (ctx->pc == 0x3B6508u) {
        ctx->pc = 0x3B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6504u;
        // 0x3b6508: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B650Cu;
        goto label_3b650c;
    }
    ctx->pc = 0x3B6504u;
    SET_GPR_U32(ctx, 31, 0x3B650Cu);
    ctx->pc = 0x3B6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6504u;
    // 0x3b6508: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9480u, 0x3B6504u, 0x3B650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B650Cu;
label_3b650c:
    // 0x3b650c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b6510:
    // 0x3b6510: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b6510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b6514:
    // 0x3b6514: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3b6518:
    if (ctx->pc == 0x3B6518u) {
        ctx->pc = 0x3B6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6514u;
        // 0x3b6518: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B651Cu;
        goto label_3b651c;
    }
    ctx->pc = 0x3B6514u;
    {
        const bool branch_taken_0x3b6514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6514u;
        // 0x3b6518: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6514) {
            ctx->pc = 0x3B64F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b64f8;
        }
    }
    ctx->pc = 0x3B651Cu;
label_3b651c:
    // 0x3b651c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b6520:
    // 0x3b6520: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3b6520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b6524:
    // 0x3b6524: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b6528:
    // 0x3b6528: 0x60f809  jalr        $v1
label_3b652c:
    if (ctx->pc == 0x3B652Cu) {
        ctx->pc = 0x3B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6528u;
        // 0x3b652c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6530u;
        goto label_3b6530;
    }
    ctx->pc = 0x3B6528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B6530u);
        ctx->pc = 0x3B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6528u;
        // 0x3b652c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6528u, 0x3B6530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6530u;
label_3b6530:
    // 0x3b6530: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3b6530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6534:
    // 0x3b6534: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b6534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6538:
    // 0x3b6538: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b6538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b653c:
    // 0x3b653c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b653cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6540:
    // 0x3b6540: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b6540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6544:
    // 0x3b6544: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b6544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b6548:
    // 0x3b6548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b6548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b654c:
    // 0x3b654c: 0x3e00008  jr          $ra
label_3b6550:
    if (ctx->pc == 0x3B6550u) {
        ctx->pc = 0x3B6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B654Cu;
        // 0x3b6550: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6554u;
        goto label_3b6554;
    }
    ctx->pc = 0x3B654Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B654Cu;
        // 0x3b6550: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B654Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6554u;
label_3b6554:
    // 0x3b6554: 0x0  nop
    ctx->pc = 0x3b6554u;
    // NOP
    ctx->pc = 0x3b6558u;
}
