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

// Function: sub_001A22B0
// Address: 0x1a22b0 - 0x1a3180
void sub_001A22B0_0x1a22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A22B0_0x1a22b0");
#endif

    switch (ctx->pc) {
        case 0x1a2310u: goto label_1a2310;
        case 0x1a2324u: goto label_1a2324;
        case 0x1a2338u: goto label_1a2338;
        case 0x1a234cu: goto label_1a234c;
        case 0x1a235cu: goto label_1a235c;
        case 0x1a237cu: goto label_1a237c;
        case 0x1a23e4u: goto label_1a23e4;
        case 0x1a23fcu: goto label_1a23fc;
        case 0x1a241cu: goto label_1a241c;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2524u: goto label_1a2524;
        case 0x1a2534u: goto label_1a2534;
        case 0x1a2544u: goto label_1a2544;
        case 0x1a255cu: goto label_1a255c;
        case 0x1a2568u: goto label_1a2568;
        case 0x1a2574u: goto label_1a2574;
        case 0x1a258cu: goto label_1a258c;
        case 0x1a259cu: goto label_1a259c;
        case 0x1a25a8u: goto label_1a25a8;
        case 0x1a25d4u: goto label_1a25d4;
        case 0x1a25ecu: goto label_1a25ec;
        case 0x1a2608u: goto label_1a2608;
        case 0x1a2614u: goto label_1a2614;
        case 0x1a2624u: goto label_1a2624;
        case 0x1a263cu: goto label_1a263c;
        case 0x1a2658u: goto label_1a2658;
        case 0x1a266cu: goto label_1a266c;
        case 0x1a2680u: goto label_1a2680;
        case 0x1a2768u: goto label_1a2768;
        case 0x1a2780u: goto label_1a2780;
        case 0x1a2790u: goto label_1a2790;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27c8u: goto label_1a27c8;
        case 0x1a27e0u: goto label_1a27e0;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2814u: goto label_1a2814;
        case 0x1a2830u: goto label_1a2830;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a2864u: goto label_1a2864;
        case 0x1a287cu: goto label_1a287c;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a294cu: goto label_1a294c;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a299cu: goto label_1a299c;
        case 0x1a29b4u: goto label_1a29b4;
        case 0x1a29d0u: goto label_1a29d0;
        case 0x1a29e8u: goto label_1a29e8;
        case 0x1a2a00u: goto label_1a2a00;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d84u: goto label_1a2d84;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3144u: goto label_1a3144;
        default: break;
    }

    ctx->pc = 0x1a22b0u;

    // 0x1a22b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a22b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a22b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a22b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a22bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a22c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A22C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A22C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A22C8u;
    // 0x1a22c8: 0x0  nop
    ctx->pc = 0x1a22c8u;
    // NOP
    // 0x1a22cc: 0x0  nop
    ctx->pc = 0x1a22ccu;
    // NOP
    // 0x1a22d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a22d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a22d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a22dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a22dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a22e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a22e4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A22E4u;
    {
        const bool branch_taken_0x1a22e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22e4) {
            ctx->pc = 0x1A237Cu;
            goto label_1a237c;
        }
    }
    ctx->pc = 0x1A22ECu;
    // 0x1a22ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a22f0: 0x24634630  addiu       $v1, $v1, 0x4630
    ctx->pc = 0x1a22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17968));
    // 0x1a22f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a22f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a22fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2300: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a2300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a2304: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2308: 0xc0686f4  jal         func_1A1BD0
    ctx->pc = 0x1A2308u;
    SET_GPR_U32(ctx, 31, 0x1A2310u);
    ctx->pc = 0x1A1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BD0u, 0x1A2308u, 0x1A2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2310u;
label_1a2310:
    // 0x1a2310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2314: 0x24440128  addiu       $a0, $v0, 0x128
    ctx->pc = 0x1a2314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x1a2318: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a231c: 0xc06877c  jal         func_1A1DF0
    ctx->pc = 0x1A231Cu;
    SET_GPR_U32(ctx, 31, 0x1A2324u);
    ctx->pc = 0x1A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DF0u, 0x1A231Cu, 0x1A2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2324u;
