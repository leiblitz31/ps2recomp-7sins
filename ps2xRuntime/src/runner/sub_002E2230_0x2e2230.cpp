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

// Function: sub_002E2230
// Address: 0x2e2230 - 0x2e26a0
void sub_002E2230_0x2e2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2230_0x2e2230");
#endif

    switch (ctx->pc) {
        case 0x2e2268u: goto label_2e2268;
        case 0x2e22a4u: goto label_2e22a4;
        case 0x2e22bcu: goto label_2e22bc;
        case 0x2e22d0u: goto label_2e22d0;
        case 0x2e22ecu: goto label_2e22ec;
        case 0x2e2308u: goto label_2e2308;
        case 0x2e2320u: goto label_2e2320;
        case 0x2e242cu: goto label_2e242c;
        case 0x2e243cu: goto label_2e243c;
        case 0x2e2458u: goto label_2e2458;
        case 0x2e2490u: goto label_2e2490;
        case 0x2e24a8u: goto label_2e24a8;
        case 0x2e24bcu: goto label_2e24bc;
        case 0x2e24d4u: goto label_2e24d4;
        case 0x2e24e8u: goto label_2e24e8;
        case 0x2e2504u: goto label_2e2504;
        case 0x2e2518u: goto label_2e2518;
        case 0x2e252cu: goto label_2e252c;
        case 0x2e2564u: goto label_2e2564;
        case 0x2e257cu: goto label_2e257c;
        case 0x2e2590u: goto label_2e2590;
        case 0x2e25c4u: goto label_2e25c4;
        case 0x2e25d8u: goto label_2e25d8;
        case 0x2e2614u: goto label_2e2614;
        case 0x2e2628u: goto label_2e2628;
        case 0x2e2664u: goto label_2e2664;
        case 0x2e2678u: goto label_2e2678;
        default: break;
    }

    ctx->pc = 0x2e2230u;

    // 0x2e2230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e2234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e2238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e2238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e223c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e2240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2248: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2e2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2e224c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2250: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2254: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2e2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2258: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2e2258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2e225c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x2e225cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e2260: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E2260u;
    SET_GPR_U32(ctx, 31, 0x2E2268u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E2260u, 0x2E2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2268u;
label_2e2268:
    // 0x2e2268: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e2268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e226c: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x2e226cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x2e2270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2274: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2e2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2e2278: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e227c: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x2e227cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x2e2280: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2284: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e2288: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e228c: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x2e228cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x2e2290: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2294: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2e2294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2e2298: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e2298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e229c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E229Cu;
    SET_GPR_U32(ctx, 31, 0x2E22A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E229Cu, 0x2E22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22A4u;
label_2e22a4:
    // 0x2e22a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e22a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22ac: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e22acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e22b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e22b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22b4: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E22B4u;
    SET_GPR_U32(ctx, 31, 0x2E22BCu);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E22B4u, 0x2E22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22BCu;
label_2e22bc:
    // 0x2e22bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e22c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e22c4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2e22c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e22c8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2E22C8u;
    {
        const bool branch_taken_0x2e22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e22c8) {
            ctx->pc = 0x2E2474u;
            goto label_2e2474;
        }
    }
    ctx->pc = 0x2E22D0u;
label_2e22d0:
    // 0x2e22d0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22d4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22d8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2e22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22dc: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2e22e0: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e22e4: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E22E4u;
    SET_GPR_U32(ctx, 31, 0x2E22ECu);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E22E4u, 0x2E22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22ECu;
label_2e22ec:
    // 0x2e22ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2e22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e22f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22f4: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x2e22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x2e22f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e22fc: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2e22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2300: 0xc0b81f4  jal         func_2E07D0
    ctx->pc = 0x2E2300u;
    SET_GPR_U32(ctx, 31, 0x2E2308u);
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E2300u, 0x2E2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2308u;
label_2e2308:
    // 0x2e2308: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e230c: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x2e230cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x2e2310: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2314: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2e2314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2318: 0xc0b81e8  jal         func_2E07A0
    ctx->pc = 0x2E2318u;
    SET_GPR_U32(ctx, 31, 0x2E2320u);
    ctx->pc = 0x2E07A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07A0u, 0x2E2318u, 0x2E2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2320u;
label_2e2320:
    // 0x2e2320: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2324: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2e2324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x2e2328: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e232c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2e232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2e2330: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2330u;
    {
        const bool branch_taken_0x2e2330 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e2330) {
            ctx->pc = 0x2E234Cu;
            goto label_2e234c;
        }
    }
    ctx->pc = 0x2E2338u;
    // 0x2e2338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e233c: 0x0  nop
    ctx->pc = 0x2e233cu;
    // NOP
    // 0x2e2340: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e2340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2344: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2344u;
    {
        const bool branch_taken_0x2e2344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2344) {
            ctx->pc = 0x2E2368u;
            goto label_2e2368;
        }
    }
    ctx->pc = 0x2E234Cu;
