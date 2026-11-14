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

// Function: sub_003F2230
// Address: 0x3f2230 - 0x3f2538
void sub_003F2230_0x3f2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2230_0x3f2230");
#endif

    switch (ctx->pc) {
        case 0x3f22b0u: goto label_3f22b0;
        case 0x3f22b8u: goto label_3f22b8;
        case 0x3f22e0u: goto label_3f22e0;
        case 0x3f22f4u: goto label_3f22f4;
        case 0x3f2300u: goto label_3f2300;
        case 0x3f231cu: goto label_3f231c;
        case 0x3f2330u: goto label_3f2330;
        case 0x3f2364u: goto label_3f2364;
        case 0x3f23a4u: goto label_3f23a4;
        case 0x3f23b8u: goto label_3f23b8;
        case 0x3f23c8u: goto label_3f23c8;
        case 0x3f23f4u: goto label_3f23f4;
        case 0x3f2408u: goto label_3f2408;
        case 0x3f2414u: goto label_3f2414;
        case 0x3f242cu: goto label_3f242c;
        case 0x3f2484u: goto label_3f2484;
        case 0x3f24a0u: goto label_3f24a0;
        case 0x3f24b4u: goto label_3f24b4;
        case 0x3f24c4u: goto label_3f24c4;
        case 0x3f24d8u: goto label_3f24d8;
        case 0x3f24f4u: goto label_3f24f4;
        default: break;
    }

    ctx->pc = 0x3f2230u;

    // 0x3f2230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3f2234: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3f2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3f2238: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3f2238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3f223c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f223cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2240: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f2240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3f2244: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3f2244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2248: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3f2248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3f224c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3f224cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2250: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3f2250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3f2254: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3f2254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3f2258: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3f2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3f225c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3f225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3f2260: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3f2260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3f2264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2268: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3f2268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3f226c: 0x14a0009d  bnez        $a1, . + 4 + (0x9D << 2)
    ctx->pc = 0x3F226Cu;
    {
        const bool branch_taken_0x3f226c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F226Cu;
        // 0x3f2270: 0xafa90004  sw          $t1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f226c) {
            ctx->pc = 0x3F24E4u;
            goto label_3f24e4;
        }
    }
    ctx->pc = 0x3F2274u;
    // 0x3f2274: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x3f2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x3f2278: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x3f2278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x3f227c: 0x8e24015c  lw          $a0, 0x15C($s1)
    ctx->pc = 0x3f227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x3f2280: 0xf42823  subu        $a1, $a3, $s4
    ctx->pc = 0x3f2280u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x3f2284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f2284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2288: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x3f2288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x3f228c: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x3f228cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    // 0x3f2290: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3f2290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2294: 0xae240124  sw          $a0, 0x124($s1)
    ctx->pc = 0x3f2294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 4));
    // 0x3f2298: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3f2298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f229c: 0xae250114  sw          $a1, 0x114($s1)
    ctx->pc = 0x3f229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 5));
    // 0x3f22a0: 0x10a00071  beqz        $a1, . + 4 + (0x71 << 2)
    ctx->pc = 0x3F22A0u;
    {
        const bool branch_taken_0x3f22a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22A0u;
        // 0x3f22a4: 0x26370110  addiu       $s7, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22a0) {
            ctx->pc = 0x3F2468u;
            goto label_3f2468;
        }
    }
    ctx->pc = 0x3F22A8u;
    // 0x3f22a8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3f22a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f22ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f22acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f22b0:
    // 0x3f22b0: 0xc0f71f0  jal         func_3DC7C0
    ctx->pc = 0x3F22B0u;
    SET_GPR_U32(ctx, 31, 0x3F22B8u);
    ctx->pc = 0x3F22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22B0u;
    // 0x3f22b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC7C0u, 0x3F22B0u, 0x3F22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22B8u;
