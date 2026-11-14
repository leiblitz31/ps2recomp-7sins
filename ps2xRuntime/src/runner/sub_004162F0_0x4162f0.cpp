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

// Function: sub_004162F0
// Address: 0x4162f0 - 0x4165d8
void sub_004162F0_0x4162f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004162F0_0x4162f0");
#endif

    switch (ctx->pc) {
        case 0x4162f0u: goto label_4162f0;
        case 0x4162f4u: goto label_4162f4;
        case 0x4162f8u: goto label_4162f8;
        case 0x4162fcu: goto label_4162fc;
        case 0x416300u: goto label_416300;
        case 0x416304u: goto label_416304;
        case 0x416308u: goto label_416308;
        case 0x41630cu: goto label_41630c;
        case 0x416310u: goto label_416310;
        case 0x416314u: goto label_416314;
        case 0x416318u: goto label_416318;
        case 0x41631cu: goto label_41631c;
        case 0x416320u: goto label_416320;
        case 0x416324u: goto label_416324;
        case 0x416328u: goto label_416328;
        case 0x41632cu: goto label_41632c;
        case 0x416330u: goto label_416330;
        case 0x416334u: goto label_416334;
        case 0x416338u: goto label_416338;
        case 0x41633cu: goto label_41633c;
        case 0x416340u: goto label_416340;
        case 0x416344u: goto label_416344;
        case 0x416348u: goto label_416348;
        case 0x41634cu: goto label_41634c;
        case 0x416350u: goto label_416350;
        case 0x416354u: goto label_416354;
        case 0x416358u: goto label_416358;
        case 0x41635cu: goto label_41635c;
        case 0x416360u: goto label_416360;
        case 0x416364u: goto label_416364;
        case 0x416368u: goto label_416368;
        case 0x41636cu: goto label_41636c;
        case 0x416370u: goto label_416370;
        case 0x416374u: goto label_416374;
        case 0x416378u: goto label_416378;
        case 0x41637cu: goto label_41637c;
        case 0x416380u: goto label_416380;
        case 0x416384u: goto label_416384;
        case 0x416388u: goto label_416388;
        case 0x41638cu: goto label_41638c;
        case 0x416390u: goto label_416390;
        case 0x416394u: goto label_416394;
        case 0x416398u: goto label_416398;
        case 0x41639cu: goto label_41639c;
        case 0x4163a0u: goto label_4163a0;
        case 0x4163a4u: goto label_4163a4;
        case 0x4163a8u: goto label_4163a8;
        case 0x4163acu: goto label_4163ac;
        case 0x4163b0u: goto label_4163b0;
        case 0x4163b4u: goto label_4163b4;
        case 0x4163b8u: goto label_4163b8;
        case 0x4163bcu: goto label_4163bc;
        case 0x4163c0u: goto label_4163c0;
        case 0x4163c4u: goto label_4163c4;
        case 0x4163c8u: goto label_4163c8;
        case 0x4163ccu: goto label_4163cc;
        case 0x4163d0u: goto label_4163d0;
        case 0x4163d4u: goto label_4163d4;
        case 0x4163d8u: goto label_4163d8;
        case 0x4163dcu: goto label_4163dc;
        case 0x4163e0u: goto label_4163e0;
        case 0x4163e4u: goto label_4163e4;
        case 0x4163e8u: goto label_4163e8;
        case 0x4163ecu: goto label_4163ec;
        case 0x4163f0u: goto label_4163f0;
        case 0x4163f4u: goto label_4163f4;
        case 0x4163f8u: goto label_4163f8;
        case 0x4163fcu: goto label_4163fc;
        case 0x416400u: goto label_416400;
        case 0x416404u: goto label_416404;
        case 0x416408u: goto label_416408;
        case 0x41640cu: goto label_41640c;
        case 0x416410u: goto label_416410;
        case 0x416414u: goto label_416414;
        case 0x416418u: goto label_416418;
        case 0x41641cu: goto label_41641c;
        case 0x416420u: goto label_416420;
        case 0x416424u: goto label_416424;
        case 0x416428u: goto label_416428;
        case 0x41642cu: goto label_41642c;
        case 0x416430u: goto label_416430;
        case 0x416434u: goto label_416434;
        case 0x416438u: goto label_416438;
        case 0x41643cu: goto label_41643c;
        case 0x416440u: goto label_416440;
        case 0x416444u: goto label_416444;
        case 0x416448u: goto label_416448;
        case 0x41644cu: goto label_41644c;
        case 0x416450u: goto label_416450;
        case 0x416454u: goto label_416454;
        case 0x416458u: goto label_416458;
        case 0x41645cu: goto label_41645c;
        case 0x416460u: goto label_416460;
        case 0x416464u: goto label_416464;
        case 0x416468u: goto label_416468;
        case 0x41646cu: goto label_41646c;
        case 0x416470u: goto label_416470;
        case 0x416474u: goto label_416474;
        case 0x416478u: goto label_416478;
        case 0x41647cu: goto label_41647c;
        case 0x416480u: goto label_416480;
        case 0x416484u: goto label_416484;
        case 0x416488u: goto label_416488;
        case 0x41648cu: goto label_41648c;
        case 0x416490u: goto label_416490;
        case 0x416494u: goto label_416494;
        case 0x416498u: goto label_416498;
        case 0x41649cu: goto label_41649c;
        case 0x4164a0u: goto label_4164a0;
        case 0x4164a4u: goto label_4164a4;
        case 0x4164a8u: goto label_4164a8;
        case 0x4164acu: goto label_4164ac;
        case 0x4164b0u: goto label_4164b0;
        case 0x4164b4u: goto label_4164b4;
        case 0x4164b8u: goto label_4164b8;
        case 0x4164bcu: goto label_4164bc;
        case 0x4164c0u: goto label_4164c0;
        case 0x4164c4u: goto label_4164c4;
        case 0x4164c8u: goto label_4164c8;
        case 0x4164ccu: goto label_4164cc;
        case 0x4164d0u: goto label_4164d0;
        case 0x4164d4u: goto label_4164d4;
        case 0x4164d8u: goto label_4164d8;
        case 0x4164dcu: goto label_4164dc;
        case 0x4164e0u: goto label_4164e0;
        case 0x4164e4u: goto label_4164e4;
        case 0x4164e8u: goto label_4164e8;
        case 0x4164ecu: goto label_4164ec;
        case 0x4164f0u: goto label_4164f0;
        case 0x4164f4u: goto label_4164f4;
        case 0x4164f8u: goto label_4164f8;
        case 0x4164fcu: goto label_4164fc;
        case 0x416500u: goto label_416500;
        case 0x416504u: goto label_416504;
        case 0x416508u: goto label_416508;
        case 0x41650cu: goto label_41650c;
        case 0x416510u: goto label_416510;
        case 0x416514u: goto label_416514;
        case 0x416518u: goto label_416518;
        case 0x41651cu: goto label_41651c;
        case 0x416520u: goto label_416520;
        case 0x416524u: goto label_416524;
        case 0x416528u: goto label_416528;
        case 0x41652cu: goto label_41652c;
        case 0x416530u: goto label_416530;
        case 0x416534u: goto label_416534;
        case 0x416538u: goto label_416538;
        case 0x41653cu: goto label_41653c;
        case 0x416540u: goto label_416540;
        case 0x416544u: goto label_416544;
        case 0x416548u: goto label_416548;
        case 0x41654cu: goto label_41654c;
        case 0x416550u: goto label_416550;
        case 0x416554u: goto label_416554;
        case 0x416558u: goto label_416558;
        case 0x41655cu: goto label_41655c;
        case 0x416560u: goto label_416560;
        case 0x416564u: goto label_416564;
        case 0x416568u: goto label_416568;
        case 0x41656cu: goto label_41656c;
        case 0x416570u: goto label_416570;
        case 0x416574u: goto label_416574;
        case 0x416578u: goto label_416578;
        case 0x41657cu: goto label_41657c;
        case 0x416580u: goto label_416580;
        case 0x416584u: goto label_416584;
        case 0x416588u: goto label_416588;
        case 0x41658cu: goto label_41658c;
        case 0x416590u: goto label_416590;
        case 0x416594u: goto label_416594;
        case 0x416598u: goto label_416598;
        case 0x41659cu: goto label_41659c;
        case 0x4165a0u: goto label_4165a0;
        case 0x4165a4u: goto label_4165a4;
        case 0x4165a8u: goto label_4165a8;
        case 0x4165acu: goto label_4165ac;
        case 0x4165b0u: goto label_4165b0;
        case 0x4165b4u: goto label_4165b4;
        case 0x4165b8u: goto label_4165b8;
        case 0x4165bcu: goto label_4165bc;
        case 0x4165c0u: goto label_4165c0;
        case 0x4165c4u: goto label_4165c4;
        case 0x4165c8u: goto label_4165c8;
        case 0x4165ccu: goto label_4165cc;
        case 0x4165d0u: goto label_4165d0;
        case 0x4165d4u: goto label_4165d4;
        default: break;
    }

    ctx->pc = 0x4162f0u;

