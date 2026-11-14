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

// Function: sub_004A8310
// Address: 0x4a8310 - 0x4a8738
void sub_004A8310_0x4a8310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8310_0x4a8310");
#endif

    switch (ctx->pc) {
        case 0x4a8310u: goto label_4a8310;
        case 0x4a8314u: goto label_4a8314;
        case 0x4a8318u: goto label_4a8318;
        case 0x4a831cu: goto label_4a831c;
        case 0x4a8320u: goto label_4a8320;
        case 0x4a8324u: goto label_4a8324;
        case 0x4a8328u: goto label_4a8328;
        case 0x4a832cu: goto label_4a832c;
        case 0x4a8330u: goto label_4a8330;
        case 0x4a8334u: goto label_4a8334;
        case 0x4a8338u: goto label_4a8338;
        case 0x4a833cu: goto label_4a833c;
        case 0x4a8340u: goto label_4a8340;
        case 0x4a8344u: goto label_4a8344;
        case 0x4a8348u: goto label_4a8348;
        case 0x4a834cu: goto label_4a834c;
        case 0x4a8350u: goto label_4a8350;
        case 0x4a8354u: goto label_4a8354;
        case 0x4a8358u: goto label_4a8358;
        case 0x4a835cu: goto label_4a835c;
        case 0x4a8360u: goto label_4a8360;
        case 0x4a8364u: goto label_4a8364;
        case 0x4a8368u: goto label_4a8368;
        case 0x4a836cu: goto label_4a836c;
        case 0x4a8370u: goto label_4a8370;
        case 0x4a8374u: goto label_4a8374;
        case 0x4a8378u: goto label_4a8378;
        case 0x4a837cu: goto label_4a837c;
        case 0x4a8380u: goto label_4a8380;
        case 0x4a8384u: goto label_4a8384;
        case 0x4a8388u: goto label_4a8388;
        case 0x4a838cu: goto label_4a838c;
        case 0x4a8390u: goto label_4a8390;
        case 0x4a8394u: goto label_4a8394;
        case 0x4a8398u: goto label_4a8398;
        case 0x4a839cu: goto label_4a839c;
        case 0x4a83a0u: goto label_4a83a0;
        case 0x4a83a4u: goto label_4a83a4;
        case 0x4a83a8u: goto label_4a83a8;
        case 0x4a83acu: goto label_4a83ac;
        case 0x4a83b0u: goto label_4a83b0;
        case 0x4a83b4u: goto label_4a83b4;
        case 0x4a83b8u: goto label_4a83b8;
        case 0x4a83bcu: goto label_4a83bc;
        case 0x4a83c0u: goto label_4a83c0;
        case 0x4a83c4u: goto label_4a83c4;
        case 0x4a83c8u: goto label_4a83c8;
        case 0x4a83ccu: goto label_4a83cc;
        case 0x4a83d0u: goto label_4a83d0;
        case 0x4a83d4u: goto label_4a83d4;
        case 0x4a83d8u: goto label_4a83d8;
        case 0x4a83dcu: goto label_4a83dc;
        case 0x4a83e0u: goto label_4a83e0;
        case 0x4a83e4u: goto label_4a83e4;
        case 0x4a83e8u: goto label_4a83e8;
        case 0x4a83ecu: goto label_4a83ec;
        case 0x4a83f0u: goto label_4a83f0;
        case 0x4a83f4u: goto label_4a83f4;
        case 0x4a83f8u: goto label_4a83f8;
        case 0x4a83fcu: goto label_4a83fc;
        case 0x4a8400u: goto label_4a8400;
        case 0x4a8404u: goto label_4a8404;
        case 0x4a8408u: goto label_4a8408;
        case 0x4a840cu: goto label_4a840c;
        case 0x4a8410u: goto label_4a8410;
        case 0x4a8414u: goto label_4a8414;
        case 0x4a8418u: goto label_4a8418;
        case 0x4a841cu: goto label_4a841c;
        case 0x4a8420u: goto label_4a8420;
        case 0x4a8424u: goto label_4a8424;
        case 0x4a8428u: goto label_4a8428;
        case 0x4a842cu: goto label_4a842c;
        case 0x4a8430u: goto label_4a8430;
        case 0x4a8434u: goto label_4a8434;
        case 0x4a8438u: goto label_4a8438;
        case 0x4a843cu: goto label_4a843c;
        case 0x4a8440u: goto label_4a8440;
        case 0x4a8444u: goto label_4a8444;
        case 0x4a8448u: goto label_4a8448;
        case 0x4a844cu: goto label_4a844c;
        case 0x4a8450u: goto label_4a8450;
        case 0x4a8454u: goto label_4a8454;
        case 0x4a8458u: goto label_4a8458;
        case 0x4a845cu: goto label_4a845c;
        case 0x4a8460u: goto label_4a8460;
        case 0x4a8464u: goto label_4a8464;
        case 0x4a8468u: goto label_4a8468;
        case 0x4a846cu: goto label_4a846c;
        case 0x4a8470u: goto label_4a8470;
        case 0x4a8474u: goto label_4a8474;
        case 0x4a8478u: goto label_4a8478;
        case 0x4a847cu: goto label_4a847c;
        case 0x4a8480u: goto label_4a8480;
        case 0x4a8484u: goto label_4a8484;
        case 0x4a8488u: goto label_4a8488;
        case 0x4a848cu: goto label_4a848c;
        case 0x4a8490u: goto label_4a8490;
        case 0x4a8494u: goto label_4a8494;
        case 0x4a8498u: goto label_4a8498;
        case 0x4a849cu: goto label_4a849c;
        case 0x4a84a0u: goto label_4a84a0;
        case 0x4a84a4u: goto label_4a84a4;
        case 0x4a84a8u: goto label_4a84a8;
        case 0x4a84acu: goto label_4a84ac;
        case 0x4a84b0u: goto label_4a84b0;
        case 0x4a84b4u: goto label_4a84b4;
        case 0x4a84b8u: goto label_4a84b8;
        case 0x4a84bcu: goto label_4a84bc;
        case 0x4a84c0u: goto label_4a84c0;
        case 0x4a84c4u: goto label_4a84c4;
        case 0x4a84c8u: goto label_4a84c8;
        case 0x4a84ccu: goto label_4a84cc;
        case 0x4a84d0u: goto label_4a84d0;
        case 0x4a84d4u: goto label_4a84d4;
        case 0x4a84d8u: goto label_4a84d8;
        case 0x4a84dcu: goto label_4a84dc;
        case 0x4a84e0u: goto label_4a84e0;
        case 0x4a84e4u: goto label_4a84e4;
        case 0x4a84e8u: goto label_4a84e8;
        case 0x4a84ecu: goto label_4a84ec;
        case 0x4a84f0u: goto label_4a84f0;
        case 0x4a84f4u: goto label_4a84f4;
        case 0x4a84f8u: goto label_4a84f8;
        case 0x4a84fcu: goto label_4a84fc;
        case 0x4a8500u: goto label_4a8500;
        case 0x4a8504u: goto label_4a8504;
        case 0x4a8508u: goto label_4a8508;
        case 0x4a850cu: goto label_4a850c;
        case 0x4a8510u: goto label_4a8510;
        case 0x4a8514u: goto label_4a8514;
        case 0x4a8518u: goto label_4a8518;
        case 0x4a851cu: goto label_4a851c;
        case 0x4a8520u: goto label_4a8520;
        case 0x4a8524u: goto label_4a8524;
        case 0x4a8528u: goto label_4a8528;
        case 0x4a852cu: goto label_4a852c;
        case 0x4a8530u: goto label_4a8530;
        case 0x4a8534u: goto label_4a8534;
        case 0x4a8538u: goto label_4a8538;
        case 0x4a853cu: goto label_4a853c;
        case 0x4a8540u: goto label_4a8540;
        case 0x4a8544u: goto label_4a8544;
        case 0x4a8548u: goto label_4a8548;
        case 0x4a854cu: goto label_4a854c;
        case 0x4a8550u: goto label_4a8550;
        case 0x4a8554u: goto label_4a8554;
        case 0x4a8558u: goto label_4a8558;
        case 0x4a855cu: goto label_4a855c;
        case 0x4a8560u: goto label_4a8560;
        case 0x4a8564u: goto label_4a8564;
        case 0x4a8568u: goto label_4a8568;
        case 0x4a856cu: goto label_4a856c;
        case 0x4a8570u: goto label_4a8570;
        case 0x4a8574u: goto label_4a8574;
        case 0x4a8578u: goto label_4a8578;
        case 0x4a857cu: goto label_4a857c;
        case 0x4a8580u: goto label_4a8580;
        case 0x4a8584u: goto label_4a8584;
        case 0x4a8588u: goto label_4a8588;
        case 0x4a858cu: goto label_4a858c;
        case 0x4a8590u: goto label_4a8590;
        case 0x4a8594u: goto label_4a8594;
        case 0x4a8598u: goto label_4a8598;
        case 0x4a859cu: goto label_4a859c;
        case 0x4a85a0u: goto label_4a85a0;
        case 0x4a85a4u: goto label_4a85a4;
        case 0x4a85a8u: goto label_4a85a8;
        case 0x4a85acu: goto label_4a85ac;
        case 0x4a85b0u: goto label_4a85b0;
        case 0x4a85b4u: goto label_4a85b4;
        case 0x4a85b8u: goto label_4a85b8;
        case 0x4a85bcu: goto label_4a85bc;
        case 0x4a85c0u: goto label_4a85c0;
        case 0x4a85c4u: goto label_4a85c4;
        case 0x4a85c8u: goto label_4a85c8;
        case 0x4a85ccu: goto label_4a85cc;
        case 0x4a85d0u: goto label_4a85d0;
        case 0x4a85d4u: goto label_4a85d4;
        case 0x4a85d8u: goto label_4a85d8;
        case 0x4a85dcu: goto label_4a85dc;
        case 0x4a85e0u: goto label_4a85e0;
        case 0x4a85e4u: goto label_4a85e4;
        case 0x4a85e8u: goto label_4a85e8;
        case 0x4a85ecu: goto label_4a85ec;
        case 0x4a85f0u: goto label_4a85f0;
        case 0x4a85f4u: goto label_4a85f4;
        case 0x4a85f8u: goto label_4a85f8;
        case 0x4a85fcu: goto label_4a85fc;
        case 0x4a8600u: goto label_4a8600;
        case 0x4a8604u: goto label_4a8604;
        case 0x4a8608u: goto label_4a8608;
        case 0x4a860cu: goto label_4a860c;
        case 0x4a8610u: goto label_4a8610;
        case 0x4a8614u: goto label_4a8614;
        case 0x4a8618u: goto label_4a8618;
        case 0x4a861cu: goto label_4a861c;
        case 0x4a8620u: goto label_4a8620;
        case 0x4a8624u: goto label_4a8624;
        case 0x4a8628u: goto label_4a8628;
        case 0x4a862cu: goto label_4a862c;
        case 0x4a8630u: goto label_4a8630;
        case 0x4a8634u: goto label_4a8634;
        case 0x4a8638u: goto label_4a8638;
        case 0x4a863cu: goto label_4a863c;
        case 0x4a8640u: goto label_4a8640;
        case 0x4a8644u: goto label_4a8644;
        case 0x4a8648u: goto label_4a8648;
        case 0x4a864cu: goto label_4a864c;
        case 0x4a8650u: goto label_4a8650;
        case 0x4a8654u: goto label_4a8654;
        case 0x4a8658u: goto label_4a8658;
        case 0x4a865cu: goto label_4a865c;
        case 0x4a8660u: goto label_4a8660;
        case 0x4a8664u: goto label_4a8664;
        case 0x4a8668u: goto label_4a8668;
        case 0x4a866cu: goto label_4a866c;
        case 0x4a8670u: goto label_4a8670;
        case 0x4a8674u: goto label_4a8674;
        case 0x4a8678u: goto label_4a8678;
        case 0x4a867cu: goto label_4a867c;
        case 0x4a8680u: goto label_4a8680;
        case 0x4a8684u: goto label_4a8684;
        case 0x4a8688u: goto label_4a8688;
        case 0x4a868cu: goto label_4a868c;
        case 0x4a8690u: goto label_4a8690;
        case 0x4a8694u: goto label_4a8694;
        case 0x4a8698u: goto label_4a8698;
        case 0x4a869cu: goto label_4a869c;
        case 0x4a86a0u: goto label_4a86a0;
        case 0x4a86a4u: goto label_4a86a4;
        case 0x4a86a8u: goto label_4a86a8;
        case 0x4a86acu: goto label_4a86ac;
        case 0x4a86b0u: goto label_4a86b0;
        case 0x4a86b4u: goto label_4a86b4;
        case 0x4a86b8u: goto label_4a86b8;
        case 0x4a86bcu: goto label_4a86bc;
        case 0x4a86c0u: goto label_4a86c0;
        case 0x4a86c4u: goto label_4a86c4;
        case 0x4a86c8u: goto label_4a86c8;
        case 0x4a86ccu: goto label_4a86cc;
        case 0x4a86d0u: goto label_4a86d0;
        case 0x4a86d4u: goto label_4a86d4;
        case 0x4a86d8u: goto label_4a86d8;
        case 0x4a86dcu: goto label_4a86dc;
        case 0x4a86e0u: goto label_4a86e0;
        case 0x4a86e4u: goto label_4a86e4;
        case 0x4a86e8u: goto label_4a86e8;
        case 0x4a86ecu: goto label_4a86ec;
        case 0x4a86f0u: goto label_4a86f0;
        case 0x4a86f4u: goto label_4a86f4;
        case 0x4a86f8u: goto label_4a86f8;
        case 0x4a86fcu: goto label_4a86fc;
        case 0x4a8700u: goto label_4a8700;
        case 0x4a8704u: goto label_4a8704;
        case 0x4a8708u: goto label_4a8708;
        case 0x4a870cu: goto label_4a870c;
        case 0x4a8710u: goto label_4a8710;
        case 0x4a8714u: goto label_4a8714;
        case 0x4a8718u: goto label_4a8718;
        case 0x4a871cu: goto label_4a871c;
        case 0x4a8720u: goto label_4a8720;
        case 0x4a8724u: goto label_4a8724;
        case 0x4a8728u: goto label_4a8728;
        case 0x4a872cu: goto label_4a872c;
        case 0x4a8730u: goto label_4a8730;
        case 0x4a8734u: goto label_4a8734;
        default: break;
    }

    ctx->pc = 0x4a8310u;

