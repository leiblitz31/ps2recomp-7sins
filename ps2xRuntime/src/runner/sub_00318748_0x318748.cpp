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

// Function: sub_00318748
// Address: 0x318748 - 0x318980
void sub_00318748_0x318748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318748_0x318748");
#endif

    switch (ctx->pc) {
        case 0x318748u: goto label_318748;
        case 0x31874cu: goto label_31874c;
        case 0x318750u: goto label_318750;
        case 0x318754u: goto label_318754;
        case 0x318758u: goto label_318758;
        case 0x31875cu: goto label_31875c;
        case 0x318760u: goto label_318760;
        case 0x318764u: goto label_318764;
        case 0x318768u: goto label_318768;
        case 0x31876cu: goto label_31876c;
        case 0x318770u: goto label_318770;
        case 0x318774u: goto label_318774;
        case 0x318778u: goto label_318778;
        case 0x31877cu: goto label_31877c;
        case 0x318780u: goto label_318780;
        case 0x318784u: goto label_318784;
        case 0x318788u: goto label_318788;
        case 0x31878cu: goto label_31878c;
        case 0x318790u: goto label_318790;
        case 0x318794u: goto label_318794;
        case 0x318798u: goto label_318798;
        case 0x31879cu: goto label_31879c;
        case 0x3187a0u: goto label_3187a0;
        case 0x3187a4u: goto label_3187a4;
        case 0x3187a8u: goto label_3187a8;
        case 0x3187acu: goto label_3187ac;
        case 0x3187b0u: goto label_3187b0;
        case 0x3187b4u: goto label_3187b4;
        case 0x3187b8u: goto label_3187b8;
        case 0x3187bcu: goto label_3187bc;
        case 0x3187c0u: goto label_3187c0;
        case 0x3187c4u: goto label_3187c4;
        case 0x3187c8u: goto label_3187c8;
        case 0x3187ccu: goto label_3187cc;
        case 0x3187d0u: goto label_3187d0;
        case 0x3187d4u: goto label_3187d4;
        case 0x3187d8u: goto label_3187d8;
        case 0x3187dcu: goto label_3187dc;
        case 0x3187e0u: goto label_3187e0;
        case 0x3187e4u: goto label_3187e4;
        case 0x3187e8u: goto label_3187e8;
        case 0x3187ecu: goto label_3187ec;
        case 0x3187f0u: goto label_3187f0;
        case 0x3187f4u: goto label_3187f4;
        case 0x3187f8u: goto label_3187f8;
        case 0x3187fcu: goto label_3187fc;
        case 0x318800u: goto label_318800;
        case 0x318804u: goto label_318804;
        case 0x318808u: goto label_318808;
        case 0x31880cu: goto label_31880c;
        case 0x318810u: goto label_318810;
        case 0x318814u: goto label_318814;
        case 0x318818u: goto label_318818;
        case 0x31881cu: goto label_31881c;
        case 0x318820u: goto label_318820;
        case 0x318824u: goto label_318824;
        case 0x318828u: goto label_318828;
        case 0x31882cu: goto label_31882c;
        case 0x318830u: goto label_318830;
        case 0x318834u: goto label_318834;
        case 0x318838u: goto label_318838;
        case 0x31883cu: goto label_31883c;
        case 0x318840u: goto label_318840;
        case 0x318844u: goto label_318844;
        case 0x318848u: goto label_318848;
        case 0x31884cu: goto label_31884c;
        case 0x318850u: goto label_318850;
        case 0x318854u: goto label_318854;
        case 0x318858u: goto label_318858;
        case 0x31885cu: goto label_31885c;
        case 0x318860u: goto label_318860;
        case 0x318864u: goto label_318864;
        case 0x318868u: goto label_318868;
        case 0x31886cu: goto label_31886c;
        case 0x318870u: goto label_318870;
        case 0x318874u: goto label_318874;
        case 0x318878u: goto label_318878;
        case 0x31887cu: goto label_31887c;
        case 0x318880u: goto label_318880;
        case 0x318884u: goto label_318884;
        case 0x318888u: goto label_318888;
        case 0x31888cu: goto label_31888c;
        case 0x318890u: goto label_318890;
        case 0x318894u: goto label_318894;
        case 0x318898u: goto label_318898;
        case 0x31889cu: goto label_31889c;
        case 0x3188a0u: goto label_3188a0;
        case 0x3188a4u: goto label_3188a4;
        case 0x3188a8u: goto label_3188a8;
        case 0x3188acu: goto label_3188ac;
        case 0x3188b0u: goto label_3188b0;
        case 0x3188b4u: goto label_3188b4;
        case 0x3188b8u: goto label_3188b8;
        case 0x3188bcu: goto label_3188bc;
        case 0x3188c0u: goto label_3188c0;
        case 0x3188c4u: goto label_3188c4;
        case 0x3188c8u: goto label_3188c8;
        case 0x3188ccu: goto label_3188cc;
        case 0x3188d0u: goto label_3188d0;
        case 0x3188d4u: goto label_3188d4;
        case 0x3188d8u: goto label_3188d8;
        case 0x3188dcu: goto label_3188dc;
        case 0x3188e0u: goto label_3188e0;
        case 0x3188e4u: goto label_3188e4;
        case 0x3188e8u: goto label_3188e8;
        case 0x3188ecu: goto label_3188ec;
        case 0x3188f0u: goto label_3188f0;
        case 0x3188f4u: goto label_3188f4;
        case 0x3188f8u: goto label_3188f8;
        case 0x3188fcu: goto label_3188fc;
        case 0x318900u: goto label_318900;
        case 0x318904u: goto label_318904;
        case 0x318908u: goto label_318908;
        case 0x31890cu: goto label_31890c;
        case 0x318910u: goto label_318910;
        case 0x318914u: goto label_318914;
        case 0x318918u: goto label_318918;
        case 0x31891cu: goto label_31891c;
        case 0x318920u: goto label_318920;
        case 0x318924u: goto label_318924;
        case 0x318928u: goto label_318928;
        case 0x31892cu: goto label_31892c;
        case 0x318930u: goto label_318930;
        case 0x318934u: goto label_318934;
        case 0x318938u: goto label_318938;
        case 0x31893cu: goto label_31893c;
        case 0x318940u: goto label_318940;
        case 0x318944u: goto label_318944;
        case 0x318948u: goto label_318948;
        case 0x31894cu: goto label_31894c;
        case 0x318950u: goto label_318950;
        case 0x318954u: goto label_318954;
        case 0x318958u: goto label_318958;
        case 0x31895cu: goto label_31895c;
        case 0x318960u: goto label_318960;
        case 0x318964u: goto label_318964;
        case 0x318968u: goto label_318968;
        case 0x31896cu: goto label_31896c;
        case 0x318970u: goto label_318970;
        case 0x318974u: goto label_318974;
        case 0x318978u: goto label_318978;
        case 0x31897cu: goto label_31897c;
        default: break;
    }

    ctx->pc = 0x318748u;