label_4162f0:
    // 0x4162f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4162f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4162f4:
    // 0x4162f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4162f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4162f8:
    // 0x4162f8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4162f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_4162fc:
    // 0x4162fc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x4162fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_416300:
    // 0x416300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x416300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416304:
    // 0x416304: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x416304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_416308:
    // 0x416308: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x416308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41630c:
    // 0x41630c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x41630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_416310:
    // 0x416310: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x416310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_416314:
    // 0x416314: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x416314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_416318:
    // 0x416318: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x416318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_41631c:
    // 0x41631c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x41631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_416320:
    // 0x416320: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x416320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_416324:
    // 0x416324: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x416324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_416328:
    // 0x416328: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x416328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41632c:
    // 0x41632c: 0xc103322  jal         func_40CC88
label_416330:
    if (ctx->pc == 0x416330u) {
        ctx->pc = 0x416330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41632Cu;
        // 0x416330: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416334u;
        goto label_416334;
    }
    ctx->pc = 0x41632Cu;
    SET_GPR_U32(ctx, 31, 0x416334u);
    ctx->pc = 0x416330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41632Cu;
    // 0x416330: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x41632Cu, 0x416334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416334u;
label_416334:
    // 0x416334: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_416338:
    if (ctx->pc == 0x416338u) {
        ctx->pc = 0x416338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416334u;
        // 0x416338: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41633Cu;
        goto label_41633c;
    }
    ctx->pc = 0x416334u;
    {
        const bool branch_taken_0x416334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416334u;
        // 0x416338: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416334) {
            ctx->pc = 0x4165A0u;
            goto label_4165a0;
        }
    }
    ctx->pc = 0x41633Cu;
