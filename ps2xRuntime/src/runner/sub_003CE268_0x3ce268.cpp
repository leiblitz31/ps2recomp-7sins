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

// Function: sub_003CE268
// Address: 0x3ce268 - 0x3ce5e8
void sub_003CE268_0x3ce268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE268_0x3ce268");
#endif

    switch (ctx->pc) {
        case 0x3ce268u: goto label_3ce268;
        case 0x3ce26cu: goto label_3ce26c;
        case 0x3ce270u: goto label_3ce270;
        case 0x3ce274u: goto label_3ce274;
        case 0x3ce278u: goto label_3ce278;
        case 0x3ce27cu: goto label_3ce27c;
        case 0x3ce280u: goto label_3ce280;
        case 0x3ce284u: goto label_3ce284;
        case 0x3ce288u: goto label_3ce288;
        case 0x3ce28cu: goto label_3ce28c;
        case 0x3ce290u: goto label_3ce290;
        case 0x3ce294u: goto label_3ce294;
        case 0x3ce298u: goto label_3ce298;
        case 0x3ce29cu: goto label_3ce29c;
        case 0x3ce2a0u: goto label_3ce2a0;
        case 0x3ce2a4u: goto label_3ce2a4;
        case 0x3ce2a8u: goto label_3ce2a8;
        case 0x3ce2acu: goto label_3ce2ac;
        case 0x3ce2b0u: goto label_3ce2b0;
        case 0x3ce2b4u: goto label_3ce2b4;
        case 0x3ce2b8u: goto label_3ce2b8;
        case 0x3ce2bcu: goto label_3ce2bc;
        case 0x3ce2c0u: goto label_3ce2c0;
        case 0x3ce2c4u: goto label_3ce2c4;
        case 0x3ce2c8u: goto label_3ce2c8;
        case 0x3ce2ccu: goto label_3ce2cc;
        case 0x3ce2d0u: goto label_3ce2d0;
        case 0x3ce2d4u: goto label_3ce2d4;
        case 0x3ce2d8u: goto label_3ce2d8;
        case 0x3ce2dcu: goto label_3ce2dc;
        case 0x3ce2e0u: goto label_3ce2e0;
        case 0x3ce2e4u: goto label_3ce2e4;
        case 0x3ce2e8u: goto label_3ce2e8;
        case 0x3ce2ecu: goto label_3ce2ec;
        case 0x3ce2f0u: goto label_3ce2f0;
        case 0x3ce2f4u: goto label_3ce2f4;
        case 0x3ce2f8u: goto label_3ce2f8;
        case 0x3ce2fcu: goto label_3ce2fc;
        case 0x3ce300u: goto label_3ce300;
        case 0x3ce304u: goto label_3ce304;
        case 0x3ce308u: goto label_3ce308;
        case 0x3ce30cu: goto label_3ce30c;
        case 0x3ce310u: goto label_3ce310;
        case 0x3ce314u: goto label_3ce314;
        case 0x3ce318u: goto label_3ce318;
        case 0x3ce31cu: goto label_3ce31c;
        case 0x3ce320u: goto label_3ce320;
        case 0x3ce324u: goto label_3ce324;
        case 0x3ce328u: goto label_3ce328;
        case 0x3ce32cu: goto label_3ce32c;
        case 0x3ce330u: goto label_3ce330;
        case 0x3ce334u: goto label_3ce334;
        case 0x3ce338u: goto label_3ce338;
        case 0x3ce33cu: goto label_3ce33c;
        case 0x3ce340u: goto label_3ce340;
        case 0x3ce344u: goto label_3ce344;
        case 0x3ce348u: goto label_3ce348;
        case 0x3ce34cu: goto label_3ce34c;
        case 0x3ce350u: goto label_3ce350;
        case 0x3ce354u: goto label_3ce354;
        case 0x3ce358u: goto label_3ce358;
        case 0x3ce35cu: goto label_3ce35c;
        case 0x3ce360u: goto label_3ce360;
        case 0x3ce364u: goto label_3ce364;
        case 0x3ce368u: goto label_3ce368;
        case 0x3ce36cu: goto label_3ce36c;
        case 0x3ce370u: goto label_3ce370;
        case 0x3ce374u: goto label_3ce374;
        case 0x3ce378u: goto label_3ce378;
        case 0x3ce37cu: goto label_3ce37c;
        case 0x3ce380u: goto label_3ce380;
        case 0x3ce384u: goto label_3ce384;
        case 0x3ce388u: goto label_3ce388;
        case 0x3ce38cu: goto label_3ce38c;
        case 0x3ce390u: goto label_3ce390;
        case 0x3ce394u: goto label_3ce394;
        case 0x3ce398u: goto label_3ce398;
        case 0x3ce39cu: goto label_3ce39c;
        case 0x3ce3a0u: goto label_3ce3a0;
        case 0x3ce3a4u: goto label_3ce3a4;
        case 0x3ce3a8u: goto label_3ce3a8;
        case 0x3ce3acu: goto label_3ce3ac;
        case 0x3ce3b0u: goto label_3ce3b0;
        case 0x3ce3b4u: goto label_3ce3b4;
        case 0x3ce3b8u: goto label_3ce3b8;
        case 0x3ce3bcu: goto label_3ce3bc;
        case 0x3ce3c0u: goto label_3ce3c0;
        case 0x3ce3c4u: goto label_3ce3c4;
        case 0x3ce3c8u: goto label_3ce3c8;
        case 0x3ce3ccu: goto label_3ce3cc;
        case 0x3ce3d0u: goto label_3ce3d0;
        case 0x3ce3d4u: goto label_3ce3d4;
        case 0x3ce3d8u: goto label_3ce3d8;
        case 0x3ce3dcu: goto label_3ce3dc;
        case 0x3ce3e0u: goto label_3ce3e0;
        case 0x3ce3e4u: goto label_3ce3e4;
        case 0x3ce3e8u: goto label_3ce3e8;
        case 0x3ce3ecu: goto label_3ce3ec;
        case 0x3ce3f0u: goto label_3ce3f0;
        case 0x3ce3f4u: goto label_3ce3f4;
        case 0x3ce3f8u: goto label_3ce3f8;
        case 0x3ce3fcu: goto label_3ce3fc;
        case 0x3ce400u: goto label_3ce400;
        case 0x3ce404u: goto label_3ce404;
        case 0x3ce408u: goto label_3ce408;
        case 0x3ce40cu: goto label_3ce40c;
        case 0x3ce410u: goto label_3ce410;
        case 0x3ce414u: goto label_3ce414;
        case 0x3ce418u: goto label_3ce418;
        case 0x3ce41cu: goto label_3ce41c;
        case 0x3ce420u: goto label_3ce420;
        case 0x3ce424u: goto label_3ce424;
        case 0x3ce428u: goto label_3ce428;
        case 0x3ce42cu: goto label_3ce42c;
        case 0x3ce430u: goto label_3ce430;
        case 0x3ce434u: goto label_3ce434;
        case 0x3ce438u: goto label_3ce438;
        case 0x3ce43cu: goto label_3ce43c;
        case 0x3ce440u: goto label_3ce440;
        case 0x3ce444u: goto label_3ce444;
        case 0x3ce448u: goto label_3ce448;
        case 0x3ce44cu: goto label_3ce44c;
        case 0x3ce450u: goto label_3ce450;
        case 0x3ce454u: goto label_3ce454;
        case 0x3ce458u: goto label_3ce458;
        case 0x3ce45cu: goto label_3ce45c;
        case 0x3ce460u: goto label_3ce460;
        case 0x3ce464u: goto label_3ce464;
        case 0x3ce468u: goto label_3ce468;
        case 0x3ce46cu: goto label_3ce46c;
        case 0x3ce470u: goto label_3ce470;
        case 0x3ce474u: goto label_3ce474;
        case 0x3ce478u: goto label_3ce478;
        case 0x3ce47cu: goto label_3ce47c;
        case 0x3ce480u: goto label_3ce480;
        case 0x3ce484u: goto label_3ce484;
        case 0x3ce488u: goto label_3ce488;
        case 0x3ce48cu: goto label_3ce48c;
        case 0x3ce490u: goto label_3ce490;
        case 0x3ce494u: goto label_3ce494;
        case 0x3ce498u: goto label_3ce498;
        case 0x3ce49cu: goto label_3ce49c;
        case 0x3ce4a0u: goto label_3ce4a0;
        case 0x3ce4a4u: goto label_3ce4a4;
        case 0x3ce4a8u: goto label_3ce4a8;
        case 0x3ce4acu: goto label_3ce4ac;
        case 0x3ce4b0u: goto label_3ce4b0;
        case 0x3ce4b4u: goto label_3ce4b4;
        case 0x3ce4b8u: goto label_3ce4b8;
        case 0x3ce4bcu: goto label_3ce4bc;
        case 0x3ce4c0u: goto label_3ce4c0;
        case 0x3ce4c4u: goto label_3ce4c4;
        case 0x3ce4c8u: goto label_3ce4c8;
        case 0x3ce4ccu: goto label_3ce4cc;
        case 0x3ce4d0u: goto label_3ce4d0;
        case 0x3ce4d4u: goto label_3ce4d4;
        case 0x3ce4d8u: goto label_3ce4d8;
        case 0x3ce4dcu: goto label_3ce4dc;
        case 0x3ce4e0u: goto label_3ce4e0;
        case 0x3ce4e4u: goto label_3ce4e4;
        case 0x3ce4e8u: goto label_3ce4e8;
        case 0x3ce4ecu: goto label_3ce4ec;
        case 0x3ce4f0u: goto label_3ce4f0;
        case 0x3ce4f4u: goto label_3ce4f4;
        case 0x3ce4f8u: goto label_3ce4f8;
        case 0x3ce4fcu: goto label_3ce4fc;
        case 0x3ce500u: goto label_3ce500;
        case 0x3ce504u: goto label_3ce504;
        case 0x3ce508u: goto label_3ce508;
        case 0x3ce50cu: goto label_3ce50c;
        case 0x3ce510u: goto label_3ce510;
        case 0x3ce514u: goto label_3ce514;
        case 0x3ce518u: goto label_3ce518;
        case 0x3ce51cu: goto label_3ce51c;
        case 0x3ce520u: goto label_3ce520;
        case 0x3ce524u: goto label_3ce524;
        case 0x3ce528u: goto label_3ce528;
        case 0x3ce52cu: goto label_3ce52c;
        case 0x3ce530u: goto label_3ce530;
        case 0x3ce534u: goto label_3ce534;
        case 0x3ce538u: goto label_3ce538;
        case 0x3ce53cu: goto label_3ce53c;
        case 0x3ce540u: goto label_3ce540;
        case 0x3ce544u: goto label_3ce544;
        case 0x3ce548u: goto label_3ce548;
        case 0x3ce54cu: goto label_3ce54c;
        case 0x3ce550u: goto label_3ce550;
        case 0x3ce554u: goto label_3ce554;
        case 0x3ce558u: goto label_3ce558;
        case 0x3ce55cu: goto label_3ce55c;
        case 0x3ce560u: goto label_3ce560;
        case 0x3ce564u: goto label_3ce564;
        case 0x3ce568u: goto label_3ce568;
        case 0x3ce56cu: goto label_3ce56c;
        case 0x3ce570u: goto label_3ce570;
        case 0x3ce574u: goto label_3ce574;
        case 0x3ce578u: goto label_3ce578;
        case 0x3ce57cu: goto label_3ce57c;
        case 0x3ce580u: goto label_3ce580;
        case 0x3ce584u: goto label_3ce584;
        case 0x3ce588u: goto label_3ce588;
        case 0x3ce58cu: goto label_3ce58c;
        case 0x3ce590u: goto label_3ce590;
        case 0x3ce594u: goto label_3ce594;
        case 0x3ce598u: goto label_3ce598;
        case 0x3ce59cu: goto label_3ce59c;
        case 0x3ce5a0u: goto label_3ce5a0;
        case 0x3ce5a4u: goto label_3ce5a4;
        case 0x3ce5a8u: goto label_3ce5a8;
        case 0x3ce5acu: goto label_3ce5ac;
        case 0x3ce5b0u: goto label_3ce5b0;
        case 0x3ce5b4u: goto label_3ce5b4;
        case 0x3ce5b8u: goto label_3ce5b8;
        case 0x3ce5bcu: goto label_3ce5bc;
        case 0x3ce5c0u: goto label_3ce5c0;
        case 0x3ce5c4u: goto label_3ce5c4;
        case 0x3ce5c8u: goto label_3ce5c8;
        case 0x3ce5ccu: goto label_3ce5cc;
        case 0x3ce5d0u: goto label_3ce5d0;
        case 0x3ce5d4u: goto label_3ce5d4;
        case 0x3ce5d8u: goto label_3ce5d8;
        case 0x3ce5dcu: goto label_3ce5dc;
        case 0x3ce5e0u: goto label_3ce5e0;
        case 0x3ce5e4u: goto label_3ce5e4;
        default: break;
    }

    ctx->pc = 0x3ce268u;