label_4a8310:
    // 0x4a8310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a8314:
    // 0x4a8314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a8314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a8318:
    // 0x4a8318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a831c:
    // 0x4a831c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a831cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8320:
    // 0x4a8320: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a8324:
    // 0x4a8324: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4a8324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4a8328:
    // 0x4a8328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a832c:
    if (ctx->pc == 0x4A832Cu) {
        ctx->pc = 0x4A8330u;
        goto label_4a8330;
    }
    ctx->pc = 0x4A8328u;
    {
        const bool branch_taken_0x4a8328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8328) {
            ctx->pc = 0x4A8338u;
            goto label_4a8338;
        }
    }
    ctx->pc = 0x4A8330u;
label_4a8330:
    // 0x4a8330: 0x40f809  jalr        $v0
label_4a8334:
    if (ctx->pc == 0x4A8334u) {
        ctx->pc = 0x4A8338u;
        goto label_4a8338;
    }
    ctx->pc = 0x4A8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8338u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8330u, 0x4A8338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8338u;
label_4a8338:
    // 0x4a8338: 0xc129822  jal         func_4A6088
label_4a833c:
    if (ctx->pc == 0x4A833Cu) {
        ctx->pc = 0x4A833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8338u;
        // 0x4a833c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8340u;
        goto label_4a8340;
    }
    ctx->pc = 0x4A8338u;
    SET_GPR_U32(ctx, 31, 0x4A8340u);
    ctx->pc = 0x4A833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8338u;
    // 0x4a833c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A8338u, 0x4A8340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8340u;