label_41633c:
    // 0x41633c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x41633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_416340:
    // 0x416340: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x416340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_416344:
    // 0x416344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x416344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_416348:
    // 0x416348: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x416348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_41634c:
    // 0x41634c: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_416350:
    if (ctx->pc == 0x416350u) {
        ctx->pc = 0x416350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41634Cu;
        // 0x416350: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416354u;
        goto label_416354;
    }
    ctx->pc = 0x41634Cu;
    {
        const bool branch_taken_0x41634c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x416350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41634Cu;
        // 0x416350: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41634c) {
            ctx->pc = 0x41657Cu;
            goto label_41657c;
        }
    }
    ctx->pc = 0x416354u;
label_416354:
    // 0x416354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416358:
    // 0x416358: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x416358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_41635c:
    // 0x41635c: 0xc10480a  jal         func_412028
label_416360:
    if (ctx->pc == 0x416360u) {
        ctx->pc = 0x416360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41635Cu;
        // 0x416360: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416364u;
        goto label_416364;
    }
    ctx->pc = 0x41635Cu;
    SET_GPR_U32(ctx, 31, 0x416364u);
    ctx->pc = 0x416360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41635Cu;
    // 0x416360: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41635Cu, 0x416364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416364u;
label_416364:
    // 0x416364: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x416364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_416368:
    // 0x416368: 0x1443008e  bne         $v0, $v1, . + 4 + (0x8E << 2)
label_41636c:
    if (ctx->pc == 0x41636Cu) {
        ctx->pc = 0x41636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416368u;
        // 0x41636c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416370u;
        goto label_416370;
    }
    ctx->pc = 0x416368u;
    {
        const bool branch_taken_0x416368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416368u;
        // 0x41636c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416368) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x416370u;
label_416370:
    // 0x416370: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x416370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_416374:
    // 0x416374: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x416374u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
label_416378:
    // 0x416378: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x416378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
label_41637c:
    // 0x41637c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x41637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_416380:
    // 0x416380: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x416380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_416384:
    // 0x416384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x416384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416388:
    // 0x416388: 0xc106494  jal         func_419250
label_41638c:
    if (ctx->pc == 0x41638Cu) {
        ctx->pc = 0x41638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416388u;
        // 0x41638c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416390u;
        goto label_416390;
    }
    ctx->pc = 0x416388u;
    SET_GPR_U32(ctx, 31, 0x416390u);
    ctx->pc = 0x41638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416388u;
    // 0x41638c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419250u, 0x416388u, 0x416390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416390u;
label_416390:
    // 0x416390: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x416390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_416394:
    // 0x416394: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x416394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_416398:
    // 0x416398: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41639c:
    if (ctx->pc == 0x41639Cu) {
        ctx->pc = 0x41639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416398u;
        // 0x41639c: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4163A0u;
        goto label_4163a0;
    }
    ctx->pc = 0x416398u;
    {
        const bool branch_taken_0x416398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416398u;
        // 0x41639c: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416398) {
            ctx->pc = 0x4163B4u;
            goto label_4163b4;
        }
    }
    ctx->pc = 0x4163A0u;