label_3ce268:
    // 0x3ce268: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3ce268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3ce26c:
    // 0x3ce26c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ce26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ce270:
    // 0x3ce270: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3ce270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3ce274:
    // 0x3ce274: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3ce274u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce278:
    // 0x3ce278: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3ce278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3ce27c:
    // 0x3ce27c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3ce27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3ce280:
    // 0x3ce280: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ce280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce284:
    // 0x3ce284: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3ce284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3ce288:
    // 0x3ce288: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3ce288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3ce28c:
    // 0x3ce28c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3ce28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3ce290:
    // 0x3ce290: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ce290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ce294:
    // 0x3ce294: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3ce294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_3ce298:
    // 0x3ce298: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ce298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ce29c:
    // 0x3ce29c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3ce29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3ce2a0:
    // 0x3ce2a0: 0x8ed3000c  lw          $s3, 0xC($s6)
    ctx->pc = 0x3ce2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_3ce2a4:
    // 0x3ce2a4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3ce2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_3ce2a8:
    // 0x3ce2a8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ce2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ce2ac:
    // 0x3ce2ac: 0x24679b50  addiu       $a3, $v1, -0x64B0
    ctx->pc = 0x3ce2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941520));
label_3ce2b0:
    // 0x3ce2b0: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3ce2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_3ce2b4:
    // 0x3ce2b4: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x3ce2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_3ce2b8:
    // 0x3ce2b8: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x3ce2b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_3ce2bc:
    // 0x3ce2bc: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x3ce2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3ce2c0:
    // 0x3ce2c0: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x3ce2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3ce2c4:
    // 0x3ce2c4: 0xa3a50004  sb          $a1, 0x4($sp)
    ctx->pc = 0x3ce2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