label_2e234c:
    // 0x2e234c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e2350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e2350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e2354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e2354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e235c: 0x0  nop
    ctx->pc = 0x2e235cu;
    // NOP
    // 0x2e2360: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e2360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2364: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e2364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e2368:
    // 0x2e2368: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e2368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e236c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2370: 0x0  nop
    ctx->pc = 0x2e2370u;
    // NOP
    // 0x2e2374: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2e2374u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2378: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e2378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e237c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e237cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2380: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2384: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x2e2384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e238c: 0x0  nop
    ctx->pc = 0x2e238cu;
    // NOP
    // 0x2e2390: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e2390u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2e2394: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e2394u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e2398: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e2398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e239c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e239cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23a0: 0x0  nop
    ctx->pc = 0x2e23a0u;
    // NOP
    // 0x2e23a4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2e23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e23a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e23ac: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e23b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E23B0u;
    {
        const bool branch_taken_0x2e23b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e23b0) {
            ctx->pc = 0x2E23CCu;
            goto label_2e23cc;
        }
    }
    ctx->pc = 0x2E23B8u;
    // 0x2e23b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e23b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23bc: 0x0  nop
    ctx->pc = 0x2e23bcu;
    // NOP
    // 0x2e23c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e23c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e23c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E23C4u;
    {
        const bool branch_taken_0x2e23c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23c4) {
            ctx->pc = 0x2E23E8u;
            goto label_2e23e8;
        }
    }
    ctx->pc = 0x2E23CCu;
label_2e23cc:
    // 0x2e23cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e23d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e23d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e23d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e23d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e23d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e23d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23dc: 0x0  nop
    ctx->pc = 0x2e23dcu;
    // NOP
    // 0x2e23e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e23e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e23e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e23e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e23e8:
    // 0x2e23e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e23ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e23ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23f0: 0x0  nop
    ctx->pc = 0x2e23f0u;
    // NOP
    // 0x2e23f4: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2e23f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e23f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e23fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e23fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2400: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2404: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2e2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e240c: 0x0  nop
    ctx->pc = 0x2e240cu;
    // NOP
    // 0x2e2410: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e2410u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2e2414: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e2414u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e2418: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2e2418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e241c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2420: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2e2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e2424: 0xc09381c  jal         func_24E070
    ctx->pc = 0x2E2424u;
    SET_GPR_U32(ctx, 31, 0x2E242Cu);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x2E2424u, 0x2E242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E242Cu;
label_2e242c:
    // 0x2e242c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2430: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2e2430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e2434: 0xc0b4880  jal         func_2D2200
    ctx->pc = 0x2E2434u;
    SET_GPR_U32(ctx, 31, 0x2E243Cu);
    ctx->pc = 0x2D2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2200u, 0x2E2434u, 0x2E243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E243Cu;
label_2e243c:
    // 0x2e243c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2440: 0x8c530094  lw          $s3, 0x94($v0)
    ctx->pc = 0x2e2440u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e2444: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2448: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e2448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e244c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e244cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2450: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E2450u;
    SET_GPR_U32(ctx, 31, 0x2E2458u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E2450u, 0x2E2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2458u;
label_2e2458:
    // 0x2e2458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e245c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2464: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2e2464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e2468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e2468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e246c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2470: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e2470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e2474:
    // 0x2e2474: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2e2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2478: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e247c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2480: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x2e2480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2e2484: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x2e2484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2e2488: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E2488u;
    SET_GPR_U32(ctx, 31, 0x2E2490u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E2488u, 0x2E2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2490u;
label_2e2490:
    // 0x2e2490: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e2490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e2494: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2E2494u;
    {
        const bool branch_taken_0x2e2494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2494) {
            ctx->pc = 0x2E22D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e22d0;
        }
    }
    ctx->pc = 0x2E249Cu;
    // 0x2e249c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24a0: 0xc0b89a8  jal         func_2E26A0
    ctx->pc = 0x2E24A0u;
    SET_GPR_U32(ctx, 31, 0x2E24A8u);
    ctx->pc = 0x2E26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E26A0u, 0x2E24A0u, 0x2E24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24A8u;
label_2e24a8:
    // 0x2e24a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E24A8u;
    {
        const bool branch_taken_0x2e24a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e24a8) {
            ctx->pc = 0x2E24F0u;
            goto label_2e24f0;
        }
    }
    ctx->pc = 0x2E24B0u;
    // 0x2e24b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24b4: 0xc0b537c  jal         func_2D4DF0
    ctx->pc = 0x2E24B4u;
    SET_GPR_U32(ctx, 31, 0x2E24BCu);
    ctx->pc = 0x2D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DF0u, 0x2E24B4u, 0x2E24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24BCu;