label_4163a0:
    // 0x4163a0: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x4163a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_4163a4:
    // 0x4163a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4163a8:
    if (ctx->pc == 0x4163A8u) {
        ctx->pc = 0x4163ACu;
        goto label_4163ac;
    }
    ctx->pc = 0x4163A4u;
    {
        const bool branch_taken_0x4163a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4163a4) {
            ctx->pc = 0x4163B4u;
            goto label_4163b4;
        }
    }
    ctx->pc = 0x4163ACu;
label_4163ac:
    // 0x4163ac: 0x1482007d  bne         $a0, $v0, . + 4 + (0x7D << 2)
label_4163b0:
    if (ctx->pc == 0x4163B0u) {
        ctx->pc = 0x4163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163ACu;
        // 0x4163b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4163B4u;
        goto label_4163b4;
    }
    ctx->pc = 0x4163ACu;
    {
        const bool branch_taken_0x4163ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163ACu;
        // 0x4163b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4163ac) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x4163B4u;
label_4163b4:
    // 0x4163b4: 0xc1081b0  jal         func_4206C0
label_4163b8:
    if (ctx->pc == 0x4163B8u) {
        ctx->pc = 0x4163BCu;
        goto label_4163bc;
    }
    ctx->pc = 0x4163B4u;
    SET_GPR_U32(ctx, 31, 0x4163BCu);
    ctx->pc = 0x4206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4206C0u, 0x4163B4u, 0x4163BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4163BCu;
label_4163bc:
    // 0x4163bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4163bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4163c0:
    // 0x4163c0: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
label_4163c4:
    if (ctx->pc == 0x4163C4u) {
        ctx->pc = 0x4163C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163C0u;
        // 0x4163c4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4163C8u;
        goto label_4163c8;
    }
    ctx->pc = 0x4163C0u;
    {
        const bool branch_taken_0x4163c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4163C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163C0u;
        // 0x4163c4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4163c0) {
            ctx->pc = 0x4165A0u;
            goto label_4165a0;
        }
    }
    ctx->pc = 0x4163C8u;
label_4163c8:
    // 0x4163c8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4163c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4163cc:
    // 0x4163cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4163ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4163d0:
    // 0x4163d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4163d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4163d4:
    // 0x4163d4: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
label_4163d8:
    if (ctx->pc == 0x4163D8u) {
        ctx->pc = 0x4163D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163D4u;
        // 0x4163d8: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4163DCu;
        goto label_4163dc;
    }
    ctx->pc = 0x4163D4u;
    {
        const bool branch_taken_0x4163d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4163D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163D4u;
        // 0x4163d8: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4163d4) {
            ctx->pc = 0x4164ACu;
            goto label_4164ac;
        }
    }
    ctx->pc = 0x4163DCu;
label_4163dc:
    // 0x4163dc: 0x3c12fffc  lui         $s2, 0xFFFC
    ctx->pc = 0x4163dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65532 << 16));
label_4163e0:
    // 0x4163e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4163e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4163e4:
    // 0x4163e4: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x4163e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4163e8:
    // 0x4163e8: 0x3652b000  ori         $s2, $s2, 0xB000
    ctx->pc = 0x4163e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45056);
label_4163ec:
    // 0x4163ec: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x4163ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
label_4163f0:
    // 0x4163f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4163f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4163f4:
    // 0x4163f4: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x4163f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_4163f8:
    // 0x4163f8: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x4163f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_4163fc:
    // 0x4163fc: 0x0  nop
    ctx->pc = 0x4163fcu;
    // NOP
label_416400:
    // 0x416400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416404:
    // 0x416404: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x416404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_416408:
    // 0x416408: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x416408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41640c:
    // 0x41640c: 0xc103322  jal         func_40CC88
label_416410:
    if (ctx->pc == 0x416410u) {
        ctx->pc = 0x416410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41640Cu;
        // 0x416410: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416414u;
        goto label_416414;
    }
    ctx->pc = 0x41640Cu;
    SET_GPR_U32(ctx, 31, 0x416414u);
    ctx->pc = 0x416410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41640Cu;
    // 0x416410: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x41640Cu, 0x416414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416414u;
label_416414:
    // 0x416414: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_416418:
    if (ctx->pc == 0x416418u) {
        ctx->pc = 0x416418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416414u;
        // 0x416418: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41641Cu;
        goto label_41641c;
    }
    ctx->pc = 0x416414u;
    {
        const bool branch_taken_0x416414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416414u;
        // 0x416418: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416414) {
            ctx->pc = 0x4164ECu;
            goto label_4164ec;
        }
    }
    ctx->pc = 0x41641Cu;