label_1a2324:
    // 0x1a2324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2328: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a232c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2330: 0xc048004  jal         func_120010
    ctx->pc = 0x1A2330u;
    SET_GPR_U32(ctx, 31, 0x1A2338u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x1A2330u, 0x1A2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2338u;
label_1a2338:
    // 0x1a2338: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a233c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2340: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2344: 0xc056094  jal         func_158250
    ctx->pc = 0x1A2344u;
    SET_GPR_U32(ctx, 31, 0x1A234Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1A2344u, 0x1A234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A234Cu;
label_1a234c:
    // 0x1a234c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2354: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1A2354u;
    SET_GPR_U32(ctx, 31, 0x1A235Cu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1A2354u, 0x1A235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A235Cu;
label_1a235c:
    // 0x1a235c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a235cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2360: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2368: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A237Cu;
            goto label_1a237c;
        }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2374: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A2374u;
    SET_GPR_U32(ctx, 31, 0x1A237Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A2374u, 0x1A237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A237Cu;
label_1a237c:
    // 0x1a237c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2384: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a2384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2388: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2390u;
    // 0x1a2390: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1a2394: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a2398: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a239c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a23a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a23a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a23a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a23a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a23ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a23acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a23b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a23b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a23b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a23b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a23b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a23b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a23bc: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x1a23bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
    // 0x1a23c0: 0xa3a502a0  sb          $a1, 0x2A0($sp)
    ctx->pc = 0x1a23c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 672), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a23c4: 0xafa602b0  sw          $a2, 0x2B0($sp)
    ctx->pc = 0x1a23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 6));
    // 0x1a23c8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a23cc: 0x93a202a0  lbu         $v0, 0x2A0($sp)
    ctx->pc = 0x1a23ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1a23d0: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1a23d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1a23d4: 0x7ba50210  lq          $a1, 0x210($sp)
    ctx->pc = 0x1a23d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1a23d8: 0x8fa602b0  lw          $a2, 0x2B0($sp)
    ctx->pc = 0x1a23d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1a23dc: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1A23DCu;
    SET_GPR_U32(ctx, 31, 0x1A23E4u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1A23DCu, 0x1A23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23E4u;
label_1a23e4:
    // 0x1a23e4: 0x93a402a0  lbu         $a0, 0x2A0($sp)
    ctx->pc = 0x1a23e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1a23e8: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x1a23e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a23ec: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1a23ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a23f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a23f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23f4: 0xc047068  jal         func_11C1A0
    ctx->pc = 0x1A23F4u;
    SET_GPR_U32(ctx, 31, 0x1A23FCu);
    ctx->pc = 0x11C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1A0u, 0x1A23F4u, 0x1A23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23FCu;
label_1a23fc:
    // 0x1a23fc: 0x93b002a0  lbu         $s0, 0x2A0($sp)
    ctx->pc = 0x1a23fcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1a2400: 0x1200029e  beqz        $s0, . + 4 + (0x29E << 2)
    ctx->pc = 0x1A2400u;
    {
        const bool branch_taken_0x1a2400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2400) {
            ctx->pc = 0x1A2E7Cu;
            goto label_1a2e7c;
        }
    }
    ctx->pc = 0x1A2408u;
    // 0x1a2408: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a240c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2410: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2414: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A2414u;
    SET_GPR_U32(ctx, 31, 0x1A241Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A2414u, 0x1A241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A241Cu;
label_1a241c:
    // 0x1a241c: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x1a241cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x1a2420: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x1a2424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2428: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x1A2428u;
    SET_GPR_U32(ctx, 31, 0x1A2430u);
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x1A2428u, 0x1A2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2430u;
label_1a2430:
    // 0x1a2430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2434: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2438: 0xe4a000c8  swc1        $f0, 0xC8($a1)
    ctx->pc = 0x1a2438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 200), bits); }
    // 0x1a243c: 0xc7808324  lwc1        $f0, -0x7CDC($gp)
    ctx->pc = 0x1a243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2440: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2444: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1a2444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1a2448: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1a2448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1a244c: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x1a244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1a2450: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1a2454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2458: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a245c: 0xe4a000bc  swc1        $f0, 0xBC($a1)
    ctx->pc = 0x1a245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 188), bits); }
    // 0x1a2460: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1a2464: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2464u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2468: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a246c: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1a246cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1a2470: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x1a2470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x1a2474: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2478: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a247c: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1a247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1a2480: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1a2480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1a2484: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1a2484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x1a2488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a248c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2490: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1a2490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1a2494: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1a2494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x1a2498: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a2498u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a249c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24a0: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x1a24a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x1a24a4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24a8: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1a24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1a24ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24b0: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a24b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24b4: 0xe4a000fc  swc1        $f0, 0xFC($a1)
    ctx->pc = 0x1a24b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 252), bits); }
    // 0x1a24b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24bc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24c0: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1a24c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1a24c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24c8: 0x8fb00290  lw          $s0, 0x290($sp)
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1a24ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1a24d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24d4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24d8: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1a24d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x1a24dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24e0: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24e4: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x1a24e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x1a24e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24ec: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24f0: 0xe4a00110  swc1        $f0, 0x110($a1)
    ctx->pc = 0x1a24f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 272), bits); }
    // 0x1a24f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a24f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24f8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a24fc: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x1a24fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1a2500: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2504: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1a2504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1a2508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a250c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2510: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x1a2510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x1a2514: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2518: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a251c: 0xc06941c  jal         func_1A5070
    ctx->pc = 0x1A251Cu;
    SET_GPR_U32(ctx, 31, 0x1A2524u);
    ctx->pc = 0x1A5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5070u, 0x1A251Cu, 0x1A2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2524u;
label_1a2524:
    // 0x1a2524: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1a2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1a2528: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a252c: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x1A252Cu;
    SET_GPR_U32(ctx, 31, 0x1A2534u);
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x1A252Cu, 0x1A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2534u;
label_1a2534:
    // 0x1a2534: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2538: 0x24840134  addiu       $a0, $a0, 0x134
    ctx->pc = 0x1a2538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 308));
    // 0x1a253c: 0xc068ea8  jal         func_1A3AA0
    ctx->pc = 0x1A253Cu;
    SET_GPR_U32(ctx, 31, 0x1A2544u);
    ctx->pc = 0x1A3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AA0u, 0x1A253Cu, 0x1A2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2544u;
label_1a2544:
    // 0x1a2544: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2548: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1a2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1a254c: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1a254cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1a2550: 0x24440128  addiu       $a0, $v0, 0x128
    ctx->pc = 0x1a2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x1a2554: 0xc068e54  jal         func_1A3950
    ctx->pc = 0x1A2554u;
    SET_GPR_U32(ctx, 31, 0x1A255Cu);
    ctx->pc = 0x1A3950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3950u, 0x1A2554u, 0x1A255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A255Cu;