label_4a8340:
    // 0x4a8340: 0xc129822  jal         func_4A6088
label_4a8344:
    if (ctx->pc == 0x4A8344u) {
        ctx->pc = 0x4A8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8340u;
        // 0x4a8344: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8348u;
        goto label_4a8348;
    }
    ctx->pc = 0x4A8340u;
    SET_GPR_U32(ctx, 31, 0x4A8348u);
    ctx->pc = 0x4A8344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8340u;
    // 0x4a8344: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A8340u, 0x4A8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8348u;
label_4a8348:
    // 0x4a8348: 0xc1283e8  jal         func_4A0FA0
label_4a834c:
    if (ctx->pc == 0x4A834Cu) {
        ctx->pc = 0x4A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8348u;
        // 0x4a834c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8350u;
        goto label_4a8350;
    }
    ctx->pc = 0x4A8348u;
    SET_GPR_U32(ctx, 31, 0x4A8350u);
    ctx->pc = 0x4A834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8348u;
    // 0x4a834c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0FA0u, 0x4A8348u, 0x4A8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8350u;
label_4a8350:
    // 0x4a8350: 0xc12a492  jal         func_4A9248
label_4a8354:
    if (ctx->pc == 0x4A8354u) {
        ctx->pc = 0x4A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8350u;
        // 0x4a8354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8358u;
        goto label_4a8358;
    }
    ctx->pc = 0x4A8350u;
    SET_GPR_U32(ctx, 31, 0x4A8358u);
    ctx->pc = 0x4A8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8350u;
    // 0x4a8354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A8350u, 0x4A8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8358u;
label_4a8358:
    // 0x4a8358: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4a835c:
    // 0x4a835c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a8360:
    // 0x4a8360: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4a8364:
    if (ctx->pc == 0x4A8364u) {
        ctx->pc = 0x4A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8360u;
        // 0x4a8364: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8368u;
        goto label_4a8368;
    }
    ctx->pc = 0x4A8360u;
    {
        const bool branch_taken_0x4a8360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8360u;
        // 0x4a8364: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8360) {
            ctx->pc = 0x4A839Cu;
            goto label_4a839c;
        }
    }
    ctx->pc = 0x4A8368u;
label_4a8368:
    // 0x4a8368: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a8368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a836c:
    // 0x4a836c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4a836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4a8370:
    // 0x4a8370: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4a8374:
    if (ctx->pc == 0x4A8374u) {
        ctx->pc = 0x4A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8370u;
        // 0x4a8374: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8378u;
        goto label_4a8378;
    }
    ctx->pc = 0x4A8370u;
    {
        const bool branch_taken_0x4a8370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8370) {
            ctx->pc = 0x4A8374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8370u;
            // 0x4a8374: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8388u;
            goto label_4a8388;
        }
    }
    ctx->pc = 0x4A8378u;
label_4a8378:
    // 0x4a8378: 0xc12a9a0  jal         func_4AA680
label_4a837c:
    if (ctx->pc == 0x4A837Cu) {
        ctx->pc = 0x4A837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8378u;
        // 0x4a837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8380u;
        goto label_4a8380;
    }
    ctx->pc = 0x4A8378u;
    SET_GPR_U32(ctx, 31, 0x4A8380u);
    ctx->pc = 0x4A837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8378u;
    // 0x4a837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A8378u, 0x4A8380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8380u;
label_4a8380:
    // 0x4a8380: 0x1000000b  b           . + 4 + (0xB << 2)
label_4a8384:
    if (ctx->pc == 0x4A8384u) {
        ctx->pc = 0x4A8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8380u;
        // 0x4a8384: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8388u;
        goto label_4a8388;
    }
    ctx->pc = 0x4A8380u;
    {
        const bool branch_taken_0x4a8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8380u;
        // 0x4a8384: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8380) {
            ctx->pc = 0x4A83B0u;
            goto label_4a83b0;
        }
    }
    ctx->pc = 0x4A8388u;