label_41641c:
    // 0x41641c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_416420:
    // 0x416420: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x416420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_416424:
    // 0x416424: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_416428:
    if (ctx->pc == 0x416428u) {
        ctx->pc = 0x416428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416424u;
        // 0x416428: 0x8ee200b0  lw          $v0, 0xB0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41642Cu;
        goto label_41642c;
    }
    ctx->pc = 0x416424u;
    {
        const bool branch_taken_0x416424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x416424) {
            ctx->pc = 0x416428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416424u;
            // 0x416428: 0x8ee200b0  lw          $v0, 0xB0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416460u;
            goto label_416460;
        }
    }
    ctx->pc = 0x41642Cu;
label_41642c:
    // 0x41642c: 0x26c569c8  addiu       $a1, $s6, 0x69C8
    ctx->pc = 0x41642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 27080));
label_416430:
    // 0x416430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416434:
    // 0x416434: 0xc1082d8  jal         func_420B60
label_416438:
    if (ctx->pc == 0x416438u) {
        ctx->pc = 0x416438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416434u;
        // 0x416438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41643Cu;
        goto label_41643c;
    }
    ctx->pc = 0x416434u;
    SET_GPR_U32(ctx, 31, 0x41643Cu);
    ctx->pc = 0x416438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416434u;
    // 0x416438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416434u, 0x41643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41643Cu;
label_41643c:
    // 0x41643c: 0xc1081de  jal         func_420778
label_416440:
    if (ctx->pc == 0x416440u) {
        ctx->pc = 0x416440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41643Cu;
        // 0x416440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416444u;
        goto label_416444;
    }
    ctx->pc = 0x41643Cu;
    SET_GPR_U32(ctx, 31, 0x416444u);
    ctx->pc = 0x416440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41643Cu;
    // 0x416440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x41643Cu, 0x416444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416444u;
label_416444:
    // 0x416444: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x416444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_416448:
    // 0x416448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x416448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41644c:
    // 0x41644c: 0xc1035f6  jal         func_40D7D8
label_416450:
    if (ctx->pc == 0x416450u) {
        ctx->pc = 0x416450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41644Cu;
        // 0x416450: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x416454u;
        goto label_416454;
    }
    ctx->pc = 0x41644Cu;
    SET_GPR_U32(ctx, 31, 0x416454u);
    ctx->pc = 0x416450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41644Cu;
    // 0x416450: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41644Cu, 0x416454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416454u;
label_416454:
    // 0x416454: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x416454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_416458:
    // 0x416458: 0x1000004f  b           . + 4 + (0x4F << 2)
label_41645c:
    if (ctx->pc == 0x41645Cu) {
        ctx->pc = 0x41645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416458u;
        // 0x41645c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416460u;
        goto label_416460;
    }
    ctx->pc = 0x416458u;
    {
        const bool branch_taken_0x416458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416458u;
        // 0x41645c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416458) {
            ctx->pc = 0x416598u;
            goto label_416598;
        }
    }
    ctx->pc = 0x416460u;
label_416460:
    // 0x416460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416464:
    // 0x416464: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x416464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_416468:
    // 0x416468: 0x40f809  jalr        $v0
label_41646c:
    if (ctx->pc == 0x41646Cu) {
        ctx->pc = 0x41646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416468u;
        // 0x41646c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416470u;
        goto label_416470;
    }
    ctx->pc = 0x416468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416470u);
        ctx->pc = 0x41646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416468u;
        // 0x41646c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416468u, 0x416470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416470u;
label_416470:
    // 0x416470: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_416474:
    if (ctx->pc == 0x416474u) {
        ctx->pc = 0x416474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416470u;
        // 0x416474: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416478u;
        goto label_416478;
    }
    ctx->pc = 0x416470u;
    {
        const bool branch_taken_0x416470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416470u;
        // 0x416474: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416470) {
            ctx->pc = 0x416510u;
            goto label_416510;
        }
    }
    ctx->pc = 0x416478u;
label_416478:
    // 0x416478: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
label_41647c:
    if (ctx->pc == 0x41647Cu) {
        ctx->pc = 0x41647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416478u;
        // 0x41647c: 0x26a4ca10  addiu       $a0, $s5, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416480u;
        goto label_416480;
    }
    ctx->pc = 0x416478u;
    {
        const bool branch_taken_0x416478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416478u;
        // 0x41647c: 0x26a4ca10  addiu       $a0, $s5, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416478) {
            ctx->pc = 0x416534u;
            goto label_416534;
        }
    }
    ctx->pc = 0x416480u;