label_3f22b8:
    // 0x3f22b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3f22b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f22bc: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x3f22bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f22c0: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F22C0u;
    {
        const bool branch_taken_0x3f22c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f22c0) {
            ctx->pc = 0x3F22C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F22C0u;
            // 0x3f22c4: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F236Cu;
            goto label_3f236c;
        }
    }
    ctx->pc = 0x3F22C8u;
    // 0x3f22c8: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x3f22c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x3f22cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F22CCu;
    {
        const bool branch_taken_0x3f22cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22CCu;
        // 0x3f22d0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22cc) {
            ctx->pc = 0x3F22E8u;
            goto label_3f22e8;
        }
    }
    ctx->pc = 0x3F22D4u;
    // 0x3f22d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f22d8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F22D8u;
    SET_GPR_U32(ctx, 31, 0x3F22E0u);
    ctx->pc = 0x3F22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22D8u;
    // 0x3f22dc: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F22D8u, 0x3F22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22E0u;
label_3f22e0:
    // 0x3f22e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F22E0u;
    {
        const bool branch_taken_0x3f22e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f22e0) {
            ctx->pc = 0x3F22F8u;
            goto label_3f22f8;
        }
    }
    ctx->pc = 0x3F22E8u;
label_3f22e8:
    // 0x3f22e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f22e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f22ec: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F22ECu;
    SET_GPR_U32(ctx, 31, 0x3F22F4u);
    ctx->pc = 0x3F22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22ECu;
    // 0x3f22f0: 0x2445c568  addiu       $a1, $v0, -0x3A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F22ECu, 0x3F22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22F4u;
label_3f22f4:
    // 0x3f22f4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x3f22f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_3f22f8:
    // 0x3f22f8: 0xc0f73da  jal         func_3DCF68
    ctx->pc = 0x3F22F8u;
    SET_GPR_U32(ctx, 31, 0x3F2300u);
    ctx->pc = 0x3F22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22F8u;
    // 0x3f22fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCF68u, 0x3F22F8u, 0x3F2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2300u;
label_3f2300:
    // 0x3f2300: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3F2300u;
    {
        const bool branch_taken_0x3f2300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2300u;
        // 0x3f2304: 0xae200114  sw          $zero, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2300) {
            ctx->pc = 0x3F2330u;
            goto label_3f2330;
        }
    }
    ctx->pc = 0x3F2308u;
    // 0x3f2308: 0x26930020  addiu       $s3, $s4, 0x20
    ctx->pc = 0x3f2308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3f230c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2310: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x3f2310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3f2314: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F2314u;
    SET_GPR_U32(ctx, 31, 0x3F231Cu);
    ctx->pc = 0x3F2318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2314u;
    // 0x3f2318: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F2314u, 0x3F231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F231Cu;
label_3f231c:
    // 0x3f231c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f231cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2320: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f2320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2328: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F2328u;
    SET_GPR_U32(ctx, 31, 0x3F2330u);
    ctx->pc = 0x3F232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2328u;
    // 0x3f232c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F2328u, 0x3F2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2330u;
label_3f2330:
    // 0x3f2330: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3f2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2334: 0x2551023  subu        $v0, $s2, $s5
    ctx->pc = 0x3f2334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x3f2338: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x3f2338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3f233c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x3f233cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3f2340: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3f2340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f2344: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x3f2344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2348: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x3f2348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3f234c: 0x2605c568  addiu       $a1, $s0, -0x3A98
    ctx->pc = 0x3f234cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952296));
    // 0x3f2350: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x3f2350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3f2354: 0x2542021  addu        $a0, $s2, $s4
    ctx->pc = 0x3f2354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f2358: 0xc2980a  movz        $s3, $a2, $v0
    ctx->pc = 0x3f2358u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x3f235c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F235Cu;
    SET_GPR_U32(ctx, 31, 0x3F2364u);
    ctx->pc = 0x3F2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F235Cu;
    // 0x3f2360: 0x26660001  addiu       $a2, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F235Cu, 0x3F2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2364u;
label_3f2364:
    // 0x3f2364: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3F2364u;
    {
        const bool branch_taken_0x3f2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2364u;
        // 0x3f2368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2364) {
            ctx->pc = 0x3F246Cu;
            goto label_3f246c;
        }
    }
    ctx->pc = 0x3F236Cu;
label_3f236c:
    // 0x3f236c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F236Cu;
    {
        const bool branch_taken_0x3f236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f236c) {
            ctx->pc = 0x3F237Cu;
            goto label_3f237c;
        }
    }
    ctx->pc = 0x3F2374u;
    // 0x3f2374: 0x56de003a  bnel        $s6, $fp, . + 4 + (0x3A << 2)
    ctx->pc = 0x3F2374u;
    {
        const bool branch_taken_0x3f2374 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 30));
        if (branch_taken_0x3f2374) {
            ctx->pc = 0x3F2378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2374u;
            // 0x3f2378: 0x8e220114  lw          $v0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2460u;
            goto label_3f2460;
        }
    }
    ctx->pc = 0x3F237Cu;