label_3ce2c8:
    // 0x3ce2c8: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_3ce2cc:
    if (ctx->pc == 0x3CE2CCu) {
        ctx->pc = 0x3CE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE2C8u;
        // 0x3ce2cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE2D0u;
        goto label_3ce2d0;
    }
    ctx->pc = 0x3CE2C8u;
    {
        const bool branch_taken_0x3ce2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE2C8u;
        // 0x3ce2cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce2c8) {
            ctx->pc = 0x3CE5B0u;
            goto label_3ce5b0;
        }
    }
    ctx->pc = 0x3CE2D0u;
label_3ce2d0:
    // 0x3ce2d0: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x3ce2d0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_3ce2d4:
    // 0x3ce2d4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x3ce2d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ce2d8:
    // 0x3ce2d8: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x3ce2d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_3ce2dc:
    // 0x3ce2dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3ce2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce2e0:
    // 0x3ce2e0: 0x1918c0  sll         $v1, $t9, 3
    ctx->pc = 0x3ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
label_3ce2e4:
    // 0x3ce2e4: 0x27250001  addiu       $a1, $t9, 0x1
    ctx->pc = 0x3ce2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3ce2e8:
    // 0x3ce2e8: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x3ce2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
label_3ce2ec:
    // 0x3ce2ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ce2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ce2f0:
    // 0x3ce2f0: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x3ce2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_3ce2f4:
    // 0x3ce2f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3ce2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ce2f8:
    // 0x3ce2f8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3ce2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3ce2fc:
    // 0x3ce2fc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3ce2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3ce300:
    // 0x3ce300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ce300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ce304:
    // 0x3ce304: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce308:
    // 0x3ce308: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3ce308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce30c:
    // 0x3ce30c: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x3ce30cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_3ce310:
    // 0x3ce310: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3ce310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3ce314:
    // 0x3ce314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ce314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ce318:
    // 0x3ce318: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce31c:
    // 0x3ce31c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3ce31cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce320:
    // 0x3ce320: 0xa6e30002  sh          $v1, 0x2($s7)
    ctx->pc = 0x3ce320u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 2), (uint16_t)GPR_U32(ctx, 3));