label_416480:
    // 0x416480: 0xc1049e2  jal         func_412788
label_416484:
    if (ctx->pc == 0x416484u) {
        ctx->pc = 0x416484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416480u;
        // 0x416484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416488u;
        goto label_416488;
    }
    ctx->pc = 0x416480u;
    SET_GPR_U32(ctx, 31, 0x416488u);
    ctx->pc = 0x416484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416480u;
    // 0x416484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x416480u, 0x416488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416488u;
label_416488:
    // 0x416488: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_41648c:
    if (ctx->pc == 0x41648Cu) {
        ctx->pc = 0x41648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416488u;
        // 0x41648c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416490u;
        goto label_416490;
    }
    ctx->pc = 0x416488u;
    {
        const bool branch_taken_0x416488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416488u;
        // 0x41648c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416488) {
            ctx->pc = 0x416558u;
            goto label_416558;
        }
    }
    ctx->pc = 0x416490u;
label_416490:
    // 0x416490: 0xc10826c  jal         func_4209B0
label_416494:
    if (ctx->pc == 0x416494u) {
        ctx->pc = 0x416494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416490u;
        // 0x416494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416498u;
        goto label_416498;
    }
    ctx->pc = 0x416490u;
    SET_GPR_U32(ctx, 31, 0x416498u);
    ctx->pc = 0x416494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416490u;
    // 0x416494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x416490u, 0x416498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416498u;
label_416498:
    // 0x416498: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x416498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_41649c:
    // 0x41649c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4164a0:
    // 0x4164a0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4164a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4164a4:
    // 0x4164a4: 0x1454ffd6  bne         $v0, $s4, . + 4 + (-0x2A << 2)
label_4164a8:
    if (ctx->pc == 0x4164A8u) {
        ctx->pc = 0x4164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164A4u;
        // 0x4164a8: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164ACu;
        goto label_4164ac;
    }
    ctx->pc = 0x4164A4u;
    {
        const bool branch_taken_0x4164a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x4164A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164A4u;
        // 0x4164a8: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4164a4) {
            ctx->pc = 0x416400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416400;
        }
    }
    ctx->pc = 0x4164ACu;
label_4164ac:
    // 0x4164ac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4164acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4164b0:
    // 0x4164b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4164b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4164b4:
    // 0x4164b4: 0x2484ca28  addiu       $a0, $a0, -0x35D8
    ctx->pc = 0x4164b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
label_4164b8:
    // 0x4164b8: 0xc1049e2  jal         func_412788
label_4164bc:
    if (ctx->pc == 0x4164BCu) {
        ctx->pc = 0x4164BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164B8u;
        // 0x4164bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164C0u;
        goto label_4164c0;
    }
    ctx->pc = 0x4164B8u;
    SET_GPR_U32(ctx, 31, 0x4164C0u);
    ctx->pc = 0x4164BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4164B8u;
    // 0x4164bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x4164B8u, 0x4164C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4164C0u;
label_4164c0:
    // 0x4164c0: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_4164c4:
    if (ctx->pc == 0x4164C4u) {
        ctx->pc = 0x4164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164C0u;
        // 0x4164c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164C8u;
        goto label_4164c8;
    }
    ctx->pc = 0x4164C0u;
    {
        const bool branch_taken_0x4164c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164C0u;
        // 0x4164c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4164c0) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x4164C8u;
label_4164c8:
    // 0x4164c8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x4164c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_4164cc:
    // 0x4164cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4164ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4164d0:
    // 0x4164d0: 0x24a569c8  addiu       $a1, $a1, 0x69C8
    ctx->pc = 0x4164d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27080));
label_4164d4:
    // 0x4164d4: 0xc1082d8  jal         func_420B60
label_4164d8:
    if (ctx->pc == 0x4164D8u) {
        ctx->pc = 0x4164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164D4u;
        // 0x4164d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164DCu;
        goto label_4164dc;
    }
    ctx->pc = 0x4164D4u;
    SET_GPR_U32(ctx, 31, 0x4164DCu);
    ctx->pc = 0x4164D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4164D4u;
    // 0x4164d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x4164D4u, 0x4164DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4164DCu;
label_4164dc:
    // 0x4164dc: 0xc1081de  jal         func_420778
label_4164e0:
    if (ctx->pc == 0x4164E0u) {
        ctx->pc = 0x4164E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164DCu;
        // 0x4164e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164E4u;
        goto label_4164e4;
    }
    ctx->pc = 0x4164DCu;
    SET_GPR_U32(ctx, 31, 0x4164E4u);
    ctx->pc = 0x4164E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4164DCu;
    // 0x4164e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x4164DCu, 0x4164E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4164E4u;