label_4a8388:
    // 0x4a8388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a838c:
    // 0x4a838c: 0xc12a9a0  jal         func_4AA680
label_4a8390:
    if (ctx->pc == 0x4A8390u) {
        ctx->pc = 0x4A8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A838Cu;
        // 0x4a8390: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8394u;
        goto label_4a8394;
    }
    ctx->pc = 0x4A838Cu;
    SET_GPR_U32(ctx, 31, 0x4A8394u);
    ctx->pc = 0x4A8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A838Cu;
    // 0x4a8390: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A838Cu, 0x4A8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8394u;
label_4a8394:
    // 0x4a8394: 0x10000006  b           . + 4 + (0x6 << 2)
label_4a8398:
    if (ctx->pc == 0x4A8398u) {
        ctx->pc = 0x4A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8394u;
        // 0x4a8398: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A839Cu;
        goto label_4a839c;
    }
    ctx->pc = 0x4A8394u;
    {
        const bool branch_taken_0x4a8394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8394u;
        // 0x4a8398: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8394) {
            ctx->pc = 0x4A83B0u;
            goto label_4a83b0;
        }
    }
    ctx->pc = 0x4A839Cu;
label_4a839c:
    // 0x4a839c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4a83a0:
    if (ctx->pc == 0x4A83A0u) {
        ctx->pc = 0x4A83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A839Cu;
        // 0x4a83a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83A4u;
        goto label_4a83a4;
    }
    ctx->pc = 0x4A839Cu;
    {
        const bool branch_taken_0x4a839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a839c) {
            ctx->pc = 0x4A83A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A839Cu;
            // 0x4a83a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A83B0u;
            goto label_4a83b0;
        }
    }
    ctx->pc = 0x4A83A4u;
label_4a83a4:
    // 0x4a83a4: 0xc127cae  jal         func_49F2B8
label_4a83a8:
    if (ctx->pc == 0x4A83A8u) {
        ctx->pc = 0x4A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83A4u;
        // 0x4a83a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83ACu;
        goto label_4a83ac;
    }
    ctx->pc = 0x4A83A4u;
    SET_GPR_U32(ctx, 31, 0x4A83ACu);
    ctx->pc = 0x4A83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A83A4u;
    // 0x4a83a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A83A4u, 0x4A83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A83ACu;
label_4a83ac:
    // 0x4a83ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a83acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a83b0:
    // 0x4a83b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a83b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a83b4:
    // 0x4a83b4: 0x3e00008  jr          $ra
label_4a83b8:
    if (ctx->pc == 0x4A83B8u) {
        ctx->pc = 0x4A83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83B4u;
        // 0x4a83b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A83BCu;
        goto label_4a83bc;
    }
    ctx->pc = 0x4A83B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83B4u;
        // 0x4a83b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A83B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A83BCu;
label_4a83bc:
    // 0x4a83bc: 0x0  nop
    ctx->pc = 0x4a83bcu;
    // NOP
label_4a83c0:
    // 0x4a83c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a83c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4a83c4:
    // 0x4a83c4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a83c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4a83c8:
    // 0x4a83c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a83c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4a83cc:
    // 0x4a83cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a83ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a83d0:
    // 0x4a83d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a83d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4a83d4:
    // 0x4a83d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a83d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a83d8:
    // 0x4a83d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a83d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4a83dc:
    // 0x4a83dc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4a83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4a83e0:
    // 0x4a83e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4a83e4:
    // 0x4a83e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a83e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a83e8:
    // 0x4a83e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a83e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a83ec:
    // 0x4a83ec: 0x2614002c  addiu       $s4, $s0, 0x2C
    ctx->pc = 0x4a83ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_4a83f0:
    // 0x4a83f0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4a83f4:
    // 0x4a83f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4a83f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a83f8:
    // 0x4a83f8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a83f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4a83fc:
    // 0x4a83fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a8400:
    // 0x4a8400: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a8404:
    // 0x4a8404: 0x8c570014  lw          $s7, 0x14($v0)
    ctx->pc = 0x4a8404u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4a8408:
    // 0x4a8408: 0x12e0002f  beqz        $s7, . + 4 + (0x2F << 2)
label_4a840c:
    if (ctx->pc == 0x4A840Cu) {
        ctx->pc = 0x4A840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8408u;
        // 0x4a840c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8410u;
        goto label_4a8410;
    }
    ctx->pc = 0x4A8408u;
    {
        const bool branch_taken_0x4a8408 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8408u;
        // 0x4a840c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8408) {
            ctx->pc = 0x4A84C8u;
            goto label_4a84c8;
        }
    }
    ctx->pc = 0x4A8410u;
label_4a8410:
    // 0x4a8410: 0xc12976a  jal         func_4A5DA8
label_4a8414:
    if (ctx->pc == 0x4A8414u) {
        ctx->pc = 0x4A8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8410u;
        // 0x4a8414: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8418u;
        goto label_4a8418;
    }
    ctx->pc = 0x4A8410u;
    SET_GPR_U32(ctx, 31, 0x4A8418u);
    ctx->pc = 0x4A8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8410u;
    // 0x4a8414: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A8410u, 0x4A8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8418u;
label_4a8418:
    // 0x4a8418: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_4a841c:
    if (ctx->pc == 0x4A841Cu) {
        ctx->pc = 0x4A841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8418u;
        // 0x4a841c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8420u;
        goto label_4a8420;
    }
    ctx->pc = 0x4A8418u;
    {
        const bool branch_taken_0x4a8418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8418u;
        // 0x4a841c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8418) {
            ctx->pc = 0x4A84D0u;
            goto label_4a84d0;
        }
    }
    ctx->pc = 0x4A8420u;
label_4a8420:
    // 0x4a8420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8424:
    // 0x4a8424: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a8424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8428:
    // 0x4a8428: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4a8428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a842c:
    // 0x4a842c: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x4a842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a8430:
    // 0x4a8430: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x4a8430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a8434:
    // 0x4a8434: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x4a8434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a8438:
    // 0x4a8438: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x4a8438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a843c:
    // 0x4a843c: 0x6a080027  ldl         $t0, 0x27($s0)
    ctx->pc = 0x4a843cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4a8440:
    // 0x4a8440: 0x6e080020  ldr         $t0, 0x20($s0)
    ctx->pc = 0x4a8440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4a8444:
    // 0x4a8444: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x4a8444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4a8448:
    // 0x4a8448: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a8448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a844c:
    // 0x4a844c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a844cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8450:
    // 0x4a8450: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4a8450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8454:
    // 0x4a8454: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4a8454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8458:
    // 0x4a8458: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x4a8458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a845c:
    // 0x4a845c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x4a845cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8460:
    // 0x4a8460: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x4a8460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_4a8464:
    // 0x4a8464: 0xc12930e  jal         func_4A4C38