label_3ce324:
    // 0x3ce324: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3ce324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3ce328:
    // 0x3ce328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ce328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ce32c:
    // 0x3ce32c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce330:
    // 0x3ce330: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3ce330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce334:
    // 0x3ce334: 0xa6e30004  sh          $v1, 0x4($s7)
    ctx->pc = 0x3ce334u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 3));
label_3ce338:
    // 0x3ce338: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ce338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce33c:
    // 0x3ce33c: 0x0  nop
    ctx->pc = 0x3ce33cu;
    // NOP
label_3ce340:
    // 0x3ce340: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x3ce340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3ce344:
    // 0x3ce344: 0x152840  sll         $a1, $s5, 1
    ctx->pc = 0x3ce344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_3ce348:
    // 0x3ce348: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3ce348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_3ce34c:
    // 0x3ce34c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3ce34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_3ce350:
    // 0x3ce350: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x3ce350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_3ce354:
    // 0x3ce354: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x3ce354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3ce358:
    // 0x3ce358: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3ce358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce35c:
    // 0x3ce35c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3ce35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3ce360:
    // 0x3ce360: 0x94ae0000  lhu         $t6, 0x0($a1)
    ctx->pc = 0x3ce360u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3ce364:
    // 0x3ce364: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x3ce364u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_3ce368:
    // 0x3ce368: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ce368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3ce36c:
    // 0x3ce36c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3ce36cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_3ce370:
    // 0x3ce370: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3ce370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_3ce374:
    // 0x3ce374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce378:
    // 0x3ce378: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3ce378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3ce37c:
    // 0x3ce37c: 0x948d0000  lhu         $t5, 0x0($a0)
    ctx->pc = 0x3ce37cu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce380:
    // 0x3ce380: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x3ce380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
label_3ce384:
    // 0x3ce384: 0x12800043  beqz        $s4, . + 4 + (0x43 << 2)
label_3ce388:
    if (ctx->pc == 0x3CE388u) {
        ctx->pc = 0x3CE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE384u;
        // 0x3ce388: 0x8ed0001c  lw          $s0, 0x1C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE38Cu;
        goto label_3ce38c;
    }
    ctx->pc = 0x3CE384u;
    {
        const bool branch_taken_0x3ce384 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE384u;
        // 0x3ce388: 0x8ed0001c  lw          $s0, 0x1C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce384) {
            ctx->pc = 0x3CE494u;
            goto label_3ce494;
        }
    }
    ctx->pc = 0x3CE38Cu;
label_3ce38c:
    // 0x3ce38c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x3ce38cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_3ce390:
    // 0x3ce390: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x3ce390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_3ce394:
    // 0x3ce394: 0x2418002c  addiu       $t8, $zero, 0x2C
    ctx->pc = 0x3ce394u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3ce398:
    // 0x3ce398: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3ce398u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_3ce39c:
    // 0x3ce39c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3ce39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3ce3a0:
    // 0x3ce3a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ce3a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce3a4:
    // 0x3ce3a4: 0x400013  mtlo        $v0
    ctx->pc = 0x3ce3a4u;
    ctx->lo = GPR_U64(ctx, 2);
