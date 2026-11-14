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

// Function: sub_002B21C0
// Address: 0x2b21c0 - 0x2b23f0
void sub_002B21C0_0x2b21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B21C0_0x2b21c0");
#endif

    switch (ctx->pc) {
        case 0x2b221cu: goto label_2b221c;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b23a4u: goto label_2b23a4;
        default: break;
    }

    ctx->pc = 0x2b21c0u;

    // 0x2b21c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2b21c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b21c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2b21cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2b21d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b21d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b21d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b21d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b21d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b21dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b21e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b21e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b21e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b21e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b21ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b21ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b21f0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2b21f4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2b21f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b21f8: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B21F8u;
    {
        const bool branch_taken_0x2b21f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b21f8) {
            ctx->pc = 0x2B220Cu;
            goto label_2b220c;
        }
    }
    ctx->pc = 0x2B2200u;
    // 0x2b2200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2204: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2B2204u;
    {
        const bool branch_taken_0x2b2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2204) {
            ctx->pc = 0x2B23B8u;
            goto label_2b23b8;
        }
    }
    ctx->pc = 0x2B220Cu;
label_2b220c:
    // 0x2b220c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2210: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b2210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b2214: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B2214u;
    SET_GPR_U32(ctx, 31, 0x2B221Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2214u, 0x2B221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B221Cu;
label_2b221c:
    // 0x2b221c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b221cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2220: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2220u;
    {
        const bool branch_taken_0x2b2220 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2220) {
            ctx->pc = 0x2B2234u;
            goto label_2b2234;
        }
    }
    ctx->pc = 0x2B2228u;
    // 0x2b2228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b222c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2B222Cu;
    {
        const bool branch_taken_0x2b222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b222c) {
            ctx->pc = 0x2B23B8u;
            goto label_2b23b8;
        }
    }
    ctx->pc = 0x2B2234u;