label_4a8468:
    if (ctx->pc == 0x4A8468u) {
        ctx->pc = 0x4A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8464u;
        // 0x4a8468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A846Cu;
        goto label_4a846c;
    }
    ctx->pc = 0x4A8464u;
    SET_GPR_U32(ctx, 31, 0x4A846Cu);
    ctx->pc = 0x4A8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8464u;
    // 0x4a8468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C38u, 0x4A8464u, 0x4A846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A846Cu;
label_4a846c:
    // 0x4a846c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8470:
    // 0x4a8470: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x4a8470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
label_4a8474:
    // 0x4a8474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8478:
    // 0x4a8478: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a8478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a847c:
    // 0x4a847c: 0xc12931a  jal         func_4A4C68
label_4a8480:
    if (ctx->pc == 0x4A8480u) {
        ctx->pc = 0x4A8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A847Cu;
        // 0x4a8480: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8484u;
        goto label_4a8484;
    }
    ctx->pc = 0x4A847Cu;
    SET_GPR_U32(ctx, 31, 0x4A8484u);
    ctx->pc = 0x4A8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A847Cu;
    // 0x4a8480: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A847Cu, 0x4A8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8484u;
label_4a8484:
    // 0x4a8484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8488:
    // 0x4a8488: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a8488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a848c:
    // 0x4a848c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8490:
    // 0x4a8490: 0xc127ccc  jal         func_49F330
label_4a8494:
    if (ctx->pc == 0x4A8494u) {
        ctx->pc = 0x4A8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8490u;
        // 0x4a8494: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8498u;
        goto label_4a8498;
    }
    ctx->pc = 0x4A8490u;
    SET_GPR_U32(ctx, 31, 0x4A8498u);
    ctx->pc = 0x4A8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8490u;
    // 0x4a8494: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F330u, 0x4A8490u, 0x4A8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8498u;
label_4a8498:
    // 0x4a8498: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a8498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a849c:
    // 0x4a849c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_4a84a0:
    if (ctx->pc == 0x4A84A0u) {
        ctx->pc = 0x4A84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A849Cu;
        // 0x4a84a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84A4u;
        goto label_4a84a4;
    }
    ctx->pc = 0x4A849Cu;
    {
        const bool branch_taken_0x4a849c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A849Cu;
        // 0x4a84a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a849c) {
            ctx->pc = 0x4A84C8u;
            goto label_4a84c8;
        }
    }
    ctx->pc = 0x4A84A4u;
label_4a84a4:
    // 0x4a84a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4a84a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a84a8:
    // 0x4a84a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a84ac:
    // 0x4a84ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a84acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a84b0:
    // 0x4a84b0: 0xc128660  jal         func_4A1980
label_4a84b4:
    if (ctx->pc == 0x4A84B4u) {
        ctx->pc = 0x4A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84B0u;
        // 0x4a84b4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84B8u;
        goto label_4a84b8;
    }
    ctx->pc = 0x4A84B0u;
    SET_GPR_U32(ctx, 31, 0x4A84B8u);
    ctx->pc = 0x4A84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A84B0u;
    // 0x4a84b4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1980u, 0x4A84B0u, 0x4A84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A84B8u;
label_4a84b8:
    // 0x4a84b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4a84bc:
    if (ctx->pc == 0x4A84BCu) {
        ctx->pc = 0x4A84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84B8u;
        // 0x4a84bc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84C0u;
        goto label_4a84c0;
    }
    ctx->pc = 0x4A84B8u;
    {
        const bool branch_taken_0x4a84b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84B8u;
        // 0x4a84bc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84b8) {
            ctx->pc = 0x4A84D4u;
            goto label_4a84d4;
        }
    }
    ctx->pc = 0x4A84C0u;
label_4a84c0:
    // 0x4a84c0: 0xc127cdc  jal         func_49F370
label_4a84c4:
    if (ctx->pc == 0x4A84C4u) {
        ctx->pc = 0x4A84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84C0u;
        // 0x4a84c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84C8u;
        goto label_4a84c8;
    }
    ctx->pc = 0x4A84C0u;
    SET_GPR_U32(ctx, 31, 0x4A84C8u);
    ctx->pc = 0x4A84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A84C0u;
    // 0x4a84c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A84C0u, 0x4A84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A84C8u;
label_4a84c8:
    // 0x4a84c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4a84cc:
    if (ctx->pc == 0x4A84CCu) {
        ctx->pc = 0x4A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84C8u;
        // 0x4a84cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84D0u;
        goto label_4a84d0;
    }
    ctx->pc = 0x4A84C8u;
    {
        const bool branch_taken_0x4a84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84C8u;
        // 0x4a84cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84c8) {
            ctx->pc = 0x4A850Cu;
            goto label_4a850c;
        }
    }
    ctx->pc = 0x4A84D0u;
label_4a84d0:
    // 0x4a84d0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4a84d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a84d4:
    // 0x4a84d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a84d8:
    // 0x4a84d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a84d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a84dc:
    // 0x4a84dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a84dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a84e0:
    // 0x4a84e0: 0x2e0f809  jalr        $s7
label_4a84e4:
    if (ctx->pc == 0x4A84E4u) {
        ctx->pc = 0x4A84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E0u;
        // 0x4a84e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84E8u;
        goto label_4a84e8;
    }
    ctx->pc = 0x4A84E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4A84E8u);
        ctx->pc = 0x4A84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E0u;
        // 0x4a84e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A84E0u, 0x4A84E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A84E8u;
label_4a84e8:
    // 0x4a84e8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_4a84ec:
    if (ctx->pc == 0x4A84ECu) {
        ctx->pc = 0x4A84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E8u;
        // 0x4a84ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84F0u;
        goto label_4a84f0;
    }
    ctx->pc = 0x4A84E8u;
    {
        const bool branch_taken_0x4a84e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E8u;
        // 0x4a84ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84e8) {
            ctx->pc = 0x4A8508u;
            goto label_4a8508;
        }
    }
    ctx->pc = 0x4A84F0u;
label_4a84f0:
    // 0x4a84f0: 0xc12a1ce  jal         func_4A8738
label_4a84f4:
    if (ctx->pc == 0x4A84F4u) {
        ctx->pc = 0x4A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84F0u;
        // 0x4a84f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A84F8u;
        goto label_4a84f8;
    }
    ctx->pc = 0x4A84F0u;
    SET_GPR_U32(ctx, 31, 0x4A84F8u);
    ctx->pc = 0x4A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A84F0u;
    // 0x4a84f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8738u, 0x4A84F0u, 0x4A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A84F8u;