label_3ce3a8:
    // 0x3ce3a8: 0x70f83000  madd        $a2, $a3, $t8
    ctx->pc = 0x3ce3a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 24); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3ce3ac:
    // 0x3ce3ac: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
label_3ce3b0:
    if (ctx->pc == 0x3CE3B0u) {
        ctx->pc = 0x3CE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE3ACu;
        // 0x3ce3b0: 0x24ef0001  addiu       $t7, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE3B4u;
        goto label_3ce3b4;
    }
    ctx->pc = 0x3CE3ACu;
    {
        const bool branch_taken_0x3ce3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE3ACu;
        // 0x3ce3b0: 0x24ef0001  addiu       $t7, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce3ac) {
            ctx->pc = 0x3CE484u;
            goto label_3ce484;
        }
    }
    ctx->pc = 0x3CE3B4u;
label_3ce3b4:
    // 0x3ce3b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3ce3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ce3b8:
    // 0x3ce3b8: 0x504c0033  beql        $v0, $t4, . + 4 + (0x33 << 2)
label_3ce3bc:
    if (ctx->pc == 0x3CE3BCu) {
        ctx->pc = 0x3CE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE3B8u;
        // 0x3ce3bc: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE3C0u;
        goto label_3ce3c0;
    }
    ctx->pc = 0x3CE3B8u;
    {
        const bool branch_taken_0x3ce3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x3ce3b8) {
            ctx->pc = 0x3CE3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE3B8u;
            // 0x3ce3bc: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE488u;
            goto label_3ce488;
        }
    }
    ctx->pc = 0x3CE3C0u;
label_3ce3c0:
    // 0x3ce3c0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3ce3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_3ce3c4:
    // 0x3ce3c4: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x3ce3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ce3c8:
    // 0x3ce3c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3ce3c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_3ce3cc:
    // 0x3ce3cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ce3ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce3d0:
    // 0x3ce3d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ce3d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce3d4:
    // 0x3ce3d4: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x3ce3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_3ce3d8:
    // 0x3ce3d8: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3ce3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3ce3dc:
    // 0x3ce3dc: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x3ce3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_3ce3e0:
    // 0x3ce3e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3ce3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ce3e4:
    // 0x3ce3e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3ce3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3ce3e8:
    // 0x3ce3e8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3ce3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3ce3ec:
    // 0x3ce3ec: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3ce3ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ce3f0:
    // 0x3ce3f0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ce3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3ce3f4:
    // 0x3ce3f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ce3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3ce3f8:
    // 0x3ce3f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3ce3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce3fc:
    // 0x3ce3fc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ce3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3ce400:
    // 0x3ce400: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ce400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3ce404:
    // 0x3ce404: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3ce404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ce408:
    // 0x3ce408: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3ce408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ce40c:
    // 0x3ce40c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ce40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ce410:
    // 0x3ce410: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3ce410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3ce414:
    // 0x3ce414: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3ce414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce418:
    // 0x3ce418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ce418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ce41c:
    // 0x3ce41c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce420:
    // 0x3ce420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ce420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ce424:
    // 0x3ce424: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3ce424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3ce428:
    // 0x3ce428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ce428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce42c:
    // 0x3ce42c: 0x144e0003  bne         $v0, $t6, . + 4 + (0x3 << 2)
label_3ce430:
    if (ctx->pc == 0x3CE430u) {
        ctx->pc = 0x3CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE42Cu;
        // 0x3ce430: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE434u;
        goto label_3ce434;
    }
    ctx->pc = 0x3CE42Cu;
    {
        const bool branch_taken_0x3ce42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x3CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE42Cu;
        // 0x3ce430: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce42c) {
            ctx->pc = 0x3CE43Cu;
            goto label_3ce43c;
        }
    }
    ctx->pc = 0x3CE434u;
label_3ce434:
    // 0x3ce434: 0x506d0006  beql        $v1, $t5, . + 4 + (0x6 << 2)
label_3ce438:
    if (ctx->pc == 0x3CE438u) {
        ctx->pc = 0x3CE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE434u;
        // 0x3ce438: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE43Cu;
        goto label_3ce43c;
    }
    ctx->pc = 0x3CE434u;
    {
        const bool branch_taken_0x3ce434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x3ce434) {
            ctx->pc = 0x3CE438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE434u;
            // 0x3ce438: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE450u;
            goto label_3ce450;
        }
    }
    ctx->pc = 0x3CE43Cu;
label_3ce43c:
    // 0x3ce43c: 0x546e0005  bnel        $v1, $t6, . + 4 + (0x5 << 2)
label_3ce440:
    if (ctx->pc == 0x3CE440u) {
        ctx->pc = 0x3CE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE43Cu;
        // 0x3ce440: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE444u;
        goto label_3ce444;
    }
    ctx->pc = 0x3CE43Cu;
    {
        const bool branch_taken_0x3ce43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        if (branch_taken_0x3ce43c) {
            ctx->pc = 0x3CE440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE43Cu;
            // 0x3ce440: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE454u;
            goto label_3ce454;
        }
    }
    ctx->pc = 0x3CE444u;