label_318748:
    // 0x318748: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_31874c:
    // 0x31874c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x31874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_318750:
    // 0x318750: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x318750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_318754:
    // 0x318754: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x318754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318758:
    // 0x318758: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x318758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_31875c:
    // 0x31875c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31875cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_318760:
    // 0x318760: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x318760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_318764:
    // 0x318764: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x318764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_318768:
    // 0x318768: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x318768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_31876c:
    // 0x31876c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x31876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_318770:
    // 0x318770: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x318770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_318774:
    // 0x318774: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x318774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_318778:
    // 0x318778: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x318778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_31877c:
    // 0x31877c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_318780:
    // 0x318780: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x318780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_318784:
    // 0x318784: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x318784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_318788:
    // 0x318788: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x318788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_31878c:
    // 0x31878c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x31878cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_318790:
    // 0x318790: 0x8ec3005c  lw          $v1, 0x5C($s6)
    ctx->pc = 0x318790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
label_318794:
    // 0x318794: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x318794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_318798:
    // 0x318798: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x318798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_31879c:
    // 0x31879c: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_3187a0:
    if (ctx->pc == 0x3187A0u) {
        ctx->pc = 0x3187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31879Cu;
        // 0x3187a0: 0x8c750014  lw          $s5, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187A4u;
        goto label_3187a4;
    }
    ctx->pc = 0x31879Cu;
    {
        const bool branch_taken_0x31879c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31879Cu;
        // 0x3187a0: 0x8c750014  lw          $s5, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31879c) {
            ctx->pc = 0x318944u;
            goto label_318944;
        }
    }
    ctx->pc = 0x3187A4u;