label_4a84f8:
    // 0x4a84f8: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
label_4a84fc:
    if (ctx->pc == 0x4A84FCu) {
        ctx->pc = 0x4A8500u;
        goto label_4a8500;
    }
    ctx->pc = 0x4A84F8u;
    {
        const bool branch_taken_0x4a84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a84f8) {
            ctx->pc = 0x4A84F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a84f0;
        }
    }
    ctx->pc = 0x4A8500u;
label_4a8500:
    // 0x4a8500: 0xc127cdc  jal         func_49F370
label_4a8504:
    if (ctx->pc == 0x4A8504u) {
        ctx->pc = 0x4A8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8500u;
        // 0x4a8504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8508u;
        goto label_4a8508;
    }
    ctx->pc = 0x4A8500u;
    SET_GPR_U32(ctx, 31, 0x4A8508u);
    ctx->pc = 0x4A8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8500u;
    // 0x4a8504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A8500u, 0x4A8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8508u;
label_4a8508:
    // 0x4a8508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a8508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a850c:
    // 0x4a850c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a850cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a8510:
    // 0x4a8510: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a8510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a8514:
    // 0x4a8514: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a8514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a8518:
    // 0x4a8518: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a8518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a851c:
    // 0x4a851c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a851cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8520:
    // 0x4a8520: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a8520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8524:
    // 0x4a8524: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a8524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8528:
    // 0x4a8528: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a8528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a852c:
    // 0x4a852c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8530:
    // 0x4a8530: 0x3e00008  jr          $ra
label_4a8534:
    if (ctx->pc == 0x4A8534u) {
        ctx->pc = 0x4A8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8530u;
        // 0x4a8534: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8538u;
        goto label_4a8538;
    }
    ctx->pc = 0x4A8530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8530u;
        // 0x4a8534: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8538u;
label_4a8538:
    // 0x4a8538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a8538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4a853c:
    // 0x4a853c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_4a8540:
    // 0x4a8540: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a8540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_4a8544:
    // 0x4a8544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a8544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a8548:
    // 0x4a8548: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a8548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4a854c:
    // 0x4a854c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a854cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8550:
    // 0x4a8550: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a8550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4a8554:
    // 0x4a8554: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a8554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_4a8558:
    // 0x4a8558: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4a8558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a855c:
    // 0x4a855c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_4a8560:
    // 0x4a8560: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x4a8560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8564:
    // 0x4a8564: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a8564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_4a8568:
    // 0x4a8568: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a8568u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a856c:
    // 0x4a856c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_4a8570:
    // 0x4a8570: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_4a8574:
    // 0x4a8574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a8578:
    // 0x4a8578: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a857c:
    // 0x4a857c: 0x8c5e0018  lw          $fp, 0x18($v0)
    ctx->pc = 0x4a857cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4a8580:
    // 0x4a8580: 0x13c00041  beqz        $fp, . + 4 + (0x41 << 2)
label_4a8584:
    if (ctx->pc == 0x4A8584u) {
        ctx->pc = 0x4A8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8580u;
        // 0x4a8584: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8588u;
        goto label_4a8588;
    }
    ctx->pc = 0x4A8580u;
    {
        const bool branch_taken_0x4a8580 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8580u;
        // 0x4a8584: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8580) {
            ctx->pc = 0x4A8688u;
            goto label_4a8688;
        }
    }
    ctx->pc = 0x4A8588u;
label_4a8588:
    // 0x4a8588: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x4a8588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_4a858c:
    // 0x4a858c: 0x230800a  movz        $s0, $s1, $s0
    ctx->pc = 0x4a858cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_4a8590:
    // 0x4a8590: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a8590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a8594:
    // 0x4a8594: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4a8598:
    if (ctx->pc == 0x4A8598u) {
        ctx->pc = 0x4A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8594u;
        // 0x4a8598: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A859Cu;
        goto label_4a859c;
    }
    ctx->pc = 0x4A8594u;
    {
        const bool branch_taken_0x4a8594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8594) {
            ctx->pc = 0x4A8598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8594u;
            // 0x4a8598: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A85A8u;
            goto label_4a85a8;
        }
    }
    ctx->pc = 0x4A859Cu;
label_4a859c:
    // 0x4a859c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x4a859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_4a85a0:
    // 0x4a85a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4a85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4a85a4:
    // 0x4a85a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a85a8:
    // 0x4a85a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a85a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a85ac:
    // 0x4a85ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a85acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a85b0:
    // 0x4a85b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4a85b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a85b4:
    // 0x4a85b4: 0xc12930e  jal         func_4A4C38
label_4a85b8:
    if (ctx->pc == 0x4A85B8u) {
        ctx->pc = 0x4A85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85B4u;
        // 0x4a85b8: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85BCu;
        goto label_4a85bc;
    }
    ctx->pc = 0x4A85B4u;
    SET_GPR_U32(ctx, 31, 0x4A85BCu);
    ctx->pc = 0x4A85B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A85B4u;
    // 0x4a85b8: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C38u, 0x4A85B4u, 0x4A85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A85BCu;
label_4a85bc:
    // 0x4a85bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a85bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a85c0:
    // 0x4a85c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a85c4:
    // 0x4a85c4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x4a85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_4a85c8:
    // 0x4a85c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a85c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a85cc:
    // 0x4a85cc: 0xc12976a  jal         func_4A5DA8
label_4a85d0:
    if (ctx->pc == 0x4A85D0u) {
        ctx->pc = 0x4A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85CCu;
        // 0x4a85d0: 0x538823  subu        $s1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85D4u;
        goto label_4a85d4;
    }
    ctx->pc = 0x4A85CCu;
    SET_GPR_U32(ctx, 31, 0x4A85D4u);
    ctx->pc = 0x4A85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A85CCu;
    // 0x4a85d0: 0x538823  subu        $s1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A85CCu, 0x4A85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A85D4u;
label_4a85d4:
    // 0x4a85d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4a85d8:
    if (ctx->pc == 0x4A85D8u) {
        ctx->pc = 0x4A85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85D4u;
        // 0x4a85d8: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85DCu;
        goto label_4a85dc;
    }
    ctx->pc = 0x4A85D4u;
    {
        const bool branch_taken_0x4a85d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85D4u;
        // 0x4a85d8: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85d4) {
            ctx->pc = 0x4A85F4u;
            goto label_4a85f4;
        }
    }
    ctx->pc = 0x4A85DCu;
