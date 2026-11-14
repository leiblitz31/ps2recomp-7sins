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

// Function: sub_002361C0
// Address: 0x2361c0 - 0x236480
void sub_002361C0_0x2361c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002361C0_0x2361c0");
#endif

    switch (ctx->pc) {
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        case 0x236278u: goto label_236278;
        case 0x23627cu: goto label_23627c;
        case 0x236280u: goto label_236280;
        case 0x236284u: goto label_236284;
        case 0x236288u: goto label_236288;
        case 0x23628cu: goto label_23628c;
        case 0x236290u: goto label_236290;
        case 0x236294u: goto label_236294;
        case 0x236298u: goto label_236298;
        case 0x23629cu: goto label_23629c;
        case 0x2362a0u: goto label_2362a0;
        case 0x2362a4u: goto label_2362a4;
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        default: break;
    }

    ctx->pc = 0x2361c0u;

label_2361c0:
    // 0x2361c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2361c4:
    // 0x2361c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2361c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2361c8:
    // 0x2361c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2361c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2361cc:
    // 0x2361cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2361ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2361d0:
    // 0x2361d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2361d4:
    // 0x2361d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2361d8:
    if (ctx->pc == 0x2361D8u) {
        ctx->pc = 0x2361DCu;
        goto label_2361dc;
    }
    ctx->pc = 0x2361D4u;
    {
        const bool branch_taken_0x2361d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2361d4) {
            ctx->pc = 0x236210u;
            goto label_236210;
        }
    }
    ctx->pc = 0x2361DCu;
label_2361dc:
    // 0x2361dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2361dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2361e0:
    // 0x2361e0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2361e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2361e4:
    // 0x2361e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2361e8:
    // 0x2361e8: 0xc08cd8c  jal         func_233630
label_2361ec:
    if (ctx->pc == 0x2361ECu) {
        ctx->pc = 0x2361F0u;
        goto label_2361f0;
    }
    ctx->pc = 0x2361E8u;
    SET_GPR_U32(ctx, 31, 0x2361F0u);
    ctx->pc = 0x233630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233630u, 0x2361E8u, 0x2361F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361F0u;
label_2361f0:
    // 0x2361f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2361f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2361f4:
    // 0x2361f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2361f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2361f8:
    // 0x2361f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2361f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2361fc:
    // 0x2361fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_236200:
    if (ctx->pc == 0x236200u) {
        ctx->pc = 0x236204u;
        goto label_236204;
    }
    ctx->pc = 0x2361FCu;
    {
        const bool branch_taken_0x2361fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2361fc) {
            ctx->pc = 0x236210u;
            goto label_236210;
        }
    }
    ctx->pc = 0x236204u;
label_236204:
    // 0x236204: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_236208:
    // 0x236208: 0xc0ba070  jal         func_2E81C0