label_4164e4:
    // 0x4164e4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4164e8:
    if (ctx->pc == 0x4164E8u) {
        ctx->pc = 0x4164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164E4u;
        // 0x4164e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4164ECu;
        goto label_4164ec;
    }
    ctx->pc = 0x4164E4u;
    {
        const bool branch_taken_0x4164e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164E4u;
        // 0x4164e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4164e4) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x4164ECu;
label_4164ec:
    // 0x4164ec: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x4164ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_4164f0:
    // 0x4164f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4164f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4164f4:
    // 0x4164f4: 0x24a569c8  addiu       $a1, $a1, 0x69C8
    ctx->pc = 0x4164f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27080));
label_4164f8:
    // 0x4164f8: 0xc1082d8  jal         func_420B60
label_4164fc:
    if (ctx->pc == 0x4164FCu) {
        ctx->pc = 0x4164FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164F8u;
        // 0x4164fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416500u;
        goto label_416500;
    }
    ctx->pc = 0x4164F8u;
    SET_GPR_U32(ctx, 31, 0x416500u);
    ctx->pc = 0x4164FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4164F8u;
    // 0x4164fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x4164F8u, 0x416500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416500u;
label_416500:
    // 0x416500: 0xc1081de  jal         func_420778
label_416504:
    if (ctx->pc == 0x416504u) {
        ctx->pc = 0x416504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416500u;
        // 0x416504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416508u;
        goto label_416508;
    }
    ctx->pc = 0x416500u;
    SET_GPR_U32(ctx, 31, 0x416508u);
    ctx->pc = 0x416504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416500u;
    // 0x416504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x416500u, 0x416508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416508u;
label_416508:
    // 0x416508: 0x10000026  b           . + 4 + (0x26 << 2)
label_41650c:
    if (ctx->pc == 0x41650Cu) {
        ctx->pc = 0x41650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416508u;
        // 0x41650c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416510u;
        goto label_416510;
    }
    ctx->pc = 0x416508u;
    {
        const bool branch_taken_0x416508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416508u;
        // 0x41650c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416508) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x416510u;
label_416510:
    // 0x416510: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_416514:
    // 0x416514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416518:
    // 0x416518: 0x24a569c8  addiu       $a1, $a1, 0x69C8
    ctx->pc = 0x416518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27080));
label_41651c:
    // 0x41651c: 0xc1082d8  jal         func_420B60
label_416520:
    if (ctx->pc == 0x416520u) {
        ctx->pc = 0x416520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41651Cu;
        // 0x416520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416524u;
        goto label_416524;
    }
    ctx->pc = 0x41651Cu;
    SET_GPR_U32(ctx, 31, 0x416524u);
    ctx->pc = 0x416520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41651Cu;
    // 0x416520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x41651Cu, 0x416524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416524u;
label_416524:
    // 0x416524: 0xc1081de  jal         func_420778
label_416528:
    if (ctx->pc == 0x416528u) {
        ctx->pc = 0x416528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416524u;
        // 0x416528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41652Cu;
        goto label_41652c;
    }
    ctx->pc = 0x416524u;
    SET_GPR_U32(ctx, 31, 0x41652Cu);
    ctx->pc = 0x416528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416524u;
    // 0x416528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x416524u, 0x41652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41652Cu;
label_41652c:
    // 0x41652c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_416530:
    if (ctx->pc == 0x416530u) {
        ctx->pc = 0x416530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41652Cu;
        // 0x416530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416534u;
        goto label_416534;
    }
    ctx->pc = 0x41652Cu;
    {
        const bool branch_taken_0x41652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41652Cu;
        // 0x416530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41652c) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x416534u;
label_416534:
    // 0x416534: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_416538:
    // 0x416538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41653c:
    // 0x41653c: 0x24a569c8  addiu       $a1, $a1, 0x69C8
    ctx->pc = 0x41653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27080));
label_416540:
    // 0x416540: 0xc1082d8  jal         func_420B60
label_416544:
    if (ctx->pc == 0x416544u) {
        ctx->pc = 0x416544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416540u;
        // 0x416544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416548u;
        goto label_416548;
    }
    ctx->pc = 0x416540u;
    SET_GPR_U32(ctx, 31, 0x416548u);
    ctx->pc = 0x416544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416540u;
    // 0x416544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416540u, 0x416548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416548u;
label_416548:
    // 0x416548: 0xc1081de  jal         func_420778