label_4a85dc:
    // 0x4a85dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a85dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a85e0:
    // 0x4a85e0: 0xc127ca4  jal         func_49F290
label_4a85e4:
    if (ctx->pc == 0x4A85E4u) {
        ctx->pc = 0x4A85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85E0u;
        // 0x4a85e4: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85E8u;
        goto label_4a85e8;
    }
    ctx->pc = 0x4A85E0u;
    SET_GPR_U32(ctx, 31, 0x4A85E8u);
    ctx->pc = 0x4A85E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A85E0u;
    // 0x4a85e4: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A85E0u, 0x4A85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A85E8u;
label_4a85e8:
    // 0x4a85e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4a85e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a85ec:
    // 0x4a85ec: 0x12c00026  beqz        $s6, . + 4 + (0x26 << 2)
label_4a85f0:
    if (ctx->pc == 0x4A85F0u) {
        ctx->pc = 0x4A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85ECu;
        // 0x4a85f0: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A85F4u;
        goto label_4a85f4;
    }
    ctx->pc = 0x4A85ECu;
    {
        const bool branch_taken_0x4a85ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A85ECu;
        // 0x4a85f0: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85ec) {
            ctx->pc = 0x4A8688u;
            goto label_4a8688;
        }
    }
    ctx->pc = 0x4A85F4u;
label_4a85f4:
    // 0x4a85f4: 0x6a420033  ldl         $v0, 0x33($s2)
    ctx->pc = 0x4a85f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a85f8:
    // 0x4a85f8: 0x6e42002c  ldr         $v0, 0x2C($s2)
    ctx->pc = 0x4a85f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a85fc:
    // 0x4a85fc: 0x6a43003b  ldl         $v1, 0x3B($s2)
    ctx->pc = 0x4a85fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a8600:
    // 0x4a8600: 0x6e430034  ldr         $v1, 0x34($s2)
    ctx->pc = 0x4a8600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a8604:
    // 0x4a8604: 0x6a440043  ldl         $a0, 0x43($s2)
    ctx->pc = 0x4a8604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a8608:
    // 0x4a8608: 0x6e44003c  ldr         $a0, 0x3C($s2)
    ctx->pc = 0x4a8608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a860c:
    // 0x4a860c: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x4a860cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_4a8610:
    // 0x4a8610: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a8610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8614:
    // 0x4a8614: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a8614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8618:
    // 0x4a8618: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4a8618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a861c:
    // 0x4a861c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4a861cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8620:
    // 0x4a8620: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x4a8620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8624:
    // 0x4a8624: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x4a8624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8628:
    // 0x4a8628: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x4a8628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_4a862c:
    // 0x4a862c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a862cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8630:
    // 0x4a8630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a8630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a8634:
    // 0x4a8634: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x4a8634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_4a8638:
    // 0x4a8638: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a8638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a863c:
    // 0x4a863c: 0x3c0f809  jalr        $fp
label_4a8640:
    if (ctx->pc == 0x4A8640u) {
        ctx->pc = 0x4A8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A863Cu;
        // 0x4a8640: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8644u;
        goto label_4a8644;
    }
    ctx->pc = 0x4A863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4A8644u);
        ctx->pc = 0x4A8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A863Cu;
        // 0x4a8640: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A863Cu, 0x4A8644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8644u;
label_4a8644:
    // 0x4a8644: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4a8648:
    if (ctx->pc == 0x4A8648u) {
        ctx->pc = 0x4A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8644u;
        // 0x4a8648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A864Cu;
        goto label_4a864c;
    }
    ctx->pc = 0x4A8644u;
    {
        const bool branch_taken_0x4a8644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8644u;
        // 0x4a8648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8644) {
            ctx->pc = 0x4A86ACu;
            goto label_4a86ac;
        }
    }
    ctx->pc = 0x4A864Cu;
label_4a864c:
    // 0x4a864c: 0x12c00016  beqz        $s6, . + 4 + (0x16 << 2)
label_4a8650:
    if (ctx->pc == 0x4A8650u) {
        ctx->pc = 0x4A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A864Cu;
        // 0x4a8650: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8654u;
        goto label_4a8654;
    }
    ctx->pc = 0x4A864Cu;
    {
        const bool branch_taken_0x4a864c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A864Cu;
        // 0x4a8650: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a864c) {
            ctx->pc = 0x4A86A8u;
            goto label_4a86a8;
        }
    }
    ctx->pc = 0x4A8654u;
label_4a8654:
    // 0x4a8654: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a8654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8658:
    // 0x4a8658: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4a8658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a865c:
    // 0x4a865c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8660:
    // 0x4a8660: 0xc128660  jal         func_4A1980
label_4a8664:
    if (ctx->pc == 0x4A8664u) {
        ctx->pc = 0x4A8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8660u;
        // 0x4a8664: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8668u;
        goto label_4a8668;
    }
    ctx->pc = 0x4A8660u;
    SET_GPR_U32(ctx, 31, 0x4A8668u);
    ctx->pc = 0x4A8664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8660u;
    // 0x4a8664: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1980u, 0x4A8660u, 0x4A8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8668u;
label_4a8668:
    // 0x4a8668: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4a866c:
    if (ctx->pc == 0x4A866Cu) {
        ctx->pc = 0x4A8670u;
        goto label_4a8670;
    }
    ctx->pc = 0x4A8668u;
    {
        const bool branch_taken_0x4a8668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8668) {
            ctx->pc = 0x4A8690u;
            goto label_4a8690;
        }
    }
    ctx->pc = 0x4A8670u;
label_4a8670:
    // 0x4a8670: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4a8674:
    if (ctx->pc == 0x4A8674u) {
        ctx->pc = 0x4A8678u;
        goto label_4a8678;
    }
    ctx->pc = 0x4A8670u;
    {
        const bool branch_taken_0x4a8670 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8670) {
            ctx->pc = 0x4A8680u;
            goto label_4a8680;
        }
    }
    ctx->pc = 0x4A8678u;
label_4a8678:
    // 0x4a8678: 0xc129822  jal         func_4A6088
label_4a867c:
    if (ctx->pc == 0x4A867Cu) {
        ctx->pc = 0x4A867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8678u;
        // 0x4a867c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8680u;
        goto label_4a8680;
    }
    ctx->pc = 0x4A8678u;
    SET_GPR_U32(ctx, 31, 0x4A8680u);
    ctx->pc = 0x4A867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8678u;
    // 0x4a867c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A8678u, 0x4A8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8680u;
label_4a8680:
    // 0x4a8680: 0xc127cae  jal         func_49F2B8