label_1a255c:
    // 0x1a255c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a255cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2560: 0xc090864  jal         func_242190
    ctx->pc = 0x1A2560u;
    SET_GPR_U32(ctx, 31, 0x1A2568u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1A2560u, 0x1A2568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2568u;
label_1a2568:
    // 0x1a2568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a256c: 0xc090590  jal         func_241640
    ctx->pc = 0x1A256Cu;
    SET_GPR_U32(ctx, 31, 0x1A2574u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1A256Cu, 0x1A2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2574u;
label_1a2574:
    // 0x1a2574: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x1a2574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x1a2578: 0x8fa50288  lw          $a1, 0x288($sp)
    ctx->pc = 0x1a2578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1a257c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2580: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a2584: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x1A2584u;
    SET_GPR_U32(ctx, 31, 0x1A258Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1A2584u, 0x1A258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A258Cu;
label_1a258c:
    // 0x1a258c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a258cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2590: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a2590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2594: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1A2594u;
    SET_GPR_U32(ctx, 31, 0x1A259Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1A2594u, 0x1A259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A259Cu;
label_1a259c:
    // 0x1a259c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25a0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A25A0u;
    {
        const bool branch_taken_0x1a25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25a0) {
            ctx->pc = 0x1A2774u;
            goto label_1a2774;
        }
    }
    ctx->pc = 0x1A25A8u;
label_1a25a8:
    // 0x1a25a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a25ac: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a25b0: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1a25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1a25b4: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1a25b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1a25b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a25bc: 0x1082006a  beq         $a0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1A25BCu;
    {
        const bool branch_taken_0x1a25bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a25bc) {
            ctx->pc = 0x1A2768u;
            goto label_1a2768;
        }
    }
    ctx->pc = 0x1A25C4u;
    // 0x1a25c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a25c8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1a25cc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A25CCu;
    SET_GPR_U32(ctx, 31, 0x1A25D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A25CCu, 0x1A25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25D4u;
label_1a25d4:
    // 0x1a25d4: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1a25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x1a25d8: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x1a25d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1a25dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a25dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a25e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a25e4: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x1A25E4u;
    SET_GPR_U32(ctx, 31, 0x1A25ECu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x1A25E4u, 0x1A25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25ECu;
label_1a25ec:
    // 0x1a25ec: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a25f0: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1a25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1a25f4: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1a25f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a25f8: 0x24440128  addiu       $a0, $v0, 0x128
    ctx->pc = 0x1a25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x1a25fc: 0x27a50284  addiu       $a1, $sp, 0x284
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x1a2600: 0xc068d74  jal         func_1A35D0
    ctx->pc = 0x1A2600u;
    SET_GPR_U32(ctx, 31, 0x1A2608u);
    ctx->pc = 0x1A35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35D0u, 0x1A2600u, 0x1A2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2608u;
label_1a2608:
    // 0x1a2608: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a260c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1A260Cu;
    SET_GPR_U32(ctx, 31, 0x1A2614u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1A260Cu, 0x1A2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2614u;
label_1a2614:
    // 0x1a2614: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1a2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a2618: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a261c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1A261Cu;
    SET_GPR_U32(ctx, 31, 0x1A2624u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1A261Cu, 0x1A2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2624u;
label_1a2624:
    // 0x1a2624: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2628: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2628u;
    {
        const bool branch_taken_0x1a2628 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2628) {
            ctx->pc = 0x1A2640u;
            goto label_1a2640;
        }
    }
    ctx->pc = 0x1A2630u;
    // 0x1a2630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2634: 0xc069b54  jal         func_1A6D50
    ctx->pc = 0x1A2634u;
    SET_GPR_U32(ctx, 31, 0x1A263Cu);
    ctx->pc = 0x1A6D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D50u, 0x1A2634u, 0x1A263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A263Cu;
label_1a263c:
    // 0x1a263c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a263cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2640:
    // 0x1a2640: 0xafb40280  sw          $s4, 0x280($sp)
    ctx->pc = 0x1a2640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 20));
    // 0x1a2644: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1a2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1a2648: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x1a2648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1a264c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a264cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2650: 0xc069d58  jal         func_1A7560
    ctx->pc = 0x1A2650u;
    SET_GPR_U32(ctx, 31, 0x1A2658u);
    ctx->pc = 0x1A7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7560u, 0x1A2650u, 0x1A2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2658u;
label_1a2658:
    // 0x1a2658: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a265c: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a2660: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1a2664: 0xc068ca4  jal         func_1A3290
    ctx->pc = 0x1A2664u;
    SET_GPR_U32(ctx, 31, 0x1A266Cu);
    ctx->pc = 0x1A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3290u, 0x1A2664u, 0x1A266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A266Cu;
label_1a266c:
    // 0x1a266c: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1a266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1a2670: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a2674: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a2674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a2678: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A2678u;
    SET_GPR_U32(ctx, 31, 0x1A2680u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A2678u, 0x1A2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2680u;
label_1a2680:
    // 0x1a2680: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x1a2680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x1a2684: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2688: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1a2688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1a268c: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1a268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1a2690: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1a2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2694: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1a2694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2698: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1a2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a269c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1a269cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a26a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a26a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a26a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a26a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a26a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a26ac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1a26acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a26b0: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1a26b4: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A26B4u;
    {
        const bool branch_taken_0x1a26b4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a26b4) {
            ctx->pc = 0x1A26D4u;
            goto label_1a26d4;
        }
    }
    ctx->pc = 0x1A26BCu;
    // 0x1a26bc: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a26bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a26c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A26C0u;
    {
        const bool branch_taken_0x1a26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26c0) {
            ctx->pc = 0x1A26D4u;
            goto label_1a26d4;
        }
    }
    ctx->pc = 0x1A26C8u;
    // 0x1a26c8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a26c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a26cc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1a26d0: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_1a26d4:
    // 0x1a26d4: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a26d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a26d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A26D8u;
    {
        const bool branch_taken_0x1a26d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26d8) {
            ctx->pc = 0x1A26F8u;
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A26E0u;
    // 0x1a26e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a26e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a26e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a26e8: 0x0  nop
    ctx->pc = 0x1a26e8u;
    // NOP
    // 0x1a26ec: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x1a26ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x1a26f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A26F0u;
    {
        const bool branch_taken_0x1a26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26f0) {
            ctx->pc = 0x1A2704u;
            goto label_1a2704;
        }
    }
    ctx->pc = 0x1A26F8u;
label_1a26f8:
    // 0x1a26f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a26f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a26fc: 0x0  nop
    ctx->pc = 0x1a26fcu;
    // NOP
    // 0x1a2700: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x1a2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_1a2704:
    // 0x1a2704: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2708: 0xc44300d8  lwc1        $f3, 0xD8($v0)
    ctx->pc = 0x1a2708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a270c: 0xc7a2026c  lwc1        $f2, 0x26C($sp)
    ctx->pc = 0x1a270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2710: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x1a2710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2718: 0x0  nop
    ctx->pc = 0x1a2718u;
    // NOP
    // 0x1a271c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a271cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a2720: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a2720u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a2724: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x1a2724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x1a2728: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
    // 0x1a272c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1a272cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2730: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1a2730u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2734: 0x0  nop
    ctx->pc = 0x1a2734u;
    // NOP
    // 0x1a2738: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a2738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a273c: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x1a273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2744: 0x0  nop
    ctx->pc = 0x1a2744u;
    // NOP
    // 0x1a2748: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a2748u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a274c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1a274cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a2750: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x1a2750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x1a2754: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x1a2754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x1a2758: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a275c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1a275cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1a2760: 0xc090f14  jal         func_243C50
    ctx->pc = 0x1A2760u;
    SET_GPR_U32(ctx, 31, 0x1A2768u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x1A2760u, 0x1A2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2768u;
label_1a2768:
    // 0x1a2768: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a2768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a276c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a276cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a2770: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1a2770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2774:
    // 0x1a2774: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a2774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2778: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x1A2778u;
    SET_GPR_U32(ctx, 31, 0x1A2780u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1A2778u, 0x1A2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2780u;
label_1a2780:
    // 0x1a2780: 0x1662ff89  bne         $s3, $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x1A2780u;
    {
        const bool branch_taken_0x1a2780 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2780) {
            ctx->pc = 0x1A25A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25a8;
        }
    }
    ctx->pc = 0x1A2788u;
    // 0x1a2788: 0xc090864  jal         func_242190
    ctx->pc = 0x1A2788u;
    SET_GPR_U32(ctx, 31, 0x1A2790u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1A2788u, 0x1A2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2790u;
label_1a2790:
    // 0x1a2790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2794: 0xc0905a0  jal         func_241680
    ctx->pc = 0x1A2794u;
    SET_GPR_U32(ctx, 31, 0x1A279Cu);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x1A2794u, 0x1A279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A279Cu;
label_1a279c:
    // 0x1a279c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27a0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a27a4: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a27a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a27ac: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x1A27ACu;
    SET_GPR_U32(ctx, 31, 0x1A27B4u);
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A27ACu, 0x1A27B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27B4u;
label_1a27b4:
    // 0x1a27b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a27b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a27bc: 0x24a56560  addiu       $a1, $a1, 0x6560
    ctx->pc = 0x1a27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25952));
    // 0x1a27c0: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A27C0u;
    SET_GPR_U32(ctx, 31, 0x1A27C8u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A27C0u, 0x1A27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27C8u;
label_1a27c8:
    // 0x1a27c8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1a27c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1a27cc: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a27d0: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x1a27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x1a27d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a27d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27d8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A27D8u;
    SET_GPR_U32(ctx, 31, 0x1A27E0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A27D8u, 0x1A27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27E0u;
label_1a27e0:
    // 0x1a27e0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1a27e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1a27e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a27e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a27e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a27f0: 0x24a56580  addiu       $a1, $a1, 0x6580
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
    // 0x1a27f4: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A27F4u;
    SET_GPR_U32(ctx, 31, 0x1A27FCu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A27F4u, 0x1A27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27FCu;
label_1a27fc:
    // 0x1a27fc: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1a27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1a2800: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2804: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a280c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A280Cu;
    SET_GPR_U32(ctx, 31, 0x1A2814u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A280Cu, 0x1A2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2814u;
label_1a2814:
    // 0x1a2814: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x1a2814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a2818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a281c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2820: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2824: 0x24a565a0  addiu       $a1, $a1, 0x65A0
    ctx->pc = 0x1a2824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
    // 0x1a2828: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A2828u;
    SET_GPR_U32(ctx, 31, 0x1A2830u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A2828u, 0x1A2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2830u;
label_1a2830:
    // 0x1a2830: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1a2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1a2834: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2838: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a283c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2840: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2840u;
    SET_GPR_U32(ctx, 31, 0x1A2848u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2840u, 0x1A2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2848u;
label_1a2848:
    // 0x1a2848: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x1a2848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a284c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a284cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2854: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2858: 0x24a565c0  addiu       $a1, $a1, 0x65C0
    ctx->pc = 0x1a2858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    // 0x1a285c: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A285Cu;
    SET_GPR_U32(ctx, 31, 0x1A2864u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A285Cu, 0x1A2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2864u;
label_1a2864:
    // 0x1a2864: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1a2864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1a2868: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a286c: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2870: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a2870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2874: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2874u;
    SET_GPR_U32(ctx, 31, 0x1A287Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2874u, 0x1A287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A287Cu;
label_1a287c:
    // 0x1a287c: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x1a287cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a2880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2888: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a288c: 0x24a565e0  addiu       $a1, $a1, 0x65E0
    ctx->pc = 0x1a288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26080));
    // 0x1a2890: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A2890u;
    SET_GPR_U32(ctx, 31, 0x1A2898u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A2890u, 0x1A2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2898u;
label_1a2898:
    // 0x1a2898: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1a2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1a289c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a28a0: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a28a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a28a8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A28A8u;
    SET_GPR_U32(ctx, 31, 0x1A28B0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A28A8u, 0x1A28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28B0u;
label_1a28b0:
    // 0x1a28b0: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x1a28b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a28b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a28b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a28c0: 0x24a56600  addiu       $a1, $a1, 0x6600
    ctx->pc = 0x1a28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
    // 0x1a28c4: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A28C4u;
    SET_GPR_U32(ctx, 31, 0x1A28CCu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A28C4u, 0x1A28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28CCu;
label_1a28cc:
    // 0x1a28cc: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1a28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1a28d0: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a28d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a28d4: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x1a28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x1a28d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a28dc: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A28DCu;
    SET_GPR_U32(ctx, 31, 0x1A28E4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A28DCu, 0x1A28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E4u;
label_1a28e4:
    // 0x1a28e4: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1a28e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a28e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a28ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a28f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a28f4: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x1a28f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
    // 0x1a28f8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A28F8u;
    SET_GPR_U32(ctx, 31, 0x1A2900u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A28F8u, 0x1A2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2900u;
label_1a2900:
    // 0x1a2900: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1a2900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1a2904: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2908: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x1a290c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a2910: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2910u;
    SET_GPR_U32(ctx, 31, 0x1A2918u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2910u, 0x1A2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2918u;
label_1a2918:
    // 0x1a2918: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1a2918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a291c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a291cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2924: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2928: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x1a2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x1a292c: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A292Cu;
    SET_GPR_U32(ctx, 31, 0x1A2934u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A292Cu, 0x1A2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2934u;
label_1a2934:
    // 0x1a2934: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1a2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1a2938: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a293c: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2940: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2944: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2944u;
    SET_GPR_U32(ctx, 31, 0x1A294Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2944u, 0x1A294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A294Cu;
label_1a294c:
    // 0x1a294c: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1a294cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a2950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2958: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a295c: 0x24a56660  addiu       $a1, $a1, 0x6660
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26208));
    // 0x1a2960: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A2960u;
    SET_GPR_U32(ctx, 31, 0x1A2968u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A2960u, 0x1A2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2968u;
label_1a2968:
    // 0x1a2968: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1a2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1a296c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2970: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2974: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a2974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a2978: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2978u;
    SET_GPR_U32(ctx, 31, 0x1A2980u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2978u, 0x1A2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2980u;
label_1a2980:
    // 0x1a2980: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1a2980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a2984: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a298c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a298cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2990: 0x24a56680  addiu       $a1, $a1, 0x6680
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
    // 0x1a2994: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A2994u;
    SET_GPR_U32(ctx, 31, 0x1A299Cu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A2994u, 0x1A299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A299Cu;
label_1a299c:
    // 0x1a299c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1a299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1a29a0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a29a4: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a29a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a29ac: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A29ACu;
    SET_GPR_U32(ctx, 31, 0x1A29B4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A29ACu, 0x1A29B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29B4u;
label_1a29b4:
    // 0x1a29b4: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1a29b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a29b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29bc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a29c0: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a29c4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a29c8: 0xc056708  jal         func_159C20
    ctx->pc = 0x1A29C8u;
    SET_GPR_U32(ctx, 31, 0x1A29D0u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1A29C8u, 0x1A29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29D0u;
label_1a29d0:
    // 0x1a29d0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a29d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a29d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a29dc: 0x24a56698  addiu       $a1, $a1, 0x6698
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26264));
    // 0x1a29e0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A29E0u;
    SET_GPR_U32(ctx, 31, 0x1A29E8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A29E0u, 0x1A29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29E8u;
label_1a29e8:
    // 0x1a29e8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1a29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1a29ec: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a29f0: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a29f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a29f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A29F8u;
    SET_GPR_U32(ctx, 31, 0x1A2A00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A29F8u, 0x1A2A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A00u;
label_1a2a00:
    // 0x1a2a00: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1a2a00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a2a04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2a08: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2a0c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a2a10: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2a14: 0x24a566a8  addiu       $a1, $a1, 0x66A8
    ctx->pc = 0x1a2a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26280));
    // 0x1a2a18: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A2A18u;
    SET_GPR_U32(ctx, 31, 0x1A2A20u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A2A18u, 0x1A2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A20u;
label_1a2a20:
    // 0x1a2a20: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1a2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1a2a24: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2a28: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2a30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2A30u;
    SET_GPR_U32(ctx, 31, 0x1A2A38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2A30u, 0x1A2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A38u;
label_1a2a38:
    // 0x1a2a38: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1a2a38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a2a3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2a40: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2a44: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a2a48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2a4c: 0x24a566b8  addiu       $a1, $a1, 0x66B8
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26296));
    // 0x1a2a50: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A2A50u;
    SET_GPR_U32(ctx, 31, 0x1A2A58u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A2A50u, 0x1A2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A58u;
label_1a2a58:
    // 0x1a2a58: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1a2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1a2a5c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2a60: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2a64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2a68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2A68u;
    SET_GPR_U32(ctx, 31, 0x1A2A70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2A68u, 0x1A2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A70u;
label_1a2a70:
    // 0x1a2a70: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1a2a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a2a74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2a78: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a2a7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a2a80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2A80u;
    {
        const bool branch_taken_0x1a2a80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a2a80) {
            ctx->pc = 0x1A2A9Cu;
            goto label_1a2a9c;
        }
    }
    ctx->pc = 0x1A2A88u;
    // 0x1a2a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2a8c: 0x0  nop
    ctx->pc = 0x1a2a8cu;
    // NOP
    // 0x1a2a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2a94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2A94u;
    {
        const bool branch_taken_0x1a2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a94) {
            ctx->pc = 0x1A2AB8u;
            goto label_1a2ab8;
        }
    }
    ctx->pc = 0x1A2A9Cu;
label_1a2a9c:
    // 0x1a2a9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a2aa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a2aa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2aac: 0x0  nop
    ctx->pc = 0x1a2aacu;
    // NOP
    // 0x1a2ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2ab4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a2ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a2ab8:
    // 0x1a2ab8: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x1a2ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x1a2abc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a2ac0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a2ac4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2AC4u;
    {
        const bool branch_taken_0x1a2ac4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a2ac4) {
            ctx->pc = 0x1A2AE0u;
            goto label_1a2ae0;
        }
    }
    ctx->pc = 0x1A2ACCu;
    // 0x1a2acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2ad0: 0x0  nop
    ctx->pc = 0x1a2ad0u;
    // NOP
    // 0x1a2ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2ad8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2AD8u;
    {
        const bool branch_taken_0x1a2ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ad8) {
            ctx->pc = 0x1A2AFCu;
            goto label_1a2afc;
        }
    }
    ctx->pc = 0x1A2AE0u;
label_1a2ae0:
    // 0x1a2ae0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a2ae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a2ae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2af0: 0x0  nop
    ctx->pc = 0x1a2af0u;
    // NOP
    // 0x1a2af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2af8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a2af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a2afc:
    // 0x1a2afc: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x1a2afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x1a2b00: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b04: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2B04u;
    SET_GPR_U32(ctx, 31, 0x1A2B0Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2B04u, 0x1A2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B0Cu;
label_1a2b0c:
    // 0x1a2b0c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1a2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1a2b10: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b14: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b1c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B24u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2B1Cu, 0x1A2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B24u;
label_1a2b24:
    // 0x1a2b24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2b28: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1a2b28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a2b2c: 0x27a60258  addiu       $a2, $sp, 0x258
    ctx->pc = 0x1a2b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1a2b30: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1A2B30u;
    SET_GPR_U32(ctx, 31, 0x1A2B38u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1A2B30u, 0x1A2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B38u;
label_1a2b38:
    // 0x1a2b38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2b3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2b40: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x1a2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2b48: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b4c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1a2b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1a2b50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2b58: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1a2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2b60: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b64: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1a2b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1a2b68: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b6c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B74u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2B6Cu, 0x1A2B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B74u;
label_1a2b74:
    // 0x1a2b74: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1a2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1a2b78: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2b7c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2B84u;
    SET_GPR_U32(ctx, 31, 0x1A2B8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2B84u, 0x1A2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B8Cu;
label_1a2b8c:
    // 0x1a2b8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2b90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2b94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a2b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2b98: 0xc7a20258  lwc1        $f2, 0x258($sp)
    ctx->pc = 0x1a2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b9c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2ba0: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1a2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2ba8: 0x0  nop
    ctx->pc = 0x1a2ba8u;
    // NOP
    // 0x1a2bac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a2bacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a2bb0: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x1a2bb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a2bb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2bb8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a2bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2bbc: 0xc7a2025c  lwc1        $f2, 0x25C($sp)
    ctx->pc = 0x1a2bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bc0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2bc4: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1a2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2bcc: 0x0  nop
    ctx->pc = 0x1a2bccu;
    // NOP
    // 0x1a2bd0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a2bd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a2bd4: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x1a2bd4u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a2bd8: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1a2bd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a2bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2be0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1A2BE0u;
    SET_GPR_U32(ctx, 31, 0x1A2BE8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A2BE0u, 0x1A2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BE8u;
label_1a2be8:
    // 0x1a2be8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A2BECu;
    {
        const bool branch_taken_0x1a2bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bec) {
            ctx->pc = 0x1A2C80u;
            goto label_1a2c80;
        }
    }
    ctx->pc = 0x1A2BF4u;
label_1a2bf4:
    // 0x1a2bf4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1a2bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2bf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2bfc: 0x24a566c8  addiu       $a1, $a1, 0x66C8
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26312));
    // 0x1a2c00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a2c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c04: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1A2C04u;
    SET_GPR_U32(ctx, 31, 0x1A2C0Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1A2C04u, 0x1A2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C0Cu;
label_1a2c0c:
    // 0x1a2c0c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2c10: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a2c14: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1a2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2c18: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A2C18u;
    SET_GPR_U32(ctx, 31, 0x1A2C20u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A2C18u, 0x1A2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C20u;
label_1a2c20:
    // 0x1a2c20: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1a2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1a2c24: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2c28: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1a2c2c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2c30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2C30u;
    SET_GPR_U32(ctx, 31, 0x1A2C38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2C30u, 0x1A2C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C38u;
label_1a2c38:
    // 0x1a2c38: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1a2c38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2c3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2c40: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2c44: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2C44u;
    SET_GPR_U32(ctx, 31, 0x1A2C4Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2C44u, 0x1A2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C4Cu;
label_1a2c4c:
    // 0x1a2c4c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1a2c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1a2c50: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2c54: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x1a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1a2c58: 0x24c400dc  addiu       $a0, $a2, 0xDC
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 220));
    // 0x1a2c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c60: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2C60u;
    SET_GPR_U32(ctx, 31, 0x1A2C68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2C60u, 0x1A2C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C68u;
label_1a2c68:
    // 0x1a2c68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2c6c: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1a2c6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1a2c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c74: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2C74u;
    SET_GPR_U32(ctx, 31, 0x1A2C7Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2C74u, 0x1A2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a2c80:
    // 0x1a2c80: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a2c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a2c84: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A2C84u;
    {
        const bool branch_taken_0x1a2c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c84) {
            ctx->pc = 0x1A2BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2bf4;
        }
    }
    ctx->pc = 0x1A2C8Cu;
    // 0x1a2c8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A2C90u;
    {
        const bool branch_taken_0x1a2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c90) {
            ctx->pc = 0x1A2D24u;
            goto label_1a2d24;
        }
    }
    ctx->pc = 0x1A2C98u;
label_1a2c98:
    // 0x1a2c98: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2c9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2ca0: 0x24a566d8  addiu       $a1, $a1, 0x66D8
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26328));
    // 0x1a2ca4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ca8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1A2CA8u;
    SET_GPR_U32(ctx, 31, 0x1A2CB0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1A2CA8u, 0x1A2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CB0u;
label_1a2cb0:
    // 0x1a2cb0: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2cb4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1a2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1a2cb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2cbc: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1a2cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2cc0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A2CC0u;
    SET_GPR_U32(ctx, 31, 0x1A2CC8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A2CC0u, 0x1A2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CC8u;
label_1a2cc8:
    // 0x1a2cc8: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1a2cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1a2ccc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2cd0: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a2cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1a2cd4: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2cd8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2CD8u;
    SET_GPR_U32(ctx, 31, 0x1A2CE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2CD8u, 0x1A2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CE0u;
label_1a2ce0:
    // 0x1a2ce0: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x1a2ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1a2ce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a2ce8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2cec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2CECu;
    SET_GPR_U32(ctx, 31, 0x1A2CF4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2CECu, 0x1A2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CF4u;
label_1a2cf4:
    // 0x1a2cf4: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1a2cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1a2cf8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2cfc: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a2cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1a2d00: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2d04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2D04u;
    SET_GPR_U32(ctx, 31, 0x1A2D0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2D04u, 0x1A2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D0Cu;
label_1a2d0c:
    // 0x1a2d0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2d10: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x1a2d10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1a2d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d18: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2D18u;
    SET_GPR_U32(ctx, 31, 0x1A2D20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2D18u, 0x1A2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a2d24:
    // 0x1a2d24: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1a2d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a2d28: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A2D28u;
    {
        const bool branch_taken_0x1a2d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d28) {
            ctx->pc = 0x1A2C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2c98;
        }
    }
    ctx->pc = 0x1A2D30u;
    // 0x1a2d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d34: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A2D34u;
    {
        const bool branch_taken_0x1a2d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d34) {
            ctx->pc = 0x1A2DDCu;
            goto label_1a2ddc;
        }
    }
    ctx->pc = 0x1A2D3Cu;
label_1a2d3c:
    // 0x1a2d3c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1a2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2d40: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a2d44: 0x24a566e8  addiu       $a1, $a1, 0x66E8
    ctx->pc = 0x1a2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26344));
    // 0x1a2d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a2d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d4c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1A2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D54u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1A2D4Cu, 0x1A2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D54u;
label_1a2d54:
    // 0x1a2d54: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2d58: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a2d5c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1a2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1a2d60: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1A2D60u;
    SET_GPR_U32(ctx, 31, 0x1A2D68u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1A2D60u, 0x1A2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D68u;
label_1a2d68:
    // 0x1a2d68: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1a2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1a2d6c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2d70: 0x26020012  addiu       $v0, $s0, 0x12
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1a2d74: 0x248400dc  addiu       $a0, $a0, 0xDC
    ctx->pc = 0x1a2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x1a2d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d7c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D84u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2D7Cu, 0x1A2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D84u;
label_1a2d84:
    // 0x1a2d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d88: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1a2d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1a2d8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a2d90: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2D98u;
    SET_GPR_U32(ctx, 31, 0x1A2DA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2D98u, 0x1A2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DA0u;
label_1a2da0:
    // 0x1a2da0: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1a2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1a2da4: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2da8: 0x26020012  addiu       $v0, $s0, 0x12
    ctx->pc = 0x1a2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1a2dac: 0x248400dc  addiu       $a0, $a0, 0xDC
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x1a2db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2db4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2DB4u;
    SET_GPR_U32(ctx, 31, 0x1A2DBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2DB4u, 0x1A2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DBCu;
label_1a2dbc:
    // 0x1a2dbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2dc0: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x1a2dc0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1a2dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dc8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2DC8u;
    SET_GPR_U32(ctx, 31, 0x1A2DD0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2DC8u, 0x1A2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DD0u;
label_1a2dd0:
    // 0x1a2dd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dd4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1a2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a2dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ddc:
    // 0x1a2ddc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a2ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a2de0: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A2DE0u;
    {
        const bool branch_taken_0x1a2de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2de0) {
            ctx->pc = 0x1A2D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2d3c;
        }
    }
    ctx->pc = 0x1A2DE8u;
    // 0x1a2de8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2dec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2DECu;
    SET_GPR_U32(ctx, 31, 0x1A2DF4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2DECu, 0x1A2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DF4u;
label_1a2df4:
    // 0x1a2df4: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1a2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1a2df8: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2dfc: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2E04u;
    SET_GPR_U32(ctx, 31, 0x1A2E0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2E04u, 0x1A2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E0Cu;
label_1a2e0c:
    // 0x1a2e0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2e10: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x1a2e10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1a2e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e18: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2E18u;
    SET_GPR_U32(ctx, 31, 0x1A2E20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2E18u, 0x1A2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E20u;
label_1a2e20:
    // 0x1a2e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e24: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2E2Cu, 0x1A2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E34u;
label_1a2e34:
    // 0x1a2e34: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1a2e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1a2e38: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2e3c: 0x248500dc  addiu       $a1, $a0, 0xDC
    ctx->pc = 0x1a2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x1a2e40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A2E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A2E4Cu, 0x1A2E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E54u;
label_1a2e54:
    // 0x1a2e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2e5c: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x1a2e5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a2e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e68: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2E68u;
    SET_GPR_U32(ctx, 31, 0x1A2E70u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2E68u, 0x1A2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E70u;
label_1a2e70:
    // 0x1a2e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e74: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1A2E74u;
    {
        const bool branch_taken_0x1a2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e74) {
            ctx->pc = 0x1A3148u;
            goto label_1a3148;
        }
    }
    ctx->pc = 0x1A2E7Cu;
label_1a2e7c:
    // 0x1a2e7c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2e80: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a2e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e88: 0xc056144  jal         func_158510
    ctx->pc = 0x1A2E88u;
    SET_GPR_U32(ctx, 31, 0x1A2E90u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1A2E88u, 0x1A2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a2e90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A2E94u;
    {
        const bool branch_taken_0x1a2e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e94) {
            ctx->pc = 0x1A2ECCu;
            goto label_1a2ecc;
        }
    }
    ctx->pc = 0x1A2E9Cu;
label_1a2e9c:
    // 0x1a2e9c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2ea0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1A2EA0u;
    SET_GPR_U32(ctx, 31, 0x1A2EA8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A2EA0u, 0x1A2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EA8u;
label_1a2ea8:
    // 0x1a2ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2eac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a2eb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ebc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1A2EBCu;
    SET_GPR_U32(ctx, 31, 0x1A2EC4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A2EBCu, 0x1A2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EC4u;
label_1a2ec4:
    // 0x1a2ec4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1a2ec8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a2ec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ecc:
    // 0x1a2ecc: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2ed0: 0x24a200dc  addiu       $v0, $a1, 0xDC
    ctx->pc = 0x1a2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 220));
    // 0x1a2ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ed8: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x1A2ED8u;
    SET_GPR_U32(ctx, 31, 0x1A2EE0u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x1A2ED8u, 0x1A2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EE0u;
label_1a2ee0:
    // 0x1a2ee0: 0x16a2ffee  bne         $s5, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A2EE0u;
    {
        const bool branch_taken_0x1a2ee0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2ee0) {
            ctx->pc = 0x1A2E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e9c;
        }
    }
    ctx->pc = 0x1A2EE8u;
    // 0x1a2ee8: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a2eec: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1a2ef0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ef4: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x1A2EF4u;
    SET_GPR_U32(ctx, 31, 0x1A2EFCu);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x1A2EF4u, 0x1A2EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EFCu;
label_1a2efc:
    // 0x1a2efc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A2EFCu;
    {
        const bool branch_taken_0x1a2efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2efc) {
            ctx->pc = 0x1A2FC0u;
            goto label_1a2fc0;
        }
    }
    ctx->pc = 0x1A2F04u;
    // 0x1a2f04: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2f08: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f10: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2F10u;
    SET_GPR_U32(ctx, 31, 0x1A2F18u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2F10u, 0x1A2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F18u;
label_1a2f18:
    // 0x1a2f18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f1c: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x1A2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F24u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x1A2F1Cu, 0x1A2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F24u;
label_1a2f24:
    // 0x1a2f24: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a2f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1a2f28: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1a2f28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a2f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f30: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x1A2F30u;
    SET_GPR_U32(ctx, 31, 0x1A2F38u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x1A2F30u, 0x1A2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F38u;
label_1a2f38:
    // 0x1a2f38: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1a2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1a2f3c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1a2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1a2f40: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1a2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1a2f44: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A2F44u;
    SET_GPR_U32(ctx, 31, 0x1A2F4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A2F44u, 0x1A2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F4Cu;
label_1a2f4c:
    // 0x1a2f4c: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x1a2f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a2f50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2f54: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x1a2f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
    // 0x1a2f58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a2f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f5c: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x1A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F64u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x1A2F5Cu, 0x1A2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F64u;
label_1a2f64:
    // 0x1a2f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f68: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x1a2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x1a2f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f70: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x1A2F70u;
    SET_GPR_U32(ctx, 31, 0x1A2F78u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1A2F70u, 0x1A2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F78u;
label_1a2f78:
    // 0x1a2f78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a2f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f7c: 0x8fb00290  lw          $s0, 0x290($sp)
    ctx->pc = 0x1a2f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2f80: 0x2602011c  addiu       $v0, $s0, 0x11C
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x1a2f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f8c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F94u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A2F8Cu, 0x1A2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F94u;
label_1a2f94:
    // 0x1a2f94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f98: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x1a2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x1a2f9c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a2fa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2fa4: 0x27a50248  addiu       $a1, $sp, 0x248
    ctx->pc = 0x1a2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x1a2fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a2facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fb4: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x1A2FB4u;
    SET_GPR_U32(ctx, 31, 0x1A2FBCu);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x1A2FB4u, 0x1A2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FBCu;
label_1a2fbc:
    // 0x1a2fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fc0:
    // 0x1a2fc0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2fc4: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1a2fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1a2fc8: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1a2fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1a2fcc: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1a2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a2fd0: 0xc068454  jal         func_1A1150
    ctx->pc = 0x1A2FD0u;
    SET_GPR_U32(ctx, 31, 0x1A2FD8u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x1A2FD0u, 0x1A2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FD8u;
label_1a2fd8:
    // 0x1a2fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fdc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a2fe0: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a2fe4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fe8: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x1A2FE8u;
    SET_GPR_U32(ctx, 31, 0x1A2FF0u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A2FE8u, 0x1A2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FF0u;
label_1a2ff0:
    // 0x1a2ff0: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1a2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1a2ff4: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1a2ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a2ff8: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x1a2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x1a2ffc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a2ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3000: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1A3000u;
    {
        const bool branch_taken_0x1a3000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3000) {
            ctx->pc = 0x1A311Cu;
            goto label_1a311c;
        }
    }
    ctx->pc = 0x1A3008u;
label_1a3008:
    // 0x1a3008: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a300c: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a3010: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3014: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A3014u;
    SET_GPR_U32(ctx, 31, 0x1A301Cu);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3014u, 0x1A301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A301Cu;
label_1a301c:
    // 0x1a301c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a301cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3020: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3028: 0xc069d64  jal         func_1A7590
    ctx->pc = 0x1A3028u;
    SET_GPR_U32(ctx, 31, 0x1A3030u);
    ctx->pc = 0x1A7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7590u, 0x1A3028u, 0x1A3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3030u;
label_1a3030:
    // 0x1a3030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a3030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3034: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3038: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a303c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1a303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1a3040: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x1a3040u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a3044: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A3044u;
    SET_GPR_U32(ctx, 31, 0x1A304Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A3044u, 0x1A304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A304Cu;
label_1a304c:
    // 0x1a304c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a304cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3050: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3054: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x1A3054u;
    SET_GPR_U32(ctx, 31, 0x1A305Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1A3054u, 0x1A305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A305Cu;
label_1a305c:
    // 0x1a305c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3060: 0xc121cf4  jal         func_4873D0
    ctx->pc = 0x1A3060u;
    SET_GPR_U32(ctx, 31, 0x1A3068u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x1A3060u, 0x1A3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3068u;
label_1a3068:
    // 0x1a3068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a306c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a3070: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x1a3070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a3074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a307c: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A307Cu;
    SET_GPR_U32(ctx, 31, 0x1A3084u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A307Cu, 0x1A3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3084u;
label_1a3084:
    // 0x1a3084: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1a3084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1a3088: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1a3088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a308c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3090: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A3090u;
    {
        const bool branch_taken_0x1a3090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3090) {
            ctx->pc = 0x1A3114u;
            goto label_1a3114;
        }
    }
    ctx->pc = 0x1A3098u;
    // 0x1a3098: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1a3098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a309c: 0x24850134  addiu       $a1, $a0, 0x134
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 308));
    // 0x1a30a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a30a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a30a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30a8: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A30A8u;
    SET_GPR_U32(ctx, 31, 0x1A30B0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A30A8u, 0x1A30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30B0u;
label_1a30b0:
    // 0x1a30b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a30b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30b8: 0xc068c60  jal         func_1A3180
    ctx->pc = 0x1A30B8u;
    SET_GPR_U32(ctx, 31, 0x1A30C0u);
    ctx->pc = 0x1A3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3180u, 0x1A30B8u, 0x1A30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30C0u;
label_1a30c0:
    // 0x1a30c0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1a30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1a30c4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a30c8: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a30c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a30cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a30ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30d0: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A30D0u;
    SET_GPR_U32(ctx, 31, 0x1A30D8u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A30D0u, 0x1A30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30D8u;
label_1a30d8:
    // 0x1a30d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a30d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a30e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a30e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30e4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1A30E4u;
    SET_GPR_U32(ctx, 31, 0x1A30ECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1A30E4u, 0x1A30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30ECu;
label_1a30ec:
    // 0x1a30ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a30ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30f0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a30f4: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1a30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1a30f8: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1a30f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a30fc: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a3100: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3104: 0xc068c6c  jal         func_1A31B0
    ctx->pc = 0x1A3104u;
    SET_GPR_U32(ctx, 31, 0x1A310Cu);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3104u, 0x1A310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A310Cu;
label_1a310c:
    // 0x1a310c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a310cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3110: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a3110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1a3114:
    // 0x1a3114: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1a3114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a3118: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a311c:
    // 0x1a311c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1a3120: 0x242282b  sltu        $a1, $s2, $v0
    ctx->pc = 0x1a3120u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3124: 0x14a0ffb8  bnez        $a1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A3008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3008;
        }
    }
    ctx->pc = 0x1A312Cu;
    // 0x1a312c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a3130: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1a3130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1a3134: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1a3134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a3138: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a3138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1a313c: 0xc068ea8  jal         func_1A3AA0
    ctx->pc = 0x1A313Cu;
    SET_GPR_U32(ctx, 31, 0x1A3144u);
    ctx->pc = 0x1A3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AA0u, 0x1A313Cu, 0x1A3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3144u;
label_1a3144:
    // 0x1a3144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3148:
    // 0x1a3148: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a3148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a314c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a314cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a3150: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a3150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3154: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a3154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3158: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a3158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a315c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a315cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a316c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3170: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x1a3170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1a3174: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A317Cu;
    // 0x1a317c: 0x0  nop
    ctx->pc = 0x1a317cu;
    // NOP
    ctx->pc = 0x1a3180u;
}