label_2e24bc:
    // 0x2e24bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e24bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e24c4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e24c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e24c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24cc: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E24CCu;
    SET_GPR_U32(ctx, 31, 0x2E24D4u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E24CCu, 0x2E24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24D4u;
label_2e24d4:
    // 0x2e24d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e24d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e24d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24dc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2e24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e24e0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2E24E0u;
    SET_GPR_U32(ctx, 31, 0x2E24E8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2E24E0u, 0x2E24E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24E8u;
label_2e24e8:
    // 0x2e24e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E24E8u;
    {
        const bool branch_taken_0x2e24e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24e8) {
            ctx->pc = 0x2E2518u;
            goto label_2e2518;
        }
    }
    ctx->pc = 0x2E24F0u;
label_2e24f0:
    // 0x2e24f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e24f4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e24f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e24f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24fc: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E24FCu;
    SET_GPR_U32(ctx, 31, 0x2E2504u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E24FCu, 0x2E2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2504u;
label_2e2504:
    // 0x2e2504: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e250c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2e250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e2510: 0xc0b4880  jal         func_2D2200
    ctx->pc = 0x2E2510u;
    SET_GPR_U32(ctx, 31, 0x2E2518u);
    ctx->pc = 0x2D2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2200u, 0x2E2510u, 0x2E2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2518u;
label_2e2518:
    // 0x2e2518: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e251c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e2520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2524: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E2524u;
    SET_GPR_U32(ctx, 31, 0x2E252Cu);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E2524u, 0x2E252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E252Cu;
label_2e252c:
    // 0x2e252c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2530: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2e2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e2534: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e2538: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e253c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2540: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2544: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2e2544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e2548: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e2548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e254c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e254cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e2550: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2554: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e2558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e255c: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E255Cu;
    SET_GPR_U32(ctx, 31, 0x2E2564u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E255Cu, 0x2E2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2564u;
label_2e2564:
    // 0x2e2564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2568: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2e2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e256c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2e256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2e2570: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e2570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e2574: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E2574u;
    SET_GPR_U32(ctx, 31, 0x2E257Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E2574u, 0x2E257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E257Cu;
label_2e257c:
    // 0x2e257c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e257cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2584: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e2588: 0xc0b3f84  jal         func_2CFE10
    ctx->pc = 0x2E2588u;
    SET_GPR_U32(ctx, 31, 0x2E2590u);
    ctx->pc = 0x2CFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE10u, 0x2E2588u, 0x2E2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2590u;
label_2e2590:
    // 0x2e2590: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e2590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e2594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2598: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e2598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e259c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e259cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e25a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e25a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e25a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e25a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e25a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e25ac: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2e25acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e25b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e25b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e25b4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e25b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e25b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e25b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25bc: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2E25BCu;
    SET_GPR_U32(ctx, 31, 0x2E25C4u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2E25BCu, 0x2E25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25C4u;
label_2e25c4:
    // 0x2e25c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e25c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e25c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25cc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e25ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e25d0: 0xc0b531c  jal         func_2D4C70
    ctx->pc = 0x2E25D0u;
    SET_GPR_U32(ctx, 31, 0x2E25D8u);
    ctx->pc = 0x2D4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C70u, 0x2E25D0u, 0x2E25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E25D8u;
label_2e25d8:
    // 0x2e25d8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e25dc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e25dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e25e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e25e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e25e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e25e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e25e8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e25ec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2e25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e25f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e25f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e25f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e25f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e25f8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2e25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e25fc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2e25fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2600: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2604: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e2604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e2608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e260c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2E260Cu;
    SET_GPR_U32(ctx, 31, 0x2E2614u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2E260Cu, 0x2E2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2614u;
label_2e2614:
    // 0x2e2614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2618: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e261c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2620: 0xc0b531c  jal         func_2D4C70
    ctx->pc = 0x2E2620u;
    SET_GPR_U32(ctx, 31, 0x2E2628u);
    ctx->pc = 0x2D4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C70u, 0x2E2620u, 0x2E2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2628u;
label_2e2628:
    // 0x2e2628: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2e2628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e262c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2634: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e2634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e2638: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e263c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2e263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2640: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2644: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e2644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e2648: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2e2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e264c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2e264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2654: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e2654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e2658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e265c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2E265Cu;
    SET_GPR_U32(ctx, 31, 0x2E2664u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2E265Cu, 0x2E2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2664u;
label_2e2664:
    // 0x2e2664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e266c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2670: 0xc0b531c  jal         func_2D4C70
    ctx->pc = 0x2E2670u;
    SET_GPR_U32(ctx, 31, 0x2E2678u);
    ctx->pc = 0x2D4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C70u, 0x2E2670u, 0x2E2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2678u;
label_2e2678:
    // 0x2e2678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e267c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e267cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e268c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e2690: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2698u;
    // 0x2e2698: 0x0  nop
    ctx->pc = 0x2e2698u;
    // NOP
    // 0x2e269c: 0x0  nop
    ctx->pc = 0x2e269cu;
    // NOP
    ctx->pc = 0x2e26a0u;
}