label_3f237c:
    // 0x3f237c: 0x56400015  bnel        $s2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F237Cu;
    {
        const bool branch_taken_0x3f237c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f237c) {
            ctx->pc = 0x3F2380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F237Cu;
            // 0x3f2380: 0x8e25015c  lw          $a1, 0x15C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F23D4u;
            goto label_3f23d4;
        }
    }
    ctx->pc = 0x3F2384u;
    // 0x3f2384: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x3f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x3f2388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f238c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3f238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3f2390: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x3f2390u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f2394: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x3f2394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f2398: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3f2398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f239c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F239Cu;
    SET_GPR_U32(ctx, 31, 0x3F23A4u);
    ctx->pc = 0x3F23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F239Cu;
    // 0x3f23a0: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F239Cu, 0x3F23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23A4u;
label_3f23a4:
    // 0x3f23a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f23a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23a8: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x3f23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x3f23ac: 0x2542021  addu        $a0, $s2, $s4
    ctx->pc = 0x3f23acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f23b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F23B0u;
    SET_GPR_U32(ctx, 31, 0x3F23B8u);
    ctx->pc = 0x3F23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F23B0u;
    // 0x3f23b4: 0x2743023  subu        $a2, $s3, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F23B0u, 0x3F23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23B8u;
label_3f23b8:
    // 0x3f23b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f23b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f23bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23c0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F23C0u;
    SET_GPR_U32(ctx, 31, 0x3F23C8u);
    ctx->pc = 0x3F23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F23C0u;
    // 0x3f23c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F23C0u, 0x3F23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23C8u;
label_3f23c8:
    // 0x3f23c8: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x3f23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f23cc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F23CCu;
    {
        const bool branch_taken_0x3f23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23CCu;
        // 0x3f23d0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23cc) {
            ctx->pc = 0x3F2444u;
            goto label_3f2444;
        }
    }
    ctx->pc = 0x3F23D4u;
label_3f23d4:
    // 0x3f23d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f23d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23d8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3f23d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23dc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3f23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x3f23e0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3f23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3f23e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f23e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f23e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3f23e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f23ec: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F23ECu;
    SET_GPR_U32(ctx, 31, 0x3F23F4u);
    ctx->pc = 0x3F23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F23ECu;
    // 0x3f23f0: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F23ECu, 0x3F23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23F4u;
label_3f23f4:
    // 0x3f23f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f23f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f23f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f23fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2400: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F2400u;
    SET_GPR_U32(ctx, 31, 0x3F2408u);
    ctx->pc = 0x3F2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2400u;
    // 0x3f2404: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F2400u, 0x3F2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2408u;
label_3f2408:
    // 0x3f2408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f2408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f240c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F240Cu;
    SET_GPR_U32(ctx, 31, 0x3F2414u);
    ctx->pc = 0x3F2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F240Cu;
    // 0x3f2410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F240Cu, 0x3F2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2414u;
label_3f2414:
    // 0x3f2414: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x3f2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x3f2418: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x3f2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f241c: 0x8e260124  lw          $a2, 0x124($s1)
    ctx->pc = 0x3f241cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3f2420: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x3f2420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x3f2424: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F2424u;
    SET_GPR_U32(ctx, 31, 0x3F242Cu);
    ctx->pc = 0x3F2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2424u;
    // 0x3f2428: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F2424u, 0x3F242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F242Cu;
label_3f242c:
    // 0x3f242c: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x3f242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3f2430: 0x8e23015c  lw          $v1, 0x15C($s1)
    ctx->pc = 0x3f2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x3f2434: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3f2434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f2438: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x3f2438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3f243c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x3f243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f2440: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3f2440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f2444:
    // 0x3f2444: 0x12de001d  beq         $s6, $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F2444u;
    {
        const bool branch_taken_0x3f2444 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        if (branch_taken_0x3f2444) {
            ctx->pc = 0x3F24BCu;
            goto label_3f24bc;
        }
    }
    ctx->pc = 0x3F244Cu;
    // 0x3f244c: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x3f244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x3f2450: 0x8e23015c  lw          $v1, 0x15C($s1)
    ctx->pc = 0x3f2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x3f2454: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x3f2454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x3f2458: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x3f2458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
    // 0x3f245c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x3f245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_3f2460:
    // 0x3f2460: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x3F2460u;
    {
        const bool branch_taken_0x3f2460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2460u;
        // 0x3f2464: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2460) {
            ctx->pc = 0x3F22B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f22b0;
        }
    }
    ctx->pc = 0x3F2468u;