label_23620c:
    if (ctx->pc == 0x23620Cu) {
        ctx->pc = 0x236210u;
        goto label_236210;
    }
    ctx->pc = 0x236208u;
    SET_GPR_U32(ctx, 31, 0x236210u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x236208u, 0x236210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236210u;
label_236210:
    // 0x236210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_236214:
    // 0x236214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236218:
    // 0x236218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23621c:
    // 0x23621c: 0x3e00008  jr          $ra
label_236220:
    if (ctx->pc == 0x236220u) {
        ctx->pc = 0x236224u;
        goto label_236224;
    }
    ctx->pc = 0x23621Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23621Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236224u;
label_236224:
    // 0x236224: 0x0  nop
    ctx->pc = 0x236224u;
    // NOP
label_236228:
    // 0x236228: 0x0  nop
    ctx->pc = 0x236228u;
    // NOP
label_23622c:
    // 0x23622c: 0x0  nop
    ctx->pc = 0x23622cu;
    // NOP
label_236230:
    // 0x236230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236234:
    // 0x236234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236238:
    // 0x236238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23623c:
    // 0x23623c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_236240:
    // 0x236240: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x236240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236244:
    // 0x236244: 0xc08ec5c  jal         func_23B170
label_236248:
    if (ctx->pc == 0x236248u) {
        ctx->pc = 0x23624Cu;
        goto label_23624c;
    }
    ctx->pc = 0x236244u;
    SET_GPR_U32(ctx, 31, 0x23624Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x236244u, 0x23624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23624Cu;
label_23624c:
    // 0x23624c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x23624cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_236250:
    // 0x236250: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236254:
    // 0x236254: 0xc08d920  jal         func_236480
label_236258:
    if (ctx->pc == 0x236258u) {
        ctx->pc = 0x23625Cu;
        goto label_23625c;
    }
    ctx->pc = 0x236254u;
    SET_GPR_U32(ctx, 31, 0x23625Cu);
    ctx->pc = 0x236480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236480u, 0x236254u, 0x23625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23625Cu;
label_23625c:
    // 0x23625c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236260:
    // 0x236260: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_236264:
    // 0x236264: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_236268:
    if (ctx->pc == 0x236268u) {
        ctx->pc = 0x23626Cu;
        goto label_23626c;
    }
    ctx->pc = 0x236264u;
    {
        const bool branch_taken_0x236264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x236264) {
            ctx->pc = 0x236284u;
            goto label_236284;
        }
    }
    ctx->pc = 0x23626Cu;
label_23626c:
    // 0x23626c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236270:
    // 0x236270: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x236270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_236274:
    // 0x236274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236278:
    // 0x236278: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x236278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23627c:
    // 0x23627c: 0x320f809  jalr        $t9
label_236280:
    if (ctx->pc == 0x236280u) {
        ctx->pc = 0x236284u;
        goto label_236284;
    }
    ctx->pc = 0x23627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236284u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23627Cu, 0x236284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236284u;
label_236284:
    // 0x236284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236288:
    // 0x236288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23628c:
    // 0x23628c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23628cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_236290:
    // 0x236290: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x236290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_236294:
    // 0x236294: 0x3e00008  jr          $ra
label_236298:
    if (ctx->pc == 0x236298u) {
        ctx->pc = 0x23629Cu;
        goto label_23629c;
    }
    ctx->pc = 0x236294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23629Cu;
label_23629c:
    // 0x23629c: 0x0  nop
    ctx->pc = 0x23629cu;
    // NOP
label_2362a0:
    // 0x2362a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2362a4:
    // 0x2362a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2362a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2362a8:
    // 0x2362a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2362a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2362ac:
    // 0x2362ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2362acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2362b0:
    // 0x2362b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2362b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2362b4:
    // 0x2362b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2362b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2362b8:
    // 0x2362b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2362b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2362bc:
    // 0x2362bc: 0x10020068  beq         $zero, $v0, . + 4 + (0x68 << 2)
label_2362c0:
    if (ctx->pc == 0x2362C0u) {
        ctx->pc = 0x2362C4u;
        goto label_2362c4;
    }
    ctx->pc = 0x2362BCu;
    {
        const bool branch_taken_0x2362bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2362bc) {
            ctx->pc = 0x236460u;
            goto label_236460;
        }
    }
    ctx->pc = 0x2362C4u;
label_2362c4:
    // 0x2362c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2362c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2362c8:
    // 0x2362c8: 0xc0422b8  jal         func_108AE0