label_2b2234:
    // 0x2b2234: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2b2238: 0x2463df80  addiu       $v1, $v1, -0x2080
    ctx->pc = 0x2b2238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958976));
    // 0x2b223c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2b223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b2240: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2b2240u;
    { uint32_t bits = FAST_READ32(0x4EDF80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2244: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2b2244u;
    { uint32_t bits = FAST_READ32(0x4EDF84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2248: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b2248u;
    { uint32_t bits = FAST_READ32(0x4EDF88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b224c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2b224cu;
    { uint32_t bits = FAST_READ32(0x4EDF8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2250: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2b2250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b2254: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2b2254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b2258: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b2258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b225c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2b225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b2260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2264: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2B2264u;
    {
        const bool branch_taken_0x2b2264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2264) {
            ctx->pc = 0x2B23A8u;
            goto label_2b23a8;
        }
    }
    ctx->pc = 0x2B226Cu;
label_2b226c:
    // 0x2b226c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b226cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b2270: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b2274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2278: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x2b2278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2b227c: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2B227Cu;
    SET_GPR_U32(ctx, 31, 0x2B2284u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2B227Cu, 0x2B2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2284u;
label_2b2284:
    // 0x2b2284: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b2284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b2288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b228c: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2B228Cu;
    SET_GPR_U32(ctx, 31, 0x2B2294u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2B228Cu, 0x2B2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2294u;
label_2b2294:
    // 0x2b2294: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2B2294u;
    {
        const bool branch_taken_0x2b2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2294) {
            ctx->pc = 0x2B23A4u;
            goto label_2b23a4;
        }
    }
    ctx->pc = 0x2B229Cu;
    // 0x2b229c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b22a0: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2B22A0u;
    SET_GPR_U32(ctx, 31, 0x2B22A8u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2B22A0u, 0x2B22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B22A8u;
label_2b22a8:
    // 0x2b22a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b22a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b22ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b22b0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B22B0u;
    {
        const bool branch_taken_0x2b22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b22b0) {
            ctx->pc = 0x2B23A4u;
            goto label_2b23a4;
        }
    }
    ctx->pc = 0x2B22B8u;
    // 0x2b22b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b22bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b22c0: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x2b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2b22c4: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B22C4u;
    {
        const bool branch_taken_0x2b22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b22c4) {
            ctx->pc = 0x2B23A4u;
            goto label_2b23a4;
        }
    }
    ctx->pc = 0x2B22CCu;
    // 0x2b22cc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2b22ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b22d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b22d4: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2B22D4u;
    SET_GPR_U32(ctx, 31, 0x2B22DCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2B22D4u, 0x2B22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B22DCu;
label_2b22dc:
    // 0x2b22dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b22e0: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B22E0u;
    {
        const bool branch_taken_0x2b22e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b22e0) {
            ctx->pc = 0x2B23A4u;
            goto label_2b23a4;
        }
    }
    ctx->pc = 0x2B22E8u;
    // 0x2b22e8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2b22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2b22ec: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b22ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b22f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b22f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b22f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B22F8u;
    SET_GPR_U32(ctx, 31, 0x2B2300u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B22F8u, 0x2B2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2300u;
label_2b2300:
    // 0x2b2300: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b2300u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2304: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b2304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b2308: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x2B2308u;
    SET_GPR_U32(ctx, 31, 0x2B2310u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x2B2308u, 0x2B2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2310u;
label_2b2310:
    // 0x2b2310: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b2310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2314: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2b2318: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b231c: 0xc09bc24  jal         func_26F090
    ctx->pc = 0x2B231Cu;
    SET_GPR_U32(ctx, 31, 0x2B2324u);
    ctx->pc = 0x26F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F090u, 0x2B231Cu, 0x2B2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2324u;
label_2b2324:
    // 0x2b2324: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b2328: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2B2328u;
    SET_GPR_U32(ctx, 31, 0x2B2330u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2B2328u, 0x2B2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2330u;
label_2b2330:
    // 0x2b2330: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B2330u;
    {
        const bool branch_taken_0x2b2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2330) {
            ctx->pc = 0x2B2394u;
            goto label_2b2394;
        }
    }
    ctx->pc = 0x2B2338u;
    // 0x2b2338: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b2338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b233c: 0xc041a60  jal         func_106980
    ctx->pc = 0x2B233Cu;
    SET_GPR_U32(ctx, 31, 0x2B2344u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2B233Cu, 0x2B2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2344u;
label_2b2344:
    // 0x2b2344: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b2344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2348: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
    // 0x2b234c: 0x2786a490  addiu       $a2, $gp, -0x5B70
    ctx->pc = 0x2b234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943888));
    // 0x2b2350: 0xc041a50  jal         func_106940
    ctx->pc = 0x2B2350u;
    SET_GPR_U32(ctx, 31, 0x2B2358u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2B2350u, 0x2B2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2358u;
label_2b2358:
    // 0x2b2358: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2b2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b235c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2360: 0xc040304  jal         func_100C10
    ctx->pc = 0x2B2360u;
    SET_GPR_U32(ctx, 31, 0x2B2368u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2B2360u, 0x2B2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2368u;
label_2b2368:
    // 0x2b2368: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b236c: 0x2785a494  addiu       $a1, $gp, -0x5B6C
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943892));
    // 0x2b2370: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2B2370u;
    SET_GPR_U32(ctx, 31, 0x2B2378u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2B2370u, 0x2B2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2378u;
label_2b2378:
    // 0x2b2378: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2378u;
    {
        const bool branch_taken_0x2b2378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2378) {
            ctx->pc = 0x2B2384u;
            goto label_2b2384;
        }
    }
    ctx->pc = 0x2B2380u;
    // 0x2b2380: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x2b2380u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b2384:
    // 0x2b2384: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2b2384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b2388: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b2388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b238c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2B238Cu;
    SET_GPR_U32(ctx, 31, 0x2B2394u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2B238Cu, 0x2B2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2394u;
label_2b2394:
    // 0x2b2394: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b2394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b2398: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b239c: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x2B239Cu;
    SET_GPR_U32(ctx, 31, 0x2B23A4u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x2B239Cu, 0x2B23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23A4u;
label_2b23a4:
    // 0x2b23a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b23a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b23a8:
    // 0x2b23a8: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x2b23a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b23ac: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2B23ACu;
    {
        const bool branch_taken_0x2b23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b23ac) {
            ctx->pc = 0x2B226Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b226c;
        }
    }
    ctx->pc = 0x2B23B4u;
    // 0x2b23b4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2b23b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b23b8:
    // 0x2b23b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b23b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b23bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b23bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b23c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b23c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b23c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b23c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b23c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b23c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b23cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b23ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b23d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b23d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b23d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b23d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b23d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b23d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b23dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b23dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b23e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2b23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B23E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B23ECu;
    // 0x2b23ec: 0x0  nop
    ctx->pc = 0x2b23ecu;
    // NOP
    ctx->pc = 0x2b23f0u;
}