label_4a8684:
    if (ctx->pc == 0x4A8684u) {
        ctx->pc = 0x4A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8680u;
        // 0x4a8684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8688u;
        goto label_4a8688;
    }
    ctx->pc = 0x4A8680u;
    SET_GPR_U32(ctx, 31, 0x4A8688u);
    ctx->pc = 0x4A8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8680u;
    // 0x4a8684: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A8680u, 0x4A8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8688u;
label_4a8688:
    // 0x4a8688: 0x10000008  b           . + 4 + (0x8 << 2)
label_4a868c:
    if (ctx->pc == 0x4A868Cu) {
        ctx->pc = 0x4A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8688u;
        // 0x4a868c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8690u;
        goto label_4a8690;
    }
    ctx->pc = 0x4A8688u;
    {
        const bool branch_taken_0x4a8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8688u;
        // 0x4a868c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8688) {
            ctx->pc = 0x4A86ACu;
            goto label_4a86ac;
        }
    }
    ctx->pc = 0x4A8690u;
label_4a8690:
    // 0x4a8690: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4a8694:
    if (ctx->pc == 0x4A8694u) {
        ctx->pc = 0x4A8698u;
        goto label_4a8698;
    }
    ctx->pc = 0x4A8690u;
    {
        const bool branch_taken_0x4a8690 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8690) {
            ctx->pc = 0x4A86A0u;
            goto label_4a86a0;
        }
    }
    ctx->pc = 0x4A8698u;
label_4a8698:
    // 0x4a8698: 0xc129822  jal         func_4A6088
label_4a869c:
    if (ctx->pc == 0x4A869Cu) {
        ctx->pc = 0x4A869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8698u;
        // 0x4a869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A86A0u;
        goto label_4a86a0;
    }
    ctx->pc = 0x4A8698u;
    SET_GPR_U32(ctx, 31, 0x4A86A0u);
    ctx->pc = 0x4A869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8698u;
    // 0x4a869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A8698u, 0x4A86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A86A0u;
label_4a86a0:
    // 0x4a86a0: 0xc127cae  jal         func_49F2B8
label_4a86a4:
    if (ctx->pc == 0x4A86A4u) {
        ctx->pc = 0x4A86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86A0u;
        // 0x4a86a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A86A8u;
        goto label_4a86a8;
    }
    ctx->pc = 0x4A86A0u;
    SET_GPR_U32(ctx, 31, 0x4A86A8u);
    ctx->pc = 0x4A86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86A0u;
    // 0x4a86a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A86A0u, 0x4A86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A86A8u;
label_4a86a8:
    // 0x4a86a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a86a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a86ac:
    // 0x4a86ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a86acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a86b0:
    // 0x4a86b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a86b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a86b4:
    // 0x4a86b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a86b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a86b8:
    // 0x4a86b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a86b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a86bc:
    // 0x4a86bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a86bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a86c0:
    // 0x4a86c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a86c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a86c4:
    // 0x4a86c4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a86c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a86c8:
    // 0x4a86c8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a86c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a86cc:
    // 0x4a86cc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a86ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a86d0:
    // 0x4a86d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a86d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a86d4:
    // 0x4a86d4: 0x3e00008  jr          $ra
label_4a86d8:
    if (ctx->pc == 0x4A86D8u) {
        ctx->pc = 0x4A86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86D4u;
        // 0x4a86d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A86DCu;
        goto label_4a86dc;
    }
    ctx->pc = 0x4A86D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86D4u;
        // 0x4a86d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A86D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A86DCu;
label_4a86dc:
    // 0x4a86dc: 0x0  nop
    ctx->pc = 0x4a86dcu;
    // NOP
label_4a86e0:
    // 0x4a86e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a86e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a86e4:
    // 0x4a86e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a86e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a86e8:
    // 0x4a86e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a86e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a86ec:
    // 0x4a86ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a86ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a86f0:
    // 0x4a86f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a86f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a86f4:
    // 0x4a86f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a86f8:
    // 0x4a86f8: 0xc12976a  jal         func_4A5DA8
label_4a86fc:
    if (ctx->pc == 0x4A86FCu) {
        ctx->pc = 0x4A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86F8u;
        // 0x4a86fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8700u;
        goto label_4a8700;
    }
    ctx->pc = 0x4A86F8u;
    SET_GPR_U32(ctx, 31, 0x4A8700u);
    ctx->pc = 0x4A86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86F8u;
    // 0x4a86fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A86F8u, 0x4A8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8700u;
label_4a8700:
    // 0x4a8700: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4a8704:
    if (ctx->pc == 0x4A8704u) {
        ctx->pc = 0x4A8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8700u;
        // 0x4a8704: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8708u;
        goto label_4a8708;
    }
    ctx->pc = 0x4A8700u;
    {
        const bool branch_taken_0x4a8700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8700) {
            ctx->pc = 0x4A8704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8700u;
            // 0x4a8704: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8720u;
            goto label_4a8720;
        }
    }
    ctx->pc = 0x4A8708u;
label_4a8708:
    // 0x4a8708: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x4a8708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_4a870c:
    // 0x4a870c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a870cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8710:
    // 0x4a8710: 0xc12931a  jal         func_4A4C68
label_4a8714:
    if (ctx->pc == 0x4A8714u) {
        ctx->pc = 0x4A8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8710u;
        // 0x4a8714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8718u;
        goto label_4a8718;
    }
    ctx->pc = 0x4A8710u;
    SET_GPR_U32(ctx, 31, 0x4A8718u);
    ctx->pc = 0x4A8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8710u;
    // 0x4a8714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A8710u, 0x4A8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8718u;
label_4a8718:
    // 0x4a8718: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a871c:
    if (ctx->pc == 0x4A871Cu) {
        ctx->pc = 0x4A871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8718u;
        // 0x4a871c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8720u;
        goto label_4a8720;
    }
    ctx->pc = 0x4A8718u;
    {
        const bool branch_taken_0x4a8718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8718u;
        // 0x4a871c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8718) {
            ctx->pc = 0x4A8724u;
            goto label_4a8724;
        }
    }
    ctx->pc = 0x4A8720u;
label_4a8720:
    // 0x4a8720: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a8720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8724:
    // 0x4a8724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8728:
    // 0x4a8728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a872c:
    // 0x4a872c: 0x3e00008  jr          $ra
label_4a8730:
    if (ctx->pc == 0x4A8730u) {
        ctx->pc = 0x4A8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A872Cu;
        // 0x4a8730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8734u;
        goto label_4a8734;
    }
    ctx->pc = 0x4A872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A872Cu;
        // 0x4a8730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8734u;
label_4a8734:
    // 0x4a8734: 0x0  nop
    ctx->pc = 0x4a8734u;
    // NOP
    ctx->pc = 0x4a8738u;
}