label_3187a4:
    // 0x3187a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3187a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3187a8:
    // 0x3187a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3187a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3187ac:
    // 0x3187ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3187b0:
    // 0x3187b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3187b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3187b4:
    // 0x3187b4: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x3187b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3187b8:
    // 0x3187b8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3187b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3187bc:
    // 0x3187bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3187bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3187c0:
    // 0x3187c0: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x3187c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3187c4:
    // 0x3187c4: 0x5e3018  mult        $a2, $v0, $fp
    ctx->pc = 0x3187c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3187c8:
    // 0x3187c8: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x3187c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_3187cc:
    // 0x3187cc: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x3187ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3187d0:
    // 0x3187d0: 0xd58021  addu        $s0, $a2, $s5
    ctx->pc = 0x3187d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_3187d4:
    // 0x3187d4: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x3187d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3187d8:
    // 0x3187d8: 0xbe1018  mult        $v0, $a1, $fp
    ctx->pc = 0x3187d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3187dc:
    // 0x3187dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3187dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3187e0:
    // 0x3187e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3187e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3187e4:
    // 0x3187e4: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3187e8:
    // 0x3187e8: 0xc0f172c  jal         func_3C5CB0
label_3187ec:
    if (ctx->pc == 0x3187ECu) {
        ctx->pc = 0x3187ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187E8u;
        // 0x3187ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187F0u;
        goto label_3187f0;
    }
    ctx->pc = 0x3187E8u;
    SET_GPR_U32(ctx, 31, 0x3187F0u);
    ctx->pc = 0x3187ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187E8u;
    // 0x3187ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CB0u, 0x3187E8u, 0x3187F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187F0u;
label_3187f0:
    // 0x3187f0: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_3187f4:
    if (ctx->pc == 0x3187F4u) {
        ctx->pc = 0x3187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3187F0u;
        // 0x3187f4: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3187F8u;
        goto label_3187f8;
    }
    ctx->pc = 0x3187F0u;
    {
        const bool branch_taken_0x3187f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3187f0) {
            ctx->pc = 0x3187F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3187F0u;
            // 0x3187f4: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318934u;
            goto label_318934;
        }
    }
    ctx->pc = 0x3187F8u;
label_3187f8:
    // 0x3187f8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x3187f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3187fc:
    // 0x3187fc: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x3187fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_318800:
    // 0x318800: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_318804:
    // 0x318804: 0xb3a30013  sdl         $v1, 0x13($sp)
    ctx->pc = 0x318804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_318808:
    // 0x318808: 0xb7a3000c  sdr         $v1, 0xC($sp)
    ctx->pc = 0x318808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31880c:
    // 0x31880c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x31880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_318810:
    // 0x318810: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x318810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
label_318814:
    // 0x318814: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x318814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
label_318818:
    // 0x318818: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x318818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_31881c:
    // 0x31881c: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x31881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_318820:
    // 0x318820: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x318820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_318824:
    // 0x318824: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318828:
    // 0x318828: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x318828u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_31882c:
    // 0x31882c: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x31882cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_318830:
    // 0x318830: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318834:
    // 0x318834: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x318834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_318838:
    // 0x318838: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x318838u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31883c:
    // 0x31883c: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x31883cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_318840:
    // 0x318840: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x318840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_318844:
    // 0x318844: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x318844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318848:
    // 0x318848: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x318848u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_31884c:
    // 0x31884c: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x31884cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_318850:
    // 0x318850: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x318850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318854:
    // 0x318854: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318858:
    // 0x318858: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318858u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31885c:
    // 0x31885c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x31885cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_318860:
    // 0x318860: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318864:
    // 0x318864: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x318864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318868:
    // 0x318868: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x318868u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31886c:
    // 0x31886c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x31886cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_318870:
    // 0x318870: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x318870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318874:
    // 0x318874: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x318874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318878:
    // 0x318878: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31887c:
    // 0x31887c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x31887cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_318880:
    // 0x318880: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x318880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_318884:
    // 0x318884: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x318884u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_318888:
    // 0x318888: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x318888u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_31888c:
    // 0x31888c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x31888cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_318890:
    // 0x318890: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x318890u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_318894:
    // 0x318894: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x318894u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_318898:
    // 0x318898: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x318898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_31889c:
    // 0x31889c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x31889cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3188a0:
    // 0x3188a0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3188a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3188a4:
    // 0x3188a4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3188a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3188a8:
    // 0x3188a8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3188a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3188ac:
    // 0x3188ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3188acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3188b0:
    // 0x3188b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3188b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3188b4:
    // 0x3188b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3188b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3188b8:
    // 0x3188b8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3188b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3188bc:
    // 0x3188bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3188bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3188c0:
    // 0x3188c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3188c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3188c4:
    // 0x3188c4: 0x46000004  c1          0x4
    ctx->pc = 0x3188c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3188c8:
    // 0x3188c8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3188c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3188cc:
    // 0x3188cc: 0x0  nop
    ctx->pc = 0x3188ccu;
    // NOP