label_3ce444:
    // 0x3ce444: 0x544d0003  bnel        $v0, $t5, . + 4 + (0x3 << 2)
label_3ce448:
    if (ctx->pc == 0x3CE448u) {
        ctx->pc = 0x3CE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE444u;
        // 0x3ce448: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE44Cu;
        goto label_3ce44c;
    }
    ctx->pc = 0x3CE444u;
    {
        const bool branch_taken_0x3ce444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x3ce444) {
            ctx->pc = 0x3CE448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE444u;
            // 0x3ce448: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE454u;
            goto label_3ce454;
        }
    }
    ctx->pc = 0x3CE44Cu;
label_3ce44c:
    // 0x3ce44c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ce44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ce450:
    // 0x3ce450: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3ce450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_3ce454:
    // 0x3ce454: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ce454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3ce458:
    // 0x3ce458: 0x15510005  bne         $t2, $s1, . + 4 + (0x5 << 2)
label_3ce45c:
    if (ctx->pc == 0x3CE45Cu) {
        ctx->pc = 0x3CE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE458u;
        // 0x3ce45c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE460u;
        goto label_3ce460;
    }
    ctx->pc = 0x3CE458u;
    {
        const bool branch_taken_0x3ce458 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x3CE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE458u;
        // 0x3ce45c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce458) {
            ctx->pc = 0x3CE470u;
            goto label_3ce470;
        }
    }
    ctx->pc = 0x3CE460u;
label_3ce460:
    // 0x3ce460: 0x8cc60028  lw          $a2, 0x28($a2)
    ctx->pc = 0x3ce460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3ce464:
    // 0x3ce464: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ce464u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce468:
    // 0x3ce468: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ce468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce46c:
    // 0x3ce46c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ce46cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce470:
    // 0x3ce470: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_3ce474:
    if (ctx->pc == 0x3CE474u) {
        ctx->pc = 0x3CE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE470u;
        // 0x3ce474: 0xcb1021  addu        $v0, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE478u;
        goto label_3ce478;
    }
    ctx->pc = 0x3CE470u;
    {
        const bool branch_taken_0x3ce470 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE470u;
        // 0x3ce474: 0xcb1021  addu        $v0, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce470) {
            ctx->pc = 0x3CE484u;
            goto label_3ce484;
        }
    }
    ctx->pc = 0x3CE478u;
label_3ce478:
    // 0x3ce478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ce478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce47c:
    // 0x3ce47c: 0x1468ffd6  bne         $v1, $t0, . + 4 + (-0x2A << 2)
label_3ce480:
    if (ctx->pc == 0x3CE480u) {
        ctx->pc = 0x3CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE47Cu;
        // 0x3ce480: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE484u;
        goto label_3ce484;
    }
    ctx->pc = 0x3CE47Cu;
    {
        const bool branch_taken_0x3ce47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x3CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE47Cu;
        // 0x3ce480: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce47c) {
            ctx->pc = 0x3CE3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce3d8;
        }
    }
    ctx->pc = 0x3CE484u;
label_3ce484:
    // 0x3ce484: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x3ce484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_3ce488:
    // 0x3ce488: 0xf4102b  sltu        $v0, $a3, $s4
    ctx->pc = 0x3ce488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3ce48c:
    // 0x3ce48c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_3ce490:
    if (ctx->pc == 0x3CE490u) {
        ctx->pc = 0x3CE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE48Cu;
        // 0x3ce490: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE494u;
        goto label_3ce494;
    }
    ctx->pc = 0x3CE48Cu;
    {
        const bool branch_taken_0x3ce48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE48Cu;
        // 0x3ce490: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce48c) {
            ctx->pc = 0x3CE3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce3a0;
        }
    }
    ctx->pc = 0x3CE494u;
label_3ce494:
    // 0x3ce494: 0x165e0003  bne         $s2, $fp, . + 4 + (0x3 << 2)
label_3ce498:
    if (ctx->pc == 0x3CE498u) {
        ctx->pc = 0x3CE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE494u;
        // 0x3ce498: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE49Cu;
        goto label_3ce49c;
    }
    ctx->pc = 0x3CE494u;
    {
        const bool branch_taken_0x3ce494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x3CE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE494u;
        // 0x3ce498: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce494) {
            ctx->pc = 0x3CE4A4u;
            goto label_3ce4a4;
        }
    }
    ctx->pc = 0x3CE49Cu;
label_3ce49c:
    // 0x3ce49c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3ce49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ce4a0:
    // 0x3ce4a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ce4a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ce4a4:
    // 0x3ce4a4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x3ce4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ce4a8:
    // 0x3ce4a8: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x3ce4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ce4ac:
    // 0x3ce4ac: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ce4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ce4b0:
    // 0x3ce4b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3ce4b4:
    if (ctx->pc == 0x3CE4B4u) {
        ctx->pc = 0x3CE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4B0u;
        // 0x3ce4b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE4B8u;
        goto label_3ce4b8;
    }
    ctx->pc = 0x3CE4B0u;
    {
        const bool branch_taken_0x3ce4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce4b0) {
            ctx->pc = 0x3CE4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE4B0u;
            // 0x3ce4b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE4E0u;
            goto label_3ce4e0;
        }
    }
    ctx->pc = 0x3CE4B8u;