label_2362cc:
    if (ctx->pc == 0x2362CCu) {
        ctx->pc = 0x2362D0u;
        goto label_2362d0;
    }
    ctx->pc = 0x2362C8u;
    SET_GPR_U32(ctx, 31, 0x2362D0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2362C8u, 0x2362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362D0u;
label_2362d0:
    // 0x2362d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2362d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2362d4:
    // 0x2362d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2362d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2362d8:
    // 0x2362d8: 0xc08ec98  jal         func_23B260
label_2362dc:
    if (ctx->pc == 0x2362DCu) {
        ctx->pc = 0x2362E0u;
        goto label_2362e0;
    }
    ctx->pc = 0x2362D8u;
    SET_GPR_U32(ctx, 31, 0x2362E0u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2362D8u, 0x2362E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362E0u;
label_2362e0:
    // 0x2362e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2362e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2362e4:
    // 0x2362e4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2362e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2362e8:
    // 0x2362e8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2362e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2362ec:
    // 0x2362ec: 0xc0422b8  jal         func_108AE0
label_2362f0:
    if (ctx->pc == 0x2362F0u) {
        ctx->pc = 0x2362F4u;
        goto label_2362f4;
    }
    ctx->pc = 0x2362ECu;
    SET_GPR_U32(ctx, 31, 0x2362F4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2362ECu, 0x2362F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362F4u;
label_2362f4:
    // 0x2362f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2362f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2362f8:
    // 0x2362f8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2362f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2362fc:
    // 0x2362fc: 0xc0422a8  jal         func_108AA0
label_236300:
    if (ctx->pc == 0x236300u) {
        ctx->pc = 0x236304u;
        goto label_236304;
    }
    ctx->pc = 0x2362FCu;
    SET_GPR_U32(ctx, 31, 0x236304u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2362FCu, 0x236304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236304u;
label_236304:
    // 0x236304: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x236304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_236308:
    // 0x236308: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x236308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_23630c:
    // 0x23630c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x23630cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_236310:
    // 0x236310: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x236310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_236314:
    // 0x236314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236318:
    // 0x236318: 0xc047970  jal         func_11E5C0
label_23631c:
    if (ctx->pc == 0x23631Cu) {
        ctx->pc = 0x236320u;
        goto label_236320;
    }
    ctx->pc = 0x236318u;
    SET_GPR_U32(ctx, 31, 0x236320u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x236318u, 0x236320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236320u;
label_236320:
    // 0x236320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236324:
    // 0x236324: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x236324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_236328:
    // 0x236328: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x236328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_23632c:
    // 0x23632c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x23632cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_236330:
    // 0x236330: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_236334:
    // 0x236334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236338:
    // 0x236338: 0xc041b24  jal         func_106C90
label_23633c:
    if (ctx->pc == 0x23633Cu) {
        ctx->pc = 0x236340u;
        goto label_236340;
    }
    ctx->pc = 0x236338u;
    SET_GPR_U32(ctx, 31, 0x236340u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x236338u, 0x236340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236340u;
label_236340:
    // 0x236340: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x236340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_236344:
    // 0x236344: 0xc0422b8  jal         func_108AE0
label_236348:
    if (ctx->pc == 0x236348u) {
        ctx->pc = 0x23634Cu;
        goto label_23634c;
    }
    ctx->pc = 0x236344u;
    SET_GPR_U32(ctx, 31, 0x23634Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x236344u, 0x23634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23634Cu;
label_23634c:
    // 0x23634c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_236350:
    // 0x236350: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x236350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_236354:
    // 0x236354: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236358:
    // 0x236358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23635c:
    // 0x23635c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23635cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_236360:
    // 0x236360: 0x320f809  jalr        $t9
label_236364:
    if (ctx->pc == 0x236364u) {
        ctx->pc = 0x236368u;
        goto label_236368;
    }
    ctx->pc = 0x236360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236360u, 0x236368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236368u;
label_236368:
    // 0x236368: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x236368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23636c:
    // 0x23636c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x23636cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_236370:
    // 0x236370: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x236370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_236374:
    // 0x236374: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_236378:
    // 0x236378: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x236378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23637c:
    // 0x23637c: 0xc041b24  jal         func_106C90
label_236380:
    if (ctx->pc == 0x236380u) {
        ctx->pc = 0x236384u;
        goto label_236384;
    }
    ctx->pc = 0x23637Cu;
    SET_GPR_U32(ctx, 31, 0x236384u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x23637Cu, 0x236384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236384u;
label_236384:
    // 0x236384: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x236384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_236388:
    // 0x236388: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23638c:
    // 0x23638c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_236390:
    if (ctx->pc == 0x236390u) {
        ctx->pc = 0x236394u;
        goto label_236394;
    }
    ctx->pc = 0x23638Cu;
    {
        const bool branch_taken_0x23638c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23638c) {
            ctx->pc = 0x2363C4u;
            goto label_2363c4;
        }
    }
    ctx->pc = 0x236394u;
label_236394:
    // 0x236394: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x236394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_236398:
    // 0x236398: 0xc0422b8  jal         func_108AE0
label_23639c:
    if (ctx->pc == 0x23639Cu) {
        ctx->pc = 0x2363A0u;
        goto label_2363a0;
    }
    ctx->pc = 0x236398u;
    SET_GPR_U32(ctx, 31, 0x2363A0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x236398u, 0x2363A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363A0u;
label_2363a0:
    // 0x2363a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2363a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2363a4:
    // 0x2363a4: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2363a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2363a8:
    // 0x2363a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2363a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2363ac:
    // 0x2363ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2363acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2363b0:
    // 0x2363b0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2363b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2363b4:
    // 0x2363b4: 0x320f809  jalr        $t9
label_2363b8:
    if (ctx->pc == 0x2363B8u) {
        ctx->pc = 0x2363BCu;
        goto label_2363bc;
    }
    ctx->pc = 0x2363B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2363BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2363B4u, 0x2363BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2363BCu;
label_2363bc:
    // 0x2363bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2363c0:
    if (ctx->pc == 0x2363C0u) {
        ctx->pc = 0x2363C4u;
        goto label_2363c4;
    }
    ctx->pc = 0x2363BCu;
    {
        const bool branch_taken_0x2363bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2363bc) {
            ctx->pc = 0x2363ECu;
            goto label_2363ec;
        }
    }
    ctx->pc = 0x2363C4u;
label_2363c4:
    // 0x2363c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2363c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2363c8:
    // 0x2363c8: 0xc0422b8  jal         func_108AE0
label_2363cc:
    if (ctx->pc == 0x2363CCu) {
        ctx->pc = 0x2363D0u;
        goto label_2363d0;
    }
    ctx->pc = 0x2363C8u;
    SET_GPR_U32(ctx, 31, 0x2363D0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2363C8u, 0x2363D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363D0u;
label_2363d0:
    // 0x2363d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2363d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2363d4:
    // 0x2363d4: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2363d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2363d8:
    // 0x2363d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2363d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2363dc:
    // 0x2363dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2363dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2363e0:
    // 0x2363e0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x2363e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_2363e4:
    // 0x2363e4: 0x320f809  jalr        $t9
label_2363e8:
    if (ctx->pc == 0x2363E8u) {
        ctx->pc = 0x2363ECu;
        goto label_2363ec;
    }
    ctx->pc = 0x2363E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2363ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2363E4u, 0x2363ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2363ECu;
label_2363ec:
    // 0x2363ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2363ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2363f0:
    // 0x2363f0: 0xc0422b8  jal         func_108AE0
label_2363f4:
    if (ctx->pc == 0x2363F4u) {
        ctx->pc = 0x2363F8u;
        goto label_2363f8;
    }
    ctx->pc = 0x2363F0u;
    SET_GPR_U32(ctx, 31, 0x2363F8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2363F0u, 0x2363F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363F8u;
label_2363f8:
    // 0x2363f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2363f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2363fc:
    // 0x2363fc: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2363fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_236400:
    // 0x236400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236404:
    // 0x236404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236408:
    // 0x236408: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x236408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23640c:
    // 0x23640c: 0x320f809  jalr        $t9
label_236410:
    if (ctx->pc == 0x236410u) {
        ctx->pc = 0x236414u;
        goto label_236414;
    }
    ctx->pc = 0x23640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23640Cu, 0x236414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236414u;
label_236414:
    // 0x236414: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x236414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_236418:
    // 0x236418: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x236418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23641c:
    // 0x23641c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_236420:
    if (ctx->pc == 0x236420u) {
        ctx->pc = 0x236424u;
        goto label_236424;
    }
    ctx->pc = 0x23641Cu;
    {
        const bool branch_taken_0x23641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23641c) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236424u;
label_236424:
    // 0x236424: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x236424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_236428:
    // 0x236428: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x236428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_23642c:
    // 0x23642c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23642cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_236430:
    // 0x236430: 0xc08ce80  jal         func_233A00
label_236434:
    if (ctx->pc == 0x236434u) {
        ctx->pc = 0x236438u;
        goto label_236438;
    }
    ctx->pc = 0x236430u;
    SET_GPR_U32(ctx, 31, 0x236438u);
    ctx->pc = 0x233A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233A00u, 0x236430u, 0x236438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236438u;
label_236438:
    // 0x236438: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x236438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23643c:
    // 0x23643c: 0xc0422b8  jal         func_108AE0
label_236440:
    if (ctx->pc == 0x236440u) {
        ctx->pc = 0x236444u;
        goto label_236444;
    }
    ctx->pc = 0x23643Cu;
    SET_GPR_U32(ctx, 31, 0x236444u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x23643Cu, 0x236444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236444u;
label_236444:
    // 0x236444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236448:
    // 0x236448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23644c:
    // 0x23644c: 0xc08ec98  jal         func_23B260
label_236450:
    if (ctx->pc == 0x236450u) {
        ctx->pc = 0x236454u;
        goto label_236454;
    }
    ctx->pc = 0x23644Cu;
    SET_GPR_U32(ctx, 31, 0x236454u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x23644Cu, 0x236454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236454u;
label_236454:
    // 0x236454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236458:
    // 0x236458: 0x10000002  b           . + 4 + (0x2 << 2)
label_23645c:
    if (ctx->pc == 0x23645Cu) {
        ctx->pc = 0x236460u;
        goto label_236460;
    }
    ctx->pc = 0x236458u;
    {
        const bool branch_taken_0x236458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236458) {
            ctx->pc = 0x236464u;
            goto label_236464;
        }
    }
    ctx->pc = 0x236460u;
label_236460:
    // 0x236460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236464:
    // 0x236464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236468:
    // 0x236468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23646c:
    // 0x23646c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23646cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_236470:
    // 0x236470: 0x3e00008  jr          $ra
label_236474:
    if (ctx->pc == 0x236474u) {
        ctx->pc = 0x236478u;
        goto label_236478;
    }
    ctx->pc = 0x236470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236478u;
label_236478:
    // 0x236478: 0x0  nop
    ctx->pc = 0x236478u;
    // NOP
label_23647c:
    // 0x23647c: 0x0  nop
    ctx->pc = 0x23647cu;
    // NOP
    ctx->pc = 0x236480u;
}