label_41654c:
    if (ctx->pc == 0x41654Cu) {
        ctx->pc = 0x41654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416548u;
        // 0x41654c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416550u;
        goto label_416550;
    }
    ctx->pc = 0x416548u;
    SET_GPR_U32(ctx, 31, 0x416550u);
    ctx->pc = 0x41654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416548u;
    // 0x41654c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x416548u, 0x416550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416550u;
label_416550:
    // 0x416550: 0x10000014  b           . + 4 + (0x14 << 2)
label_416554:
    if (ctx->pc == 0x416554u) {
        ctx->pc = 0x416554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416550u;
        // 0x416554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416558u;
        goto label_416558;
    }
    ctx->pc = 0x416550u;
    {
        const bool branch_taken_0x416550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416550u;
        // 0x416554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416550) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x416558u;
label_416558:
    // 0x416558: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x416558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_41655c:
    // 0x41655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416560:
    // 0x416560: 0x24a569c8  addiu       $a1, $a1, 0x69C8
    ctx->pc = 0x416560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27080));
label_416564:
    // 0x416564: 0xc1082d8  jal         func_420B60
label_416568:
    if (ctx->pc == 0x416568u) {
        ctx->pc = 0x416568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416564u;
        // 0x416568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41656Cu;
        goto label_41656c;
    }
    ctx->pc = 0x416564u;
    SET_GPR_U32(ctx, 31, 0x41656Cu);
    ctx->pc = 0x416568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416564u;
    // 0x416568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416564u, 0x41656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41656Cu;
label_41656c:
    // 0x41656c: 0xc1081de  jal         func_420778
label_416570:
    if (ctx->pc == 0x416570u) {
        ctx->pc = 0x416570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41656Cu;
        // 0x416570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416574u;
        goto label_416574;
    }
    ctx->pc = 0x41656Cu;
    SET_GPR_U32(ctx, 31, 0x416574u);
    ctx->pc = 0x416570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41656Cu;
    // 0x416570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x41656Cu, 0x416574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416574u;
label_416574:
    // 0x416574: 0x1000000b  b           . + 4 + (0xB << 2)
label_416578:
    if (ctx->pc == 0x416578u) {
        ctx->pc = 0x416578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416574u;
        // 0x416578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41657Cu;
        goto label_41657c;
    }
    ctx->pc = 0x416574u;
    {
        const bool branch_taken_0x416574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416574u;
        // 0x416578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416574) {
            ctx->pc = 0x4165A4u;
            goto label_4165a4;
        }
    }
    ctx->pc = 0x41657Cu;
label_41657c:
    // 0x41657c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416580:
    // 0x416580: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x416580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_416584:
    // 0x416584: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x416584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_416588:
    // 0x416588: 0xc1035f6  jal         func_40D7D8
label_41658c:
    if (ctx->pc == 0x41658Cu) {
        ctx->pc = 0x41658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416588u;
        // 0x41658c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x416590u;
        goto label_416590;
    }
    ctx->pc = 0x416588u;
    SET_GPR_U32(ctx, 31, 0x416590u);
    ctx->pc = 0x41658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416588u;
    // 0x41658c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x416588u, 0x416590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416590u;
label_416590:
    // 0x416590: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x416590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_416594:
    // 0x416594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x416594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_416598:
    // 0x416598: 0xc103628  jal         func_40D8A0
label_41659c:
    if (ctx->pc == 0x41659Cu) {
        ctx->pc = 0x4165A0u;
        goto label_4165a0;
    }
    ctx->pc = 0x416598u;
    SET_GPR_U32(ctx, 31, 0x4165A0u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x416598u, 0x4165A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4165A0u;
label_4165a0:
    // 0x4165a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4165a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4165a4:
    // 0x4165a4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4165a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4165a8:
    // 0x4165a8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4165a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4165ac:
    // 0x4165ac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4165acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4165b0:
    // 0x4165b0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4165b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4165b4:
    // 0x4165b4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4165b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4165b8:
    // 0x4165b8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x4165b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4165bc:
    // 0x4165bc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4165bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4165c0:
    // 0x4165c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4165c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4165c4:
    // 0x4165c4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x4165c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4165c8:
    // 0x4165c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4165c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4165cc:
    // 0x4165cc: 0x3e00008  jr          $ra
label_4165d0:
    if (ctx->pc == 0x4165D0u) {
        ctx->pc = 0x4165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165CCu;
        // 0x4165d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165D4u;
        goto label_4165d4;
    }
    ctx->pc = 0x4165CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165CCu;
        // 0x4165d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4165CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4165D4u;
label_4165d4:
    // 0x4165d4: 0x0  nop
    ctx->pc = 0x4165d4u;
    // NOP
    ctx->pc = 0x4165d8u;
}