label_3ce4b8:
    // 0x3ce4b8: 0x8e310028  lw          $s1, 0x28($s1)
    ctx->pc = 0x3ce4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ce4bc:
    // 0x3ce4bc: 0x0  nop
    ctx->pc = 0x3ce4bcu;
    // NOP
label_3ce4c0:
    // 0x3ce4c0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3ce4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ce4c4:
    // 0x3ce4c4: 0x0  nop
    ctx->pc = 0x3ce4c4u;
    // NOP
label_3ce4c8:
    // 0x3ce4c8: 0x0  nop
    ctx->pc = 0x3ce4c8u;
    // NOP
label_3ce4cc:
    // 0x3ce4cc: 0x0  nop
    ctx->pc = 0x3ce4ccu;
    // NOP
label_3ce4d0:
    // 0x3ce4d0: 0x0  nop
    ctx->pc = 0x3ce4d0u;
    // NOP
label_3ce4d4:
    // 0x3ce4d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3ce4d8:
    if (ctx->pc == 0x3CE4D8u) {
        ctx->pc = 0x3CE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4D4u;
        // 0x3ce4d8: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE4DCu;
        goto label_3ce4dc;
    }
    ctx->pc = 0x3CE4D4u;
    {
        const bool branch_taken_0x3ce4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce4d4) {
            ctx->pc = 0x3CE4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE4D4u;
            // 0x3ce4d8: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce4c0;
        }
    }
    ctx->pc = 0x3CE4DCu;
label_3ce4dc:
    // 0x3ce4dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ce4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ce4e0:
    // 0x3ce4e0: 0x105e000b  beq         $v0, $fp, . + 4 + (0xB << 2)
label_3ce4e4:
    if (ctx->pc == 0x3CE4E4u) {
        ctx->pc = 0x3CE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4E0u;
        // 0x3ce4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE4E8u;
        goto label_3ce4e8;
    }
    ctx->pc = 0x3CE4E0u;
    {
        const bool branch_taken_0x3ce4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x3CE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4E0u;
        // 0x3ce4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce4e0) {
            ctx->pc = 0x3CE510u;
            goto label_3ce510;
        }
    }
    ctx->pc = 0x3CE4E8u;
label_3ce4e8:
    // 0x3ce4e8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3ce4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3ce4ec:
    // 0x3ce4ec: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3ce4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ce4f0:
    // 0x3ce4f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3ce4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3ce4f4:
    // 0x3ce4f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ce4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3ce4f8:
    // 0x3ce4f8: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x3ce4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3ce4fc:
    // 0x3ce4fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ce500:
    if (ctx->pc == 0x3CE500u) {
        ctx->pc = 0x3CE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4FCu;
        // 0x3ce500: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE504u;
        goto label_3ce504;
    }
    ctx->pc = 0x3CE4FCu;
    {
        const bool branch_taken_0x3ce4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4FCu;
        // 0x3ce500: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce4fc) {
            ctx->pc = 0x3CE510u;
            goto label_3ce510;
        }
    }
    ctx->pc = 0x3CE504u;
label_3ce504:
    // 0x3ce504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ce504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ce508:
    // 0x3ce508: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
label_3ce50c:
    if (ctx->pc == 0x3CE50Cu) {
        ctx->pc = 0x3CE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE508u;
        // 0x3ce50c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE510u;
        goto label_3ce510;
    }
    ctx->pc = 0x3CE508u;
    {
        const bool branch_taken_0x3ce508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ce508) {
            ctx->pc = 0x3CE50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE508u;
            // 0x3ce50c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce4f8;
        }
    }
    ctx->pc = 0x3CE510u;
label_3ce510:
    // 0x3ce510: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ce510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ce514:
    // 0x3ce514: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_3ce518:
    if (ctx->pc == 0x3CE518u) {
        ctx->pc = 0x3CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE514u;
        // 0x3ce518: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE51Cu;
        goto label_3ce51c;
    }
    ctx->pc = 0x3CE514u;
    {
        const bool branch_taken_0x3ce514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE514u;
        // 0x3ce518: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce514) {
            ctx->pc = 0x3CE568u;
            goto label_3ce568;
        }
    }
    ctx->pc = 0x3CE51Cu;
label_3ce51c:
    // 0x3ce51c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3ce51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3ce520:
    // 0x3ce520: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ce520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ce524:
    // 0x3ce524: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3ce524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3ce528:
    // 0x3ce528: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3ce528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3ce52c:
    // 0x3ce52c: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x3ce52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_3ce530:
    // 0x3ce530: 0x7fb90040  sq          $t9, 0x40($sp)
    ctx->pc = 0x3ce530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 25));
label_3ce534:
    // 0x3ce534: 0x40f809  jalr        $v0
label_3ce538:
    if (ctx->pc == 0x3CE538u) {
        ctx->pc = 0x3CE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE534u;
        // 0x3ce538: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE53Cu;
        goto label_3ce53c;
    }
    ctx->pc = 0x3CE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE53Cu);
        ctx->pc = 0x3CE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE534u;
        // 0x3ce538: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE534u, 0x3CE53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE53Cu;