label_3f2468:
    // 0x3f2468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f246c:
    // 0x3f246c: 0x12c20013  beq         $s6, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F246Cu;
    {
        const bool branch_taken_0x3f246c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F246Cu;
        // 0x3f2470: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f246c) {
            ctx->pc = 0x3F24BCu;
            goto label_3f24bc;
        }
    }
    ctx->pc = 0x3F2474u;
    // 0x3f2474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2478: 0x24a5ea50  addiu       $a1, $a1, -0x15B0
    ctx->pc = 0x3f2478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961744));
    // 0x3f247c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F247Cu;
    SET_GPR_U32(ctx, 31, 0x3F2484u);
    ctx->pc = 0x3F2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F247Cu;
    // 0x3f2480: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F247Cu, 0x3F2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2484u;
label_3f2484:
    // 0x3f2484: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x3F2484u;
    {
        const bool branch_taken_0x3f2484 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2484u;
        // 0x3f2488: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2484) {
            ctx->pc = 0x3F24B8u;
            goto label_3f24b8;
        }
    }
    ctx->pc = 0x3F248Cu;
    // 0x3f248c: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x3f248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3f2490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2494: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3f2494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f2498: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F2498u;
    SET_GPR_U32(ctx, 31, 0x3F24A0u);
    ctx->pc = 0x3F249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2498u;
    // 0x3f249c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F2498u, 0x3F24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F24A0u;
label_3f24a0:
    // 0x3f24a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f24a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f24a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f24a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24ac: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3F24ACu;
    SET_GPR_U32(ctx, 31, 0x3F24B4u);
    ctx->pc = 0x3F24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F24ACu;
    // 0x3f24b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3F24ACu, 0x3F24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F24B4u;
label_3f24b4:
    // 0x3f24b4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x3f24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_3f24b8:
    // 0x3f24b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3f24b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f24bc:
    // 0x3f24bc: 0xc0f73da  jal         func_3DCF68
    ctx->pc = 0x3F24BCu;
    SET_GPR_U32(ctx, 31, 0x3F24C4u);
    ctx->pc = 0x3F24C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F24BCu;
    // 0x3f24c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCF68u, 0x3F24BCu, 0x3F24C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F24C4u;
label_3f24c4:
    // 0x3f24c4: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x3f24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
    // 0x3f24c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f24c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24d0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F24D0u;
    SET_GPR_U32(ctx, 31, 0x3F24D8u);
    ctx->pc = 0x3F24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F24D0u;
    // 0x3f24d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F24D0u, 0x3F24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F24D8u;
label_3f24d8:
    // 0x3f24d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3f24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f24dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F24DCu;
    {
        const bool branch_taken_0x3f24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24DCu;
        // 0x3f24e0: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24dc) {
            ctx->pc = 0x3F2504u;
            goto label_3f2504;
        }
    }
    ctx->pc = 0x3F24E4u;
label_3f24e4:
    // 0x3f24e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f24e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f24e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f24e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f24ec: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F24ECu;
    SET_GPR_U32(ctx, 31, 0x3F24F4u);
    ctx->pc = 0x3F24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F24ECu;
    // 0x3f24f0: 0x24a5ea90  addiu       $a1, $a1, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F24ECu, 0x3F24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F24F4u;
label_3f24f4:
    // 0x3f24f4: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x3f24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x3f24f8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3f24f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f24fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3f24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f2500: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x3f2500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_3f2504:
    // 0x3f2504: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3f2504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2508: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3f2508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f250c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3f250cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f2510: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3f2510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f2514: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3f2514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f2518: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3f2518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f251c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f251cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f2520: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3f2520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f2524: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3f2524u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f2528: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3f2528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f252c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2530: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2530u;
        // 0x3f2534: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2538u;
}