label_3188d0:
    // 0x3188d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3188d4:
    if (ctx->pc == 0x3188D4u) {
        ctx->pc = 0x3188D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D0u;
        // 0x3188d4: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188D8u;
        goto label_3188d8;
    }
    ctx->pc = 0x3188D0u;
    {
        const bool branch_taken_0x3188d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3188D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D0u;
        // 0x3188d4: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188d0) {
            ctx->pc = 0x3188E8u;
            goto label_3188e8;
        }
    }
    ctx->pc = 0x3188D8u;
label_3188d8:
    // 0x3188d8: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x3188d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3188dc:
    // 0x3188dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3188e0:
    if (ctx->pc == 0x3188E0u) {
        ctx->pc = 0x3188E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188DCu;
        // 0x3188e0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3188E4u;
        goto label_3188e4;
    }
    ctx->pc = 0x3188DCu;
    {
        const bool branch_taken_0x3188dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3188E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188DCu;
        // 0x3188e0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188dc) {
            ctx->pc = 0x3188F0u;
            goto label_3188f0;
        }
    }
    ctx->pc = 0x3188E4u;
label_3188e4:
    // 0x3188e4: 0x0  nop
    ctx->pc = 0x3188e4u;
    // NOP
label_3188e8:
    // 0x3188e8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3188e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3188ec:
    // 0x3188ec: 0x0  nop
    ctx->pc = 0x3188ecu;
    // NOP
label_3188f0:
    // 0x3188f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3188f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3188f4:
    // 0x3188f4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3188f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3188f8:
    // 0x3188f8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3188f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_3188fc:
    // 0x3188fc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3188fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_318900:
    // 0x318900: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x318900u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_318904:
    // 0x318904: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x318904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_318908:
    // 0x318908: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x318908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31890c:
    // 0x31890c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x31890cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_318910:
    // 0x318910: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x318910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_318914:
    // 0x318914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x318914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318918:
    // 0x318918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x318918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31891c:
    // 0x31891c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x31891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_318920:
    // 0x318920: 0x60f809  jalr        $v1
label_318924:
    if (ctx->pc == 0x318924u) {
        ctx->pc = 0x318924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318920u;
        // 0x318924: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318928u;
        goto label_318928;
    }
    ctx->pc = 0x318920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x318928u);
        ctx->pc = 0x318924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318920u;
        // 0x318924: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318920u, 0x318928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318928u;
label_318928:
    // 0x318928: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31892c:
    if (ctx->pc == 0x31892Cu) {
        ctx->pc = 0x31892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318928u;
        // 0x31892c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318930u;
        goto label_318930;
    }
    ctx->pc = 0x318928u;
    {
        const bool branch_taken_0x318928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318928u;
        // 0x31892c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318928) {
            ctx->pc = 0x318948u;
            goto label_318948;
        }
    }
    ctx->pc = 0x318930u;
label_318930:
    // 0x318930: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_318934:
    // 0x318934: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_318938:
    // 0x318938: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x318938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31893c:
    // 0x31893c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_318940:
    if (ctx->pc == 0x318940u) {
        ctx->pc = 0x318940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31893Cu;
        // 0x318940: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318944u;
        goto label_318944;
    }
    ctx->pc = 0x31893Cu;
    {
        const bool branch_taken_0x31893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31893Cu;
        // 0x318940: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31893c) {
            ctx->pc = 0x3187B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3187b8;
        }
    }
    ctx->pc = 0x318944u;
label_318944:
    // 0x318944: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x318944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_318948:
    // 0x318948: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x318948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_31894c:
    // 0x31894c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x31894cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_318950:
    // 0x318950: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x318950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_318954:
    // 0x318954: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x318954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_318958:
    // 0x318958: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x318958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31895c:
    // 0x31895c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x31895cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_318960:
    // 0x318960: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x318960u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_318964:
    // 0x318964: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x318964u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_318968:
    // 0x318968: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x318968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31896c:
    // 0x31896c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x31896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_318970:
    // 0x318970: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x318970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_318974:
    // 0x318974: 0x3e00008  jr          $ra
label_318978:
    if (ctx->pc == 0x318978u) {
        ctx->pc = 0x318978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318974u;
        // 0x318978: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31897Cu;
        goto label_31897c;
    }
    ctx->pc = 0x318974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318974u;
        // 0x318978: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31897Cu;
label_31897c:
    // 0x31897c: 0x0  nop
    ctx->pc = 0x31897cu;
    // NOP
    ctx->pc = 0x318980u;
}