label_3ce53c:
    // 0x3ce53c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ce53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ce540:
    // 0x3ce540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ce540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ce544:
    // 0x3ce544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ce544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ce548:
    // 0x3ce548: 0xc0bb7e6  jal         func_2EDF98
label_3ce54c:
    if (ctx->pc == 0x3CE54Cu) {
        ctx->pc = 0x3CE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE548u;
        // 0x3ce54c: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE550u;
        goto label_3ce550;
    }
    ctx->pc = 0x3CE548u;
    SET_GPR_U32(ctx, 31, 0x3CE550u);
    ctx->pc = 0x3CE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE548u;
    // 0x3ce54c: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CE548u, 0x3CE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE550u;
label_3ce550:
    // 0x3ce550: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3ce550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3ce554:
    // 0x3ce554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ce554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce558:
    // 0x3ce558: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x3ce558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_3ce55c:
    // 0x3ce55c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3ce55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ce560:
    // 0x3ce560: 0x7bb90040  lq          $t9, 0x40($sp)
    ctx->pc = 0x3ce560u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ce564:
    // 0x3ce564: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3ce564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3ce568:
    // 0x3ce568: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x3ce568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ce56c:
    // 0x3ce56c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ce56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3ce570:
    // 0x3ce570: 0xac590000  sw          $t9, 0x0($v0)
    ctx->pc = 0x3ce570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 25));
label_3ce574:
    // 0x3ce574: 0xa0750020  sb          $s5, 0x20($v1)
    ctx->pc = 0x3ce574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 21));
label_3ce578:
    // 0x3ce578: 0x8fb50028  lw          $s5, 0x28($sp)
    ctx->pc = 0x3ce578u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3ce57c:
    // 0x3ce57c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3ce57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3ce580:
    // 0x3ce580: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3ce580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3ce584:
    // 0x3ce584: 0x2ea30003  sltiu       $v1, $s5, 0x3
    ctx->pc = 0x3ce584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3ce588:
    // 0x3ce588: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x3ce588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3ce58c:
    // 0x3ce58c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3ce58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3ce590:
    // 0x3ce590: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ce590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ce594:
    // 0x3ce594: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
label_3ce598:
    if (ctx->pc == 0x3CE598u) {
        ctx->pc = 0x3CE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE594u;
        // 0x3ce598: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE59Cu;
        goto label_3ce59c;
    }
    ctx->pc = 0x3CE594u;
    {
        const bool branch_taken_0x3ce594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE594u;
        // 0x3ce598: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce594) {
            ctx->pc = 0x3CE340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce340;
        }
    }
    ctx->pc = 0x3CE59Cu;
label_3ce59c:
    // 0x3ce59c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ce59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ce5a0:
    // 0x3ce5a0: 0x8fb90024  lw          $t9, 0x24($sp)
    ctx->pc = 0x3ce5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3ce5a4:
    // 0x3ce5a4: 0x322102b  sltu        $v0, $t9, $v0
    ctx->pc = 0x3ce5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ce5a8:
    // 0x3ce5a8: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
label_3ce5ac:
    if (ctx->pc == 0x3CE5ACu) {
        ctx->pc = 0x3CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5A8u;
        // 0x3ce5ac: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE5B0u;
        goto label_3ce5b0;
    }
    ctx->pc = 0x3CE5A8u;
    {
        const bool branch_taken_0x3ce5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5A8u;
        // 0x3ce5ac: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce5a8) {
            ctx->pc = 0x3CE2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce2e0;
        }
    }
    ctx->pc = 0x3CE5B0u;
label_3ce5b0:
    // 0x3ce5b0: 0xaed40004  sw          $s4, 0x4($s6)
    ctx->pc = 0x3ce5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 20));
label_3ce5b4:
    // 0x3ce5b4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3ce5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ce5b8:
    // 0x3ce5b8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3ce5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ce5bc:
    // 0x3ce5bc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3ce5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ce5c0:
    // 0x3ce5c0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3ce5c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ce5c4:
    // 0x3ce5c4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3ce5c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ce5c8:
    // 0x3ce5c8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3ce5c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ce5cc:
    // 0x3ce5cc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3ce5ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ce5d0:
    // 0x3ce5d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ce5d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ce5d4:
    // 0x3ce5d4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3ce5d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ce5d8:
    // 0x3ce5d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ce5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ce5dc:
    // 0x3ce5dc: 0x3e00008  jr          $ra
label_3ce5e0:
    if (ctx->pc == 0x3CE5E0u) {
        ctx->pc = 0x3CE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5DCu;
        // 0x3ce5e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE5E4u;
        goto label_3ce5e4;
    }
    ctx->pc = 0x3CE5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5DCu;
        // 0x3ce5e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE5E4u;
label_3ce5e4:
    // 0x3ce5e4: 0x0  nop
    ctx->pc = 0x3ce5e4u;
    // NOP
    ctx->pc = 0x3ce5e8u;
}
