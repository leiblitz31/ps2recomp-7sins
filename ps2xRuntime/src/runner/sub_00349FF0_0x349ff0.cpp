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

// Function: sub_00349FF0
// Address: 0x349ff0 - 0x34cc70
void sub_00349FF0_0x349ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349FF0_0x349ff0");
#endif

    switch (ctx->pc) {
        case 0x34a03cu: goto label_34a03c;
        case 0x34a65cu: goto label_34a65c;
        case 0x34a6a4u: goto label_34a6a4;
        case 0x34a6c8u: goto label_34a6c8;
        case 0x34a6ecu: goto label_34a6ec;
        case 0x34a7c0u: goto label_34a7c0;
        case 0x34a854u: goto label_34a854;
        case 0x34a878u: goto label_34a878;
        case 0x34a95cu: goto label_34a95c;
        case 0x34a980u: goto label_34a980;
        case 0x34a9b4u: goto label_34a9b4;
        case 0x34aa90u: goto label_34aa90;
        case 0x34acccu: goto label_34accc;
        case 0x34acf0u: goto label_34acf0;
        case 0x34ada8u: goto label_34ada8;
        case 0x34add0u: goto label_34add0;
        case 0x34ae24u: goto label_34ae24;
        case 0x34ae90u: goto label_34ae90;
        case 0x34afacu: goto label_34afac;
        case 0x34b054u: goto label_34b054;
        case 0x34b12cu: goto label_34b12c;
        case 0x34b278u: goto label_34b278;
        case 0x34b2ccu: goto label_34b2cc;
        case 0x34b384u: goto label_34b384;
        case 0x34b490u: goto label_34b490;
        case 0x34b4b8u: goto label_34b4b8;
        case 0x34b4ecu: goto label_34b4ec;
        case 0x34b5c4u: goto label_34b5c4;
        case 0x34b77cu: goto label_34b77c;
        case 0x34b7a0u: goto label_34b7a0;
        case 0x34b858u: goto label_34b858;
        case 0x34b880u: goto label_34b880;
        case 0x34b8d4u: goto label_34b8d4;
        case 0x34b940u: goto label_34b940;
        case 0x34ba34u: goto label_34ba34;
        case 0x34bb40u: goto label_34bb40;
        case 0x34bb68u: goto label_34bb68;
        case 0x34bba4u: goto label_34bba4;
        case 0x34bc1cu: goto label_34bc1c;
        case 0x34bd14u: goto label_34bd14;
        case 0x34bd38u: goto label_34bd38;
        case 0x34bdf0u: goto label_34bdf0;
        case 0x34be18u: goto label_34be18;
        case 0x34be6cu: goto label_34be6c;
        case 0x34bed8u: goto label_34bed8;
        case 0x34bff4u: goto label_34bff4;
        case 0x34c0a8u: goto label_34c0a8;
        case 0x34c0d0u: goto label_34c0d0;
        case 0x34c1bcu: goto label_34c1bc;
        case 0x34c2a4u: goto label_34c2a4;
        case 0x34c458u: goto label_34c458;
        case 0x34c4e0u: goto label_34c4e0;
        case 0x34c618u: goto label_34c618;
        case 0x34c694u: goto label_34c694;
        case 0x34c7f0u: goto label_34c7f0;
        case 0x34c84cu: goto label_34c84c;
        case 0x34c894u: goto label_34c894;
        case 0x34c8c0u: goto label_34c8c0;
        case 0x34c8fcu: goto label_34c8fc;
        case 0x34c9c4u: goto label_34c9c4;
        case 0x34cc38u: goto label_34cc38;
        default: break;
    }

    ctx->pc = 0x349ff0u;

    // 0x349ff0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x349ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x349ff4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x349ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x349ff8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x349ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x349ffc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x349ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x34a000: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34a000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a004: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x34a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x34a008: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x34a008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x34a00c: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x34a010: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x34a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x34a014: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x34a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x34a018: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x34a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x34a01c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x34a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x34a020: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x34a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x34a024: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x34a024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x34a028: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x34a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x34a02c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x34a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x34a030: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a034: 0xc10a450  jal         func_429140
    ctx->pc = 0x34A034u;
    SET_GPR_U32(ctx, 31, 0x34A03Cu);
    ctx->pc = 0x34A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A034u;
    // 0x34a038: 0x36103e60  ori         $s0, $s0, 0x3E60 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15968);
    ctx->in_delay_slot = false;
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x34A034u, 0x34A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A03Cu;
label_34a03c:
    // 0x34a03c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x34a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34a040: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x34a040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x34a044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a048: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x34a048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a04c: 0x34633d70  ori         $v1, $v1, 0x3D70
    ctx->pc = 0x34a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15728);
    // 0x34a050: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x34a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x34a054: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x34a054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x34a058: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x34a058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C360u));
    // 0x34a05c: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x34a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C370u));
    // 0x34a060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x34a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x34a064: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A064u;
    {
        const bool branch_taken_0x34a064 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A064u;
        // 0x34a068: 0xc34821  addu        $t1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a064) {
            ctx->pc = 0x34A07Cu;
            goto label_34a07c;
        }
    }
    ctx->pc = 0x34A06Cu;
    // 0x34a06c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x34a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x34a070: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x34a070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x34a074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A074u;
    {
        const bool branch_taken_0x34a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A074u;
        // 0x34a078: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a074) {
            ctx->pc = 0x34A080u;
            goto label_34a080;
        }
    }
    ctx->pc = 0x34A07Cu;
label_34a07c:
    // 0x34a07c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34a080:
    // 0x34a080: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a084: 0xac223e78  sw          $v0, 0x3E78($at)
    ctx->pc = 0x34a084u;
    runtime->Store32(rdram, ctx, 0x70003E78u, GPR_U32(ctx, 2)); // MMIO: 0x70003e78
    // 0x34a088: 0x24a2c2c8  addiu       $v0, $a1, -0x3D38
    ctx->pc = 0x34a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x34a08c: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x34a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x34a090: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34A090u;
    {
        const bool branch_taken_0x34a090 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A090u;
        // 0x34a094: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a090) {
            ctx->pc = 0x34A0C0u;
            goto label_34a0c0;
        }
    }
    ctx->pc = 0x34A098u;
    // 0x34a098: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34a09c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x34a09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34a0a0: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x34a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x34a0a4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x34a0a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34a0a8: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x34a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x34a0ac: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x34a0acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34a0b0: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x34a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x34a0b4: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x34a0b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x34a0b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34A0B8u;
    {
        const bool branch_taken_0x34a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0B8u;
        // 0x34a0bc: 0x7e0300b0  sq          $v1, 0xB0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0b8) {
            ctx->pc = 0x34A130u;
            goto label_34a130;
        }
    }
    ctx->pc = 0x34A0C0u;
label_34a0c0:
    // 0x34a0c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a0c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34a0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a0c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a0cc: 0x34423ee0  ori         $v0, $v0, 0x3EE0
    ctx->pc = 0x34a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16096);
    // 0x34a0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a0d4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x34a0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F08u, bits); }
    // 0x34a0d8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x34a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x34a0dc: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x34a0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EF4u, bits); }
    // 0x34a0e0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x34a0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x34a0e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a0e8: 0xe4213ee0  swc1        $f1, 0x3EE0($at)
    ctx->pc = 0x34a0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EE0u, bits); }
    // 0x34a0ec: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EF0u, bits); }
    // 0x34a0f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EE8u, bits); }
    // 0x34a0f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a0f8: 0xe4203ee4  swc1        $f0, 0x3EE4($at)
    ctx->pc = 0x34a0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EE4u, bits); }
    // 0x34a0fc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x34a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F04u, bits); }
    // 0x34a100: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x34a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F00u, bits); }
    // 0x34a104: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a108: 0x8c633eec  lw          $v1, 0x3EEC($v1)
    ctx->pc = 0x34a108u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003EECu)); // MMIO: 0x70003eec
    // 0x34a10c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a110: 0xe4203ef8  swc1        $f0, 0x3EF8($at)
    ctx->pc = 0x34a110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EF8u, bits); }
    // 0x34a114: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x34a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34a118: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x34a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F14u, bits); }
    // 0x34a11c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x34a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F18u, bits); }
    // 0x34a120: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a124: 0xe4203f10  swc1        $f0, 0x3F10($at)
    ctx->pc = 0x34a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F10u, bits); }
    // 0x34a128: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a12c: 0xac233eec  sw          $v1, 0x3EEC($at)
    ctx->pc = 0x34a12cu;
    runtime->Store32(rdram, ctx, 0x70003EECu, GPR_U32(ctx, 3)); // MMIO: 0x70003eec
label_34a130:
    // 0x34a130: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a134: 0xac203ed0  sw          $zero, 0x3ED0($at)
    ctx->pc = 0x34a134u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 0)); // MMIO: 0x70003ed0
    // 0x34a138: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x34a138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a13c: 0x110000d7  beqz        $t0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x34A13Cu;
    {
        const bool branch_taken_0x34a13c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A13Cu;
        // 0x34a140: 0x8fbe0000  lw          $fp, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a13c) {
            ctx->pc = 0x34A49Cu;
            goto label_34a49c;
        }
    }
    ctx->pc = 0x34A144u;
    // 0x34a144: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a148: 0xac203ed4  sw          $zero, 0x3ED4($at)
    ctx->pc = 0x34a148u;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 0)); // MMIO: 0x70003ed4
    // 0x34a14c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a150: 0xac203f24  sw          $zero, 0x3F24($at)
    ctx->pc = 0x34a150u;
    runtime->Store32(rdram, ctx, 0x70003F24u, GPR_U32(ctx, 0)); // MMIO: 0x70003f24
    // 0x34a154: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a158: 0xac203f40  sw          $zero, 0x3F40($at)
    ctx->pc = 0x34a158u;
    runtime->Store32(rdram, ctx, 0x70003F40u, GPR_U32(ctx, 0)); // MMIO: 0x70003f40
    // 0x34a15c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x34a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34a160: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a164: 0xac203f44  sw          $zero, 0x3F44($at)
    ctx->pc = 0x34a164u;
    runtime->Store32(rdram, ctx, 0x70003F44u, GPR_U32(ctx, 0)); // MMIO: 0x70003f44
    // 0x34a168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34a16c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34A16Cu;
    {
        const bool branch_taken_0x34a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A16Cu;
        // 0x34a170: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a16c) {
            ctx->pc = 0x34A1C8u;
            goto label_34a1c8;
        }
    }
    ctx->pc = 0x34A174u;
    // 0x34a174: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x34a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x34a178: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x34a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x34a17c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a180: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x34a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x34a184: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a188: 0xac243f40  sw          $a0, 0x3F40($at)
    ctx->pc = 0x34a188u;
    runtime->Store32(rdram, ctx, 0x70003F40u, GPR_U32(ctx, 4)); // MMIO: 0x70003f40
    // 0x34a18c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34a190: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a194: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a198: 0xac223f44  sw          $v0, 0x3F44($at)
    ctx->pc = 0x34a198u;
    runtime->Store32(rdram, ctx, 0x70003F44u, GPR_U32(ctx, 2)); // MMIO: 0x70003f44
    // 0x34a19c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A19Cu;
    {
        const bool branch_taken_0x34a19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a19c) {
            ctx->pc = 0x34A1B4u;
            goto label_34a1b4;
        }
    }
    ctx->pc = 0x34A1A4u;
    // 0x34a1a4: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x34a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x34a1a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a1ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1b0: 0xac233f24  sw          $v1, 0x3F24($at)
    ctx->pc = 0x34a1b0u;
    runtime->Store32(rdram, ctx, 0x70003F24u, GPR_U32(ctx, 3)); // MMIO: 0x70003f24
label_34a1b4:
    // 0x34a1b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1b8: 0x8c423f24  lw          $v0, 0x3F24($v0)
    ctx->pc = 0x34a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34a1bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a1c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1c4: 0xac223ed0  sw          $v0, 0x3ED0($at)
    ctx->pc = 0x34a1c4u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed0
label_34a1c8:
    // 0x34a1c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1cc: 0xac203f28  sw          $zero, 0x3F28($at)
    ctx->pc = 0x34a1ccu;
    runtime->Store32(rdram, ctx, 0x70003F28u, GPR_U32(ctx, 0)); // MMIO: 0x70003f28
    // 0x34a1d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1d4: 0xac203f48  sw          $zero, 0x3F48($at)
    ctx->pc = 0x34a1d4u;
    runtime->Store32(rdram, ctx, 0x70003F48u, GPR_U32(ctx, 0)); // MMIO: 0x70003f48
    // 0x34a1d8: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x34a1d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a1dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a1e0: 0xac203f4c  sw          $zero, 0x3F4C($at)
    ctx->pc = 0x34a1e0u;
    runtime->Store32(rdram, ctx, 0x70003F4Cu, GPR_U32(ctx, 0)); // MMIO: 0x70003f4c
    // 0x34a1e4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x34a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34a1e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34a1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34a1ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34A1ECu;
    {
        const bool branch_taken_0x34a1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1ECu;
        // 0x34a1f0: 0x73080  sll         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1ec) {
            ctx->pc = 0x34A264u;
            goto label_34a264;
        }
    }
    ctx->pc = 0x34A1F4u;
    // 0x34a1f4: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x34a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x34a1f8: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x34a1fc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a200: 0x8d640010  lw          $a0, 0x10($t3)
    ctx->pc = 0x34a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x34a204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a208: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34a20c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x34a20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x34a210: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a214: 0xac253f48  sw          $a1, 0x3F48($at)
    ctx->pc = 0x34a214u;
    runtime->Store32(rdram, ctx, 0x70003F48u, GPR_U32(ctx, 5)); // MMIO: 0x70003f48
    // 0x34a218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a21c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a220: 0xac223f4c  sw          $v0, 0x3F4C($at)
    ctx->pc = 0x34a220u;
    runtime->Store32(rdram, ctx, 0x70003F4Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f4c
    // 0x34a224: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A224u;
    {
        const bool branch_taken_0x34a224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a224) {
            ctx->pc = 0x34A240u;
            goto label_34a240;
        }
    }
    ctx->pc = 0x34A22Cu;
    // 0x34a22c: 0x8d620024  lw          $v0, 0x24($t3)
    ctx->pc = 0x34a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x34a230: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a238: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a23c: 0xac233f28  sw          $v1, 0x3F28($at)
    ctx->pc = 0x34a23cu;
    runtime->Store32(rdram, ctx, 0x70003F28u, GPR_U32(ctx, 3)); // MMIO: 0x70003f28
label_34a240:
    // 0x34a240: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a244: 0x8c633f28  lw          $v1, 0x3F28($v1)
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34a248: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a24c: 0x8c423ed0  lw          $v0, 0x3ED0($v0)
    ctx->pc = 0x34a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34a250: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34a250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34a254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A254u;
    {
        const bool branch_taken_0x34a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A254u;
        // 0x34a258: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a254) {
            ctx->pc = 0x34A264u;
            goto label_34a264;
        }
    }
    ctx->pc = 0x34A25Cu;
    // 0x34a25c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a260: 0xac233ed0  sw          $v1, 0x3ED0($at)
    ctx->pc = 0x34a260u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 3)); // MMIO: 0x70003ed0
label_34a264:
    // 0x34a264: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a268: 0xac203f30  sw          $zero, 0x3F30($at)
    ctx->pc = 0x34a268u;
    runtime->Store32(rdram, ctx, 0x70003F30u, GPR_U32(ctx, 0)); // MMIO: 0x70003f30
    // 0x34a26c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a270: 0xac203f58  sw          $zero, 0x3F58($at)
    ctx->pc = 0x34a270u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 0)); // MMIO: 0x70003f58
    // 0x34a274: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a278: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a27c: 0xac203f5c  sw          $zero, 0x3F5C($at)
    ctx->pc = 0x34a27cu;
    runtime->Store32(rdram, ctx, 0x70003F5Cu, GPR_U32(ctx, 0)); // MMIO: 0x70003f5c
    // 0x34a280: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x34a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34a284: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34a288: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34A288u;
    {
        const bool branch_taken_0x34a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A288u;
        // 0x34a28c: 0x73080  sll         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a288) {
            ctx->pc = 0x34A300u;
            goto label_34a300;
        }
    }
    ctx->pc = 0x34A290u;
    // 0x34a290: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x34a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x34a294: 0x8d830020  lw          $v1, 0x20($t4)
    ctx->pc = 0x34a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x34a298: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a29c: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x34a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x34a2a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a2a4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34a2a8: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x34a2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x34a2ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2b0: 0xac253f58  sw          $a1, 0x3F58($at)
    ctx->pc = 0x34a2b0u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 5)); // MMIO: 0x70003f58
    // 0x34a2b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a2b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2bc: 0xac223f5c  sw          $v0, 0x3F5C($at)
    ctx->pc = 0x34a2bcu;
    runtime->Store32(rdram, ctx, 0x70003F5Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f5c
    // 0x34a2c0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A2C0u;
    {
        const bool branch_taken_0x34a2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a2c0) {
            ctx->pc = 0x34A2DCu;
            goto label_34a2dc;
        }
    }
    ctx->pc = 0x34A2C8u;
    // 0x34a2c8: 0x8d820024  lw          $v0, 0x24($t4)
    ctx->pc = 0x34a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x34a2cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a2d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a2d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2d8: 0xac233f30  sw          $v1, 0x3F30($at)
    ctx->pc = 0x34a2d8u;
    runtime->Store32(rdram, ctx, 0x70003F30u, GPR_U32(ctx, 3)); // MMIO: 0x70003f30
label_34a2dc:
    // 0x34a2dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2e0: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x34a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34a2e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2e8: 0x8c423ed0  lw          $v0, 0x3ED0($v0)
    ctx->pc = 0x34a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34a2ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34a2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34a2f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A2F0u;
    {
        const bool branch_taken_0x34a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2F0u;
        // 0x34a2f4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2f0) {
            ctx->pc = 0x34A300u;
            goto label_34a300;
        }
    }
    ctx->pc = 0x34A2F8u;
    // 0x34a2f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a2fc: 0xac233ed0  sw          $v1, 0x3ED0($at)
    ctx->pc = 0x34a2fcu;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 3)); // MMIO: 0x70003ed0
label_34a300:
    // 0x34a300: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x34a300u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a304: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x34a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x34a308: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34a30c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34A30Cu;
    {
        const bool branch_taken_0x34a30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A30Cu;
        // 0x34a310: 0x73080  sll         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a30c) {
            ctx->pc = 0x34A384u;
            goto label_34a384;
        }
    }
    ctx->pc = 0x34A314u;
    // 0x34a314: 0x8da2001c  lw          $v0, 0x1C($t5)
    ctx->pc = 0x34a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x34a318: 0x8da30020  lw          $v1, 0x20($t5)
    ctx->pc = 0x34a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x34a31c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a320: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x34a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x34a324: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a328: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34a328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34a32c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x34a32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x34a330: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a334: 0xac253f40  sw          $a1, 0x3F40($at)
    ctx->pc = 0x34a334u;
    runtime->Store32(rdram, ctx, 0x70003F40u, GPR_U32(ctx, 5)); // MMIO: 0x70003f40
    // 0x34a338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a33c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a340: 0xac223f44  sw          $v0, 0x3F44($at)
    ctx->pc = 0x34a340u;
    runtime->Store32(rdram, ctx, 0x70003F44u, GPR_U32(ctx, 2)); // MMIO: 0x70003f44
    // 0x34a344: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A344u;
    {
        const bool branch_taken_0x34a344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a344) {
            ctx->pc = 0x34A360u;
            goto label_34a360;
        }
    }
    ctx->pc = 0x34A34Cu;
    // 0x34a34c: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x34a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x34a350: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a354: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a358: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a35c: 0xac233f24  sw          $v1, 0x3F24($at)
    ctx->pc = 0x34a35cu;
    runtime->Store32(rdram, ctx, 0x70003F24u, GPR_U32(ctx, 3)); // MMIO: 0x70003f24
label_34a360:
    // 0x34a360: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a364: 0x8c633f24  lw          $v1, 0x3F24($v1)
    ctx->pc = 0x34a364u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34a368: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a36c: 0x8c423ed0  lw          $v0, 0x3ED0($v0)
    ctx->pc = 0x34a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34a370: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34a370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34a374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A374u;
    {
        const bool branch_taken_0x34a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A374u;
        // 0x34a378: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a374) {
            ctx->pc = 0x34A384u;
            goto label_34a384;
        }
    }
    ctx->pc = 0x34A37Cu;
    // 0x34a37c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a380: 0xac233ed0  sw          $v1, 0x3ED0($at)
    ctx->pc = 0x34a380u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 3)); // MMIO: 0x70003ed0
label_34a384:
    // 0x34a384: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a388: 0xac203f34  sw          $zero, 0x3F34($at)
    ctx->pc = 0x34a388u;
    runtime->Store32(rdram, ctx, 0x70003F34u, GPR_U32(ctx, 0)); // MMIO: 0x70003f34
    // 0x34a38c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a390: 0xac203f60  sw          $zero, 0x3F60($at)
    ctx->pc = 0x34a390u;
    runtime->Store32(rdram, ctx, 0x70003F60u, GPR_U32(ctx, 0)); // MMIO: 0x70003f60
    // 0x34a394: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x34a394u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a398: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a39c: 0xac203f64  sw          $zero, 0x3F64($at)
    ctx->pc = 0x34a39cu;
    runtime->Store32(rdram, ctx, 0x70003F64u, GPR_U32(ctx, 0)); // MMIO: 0x70003f64
    // 0x34a3a0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x34a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x34a3a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x34a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x34a3a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A3A8u;
    {
        const bool branch_taken_0x34a3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3A8u;
        // 0x34a3ac: 0x73080  sll         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3a8) {
            ctx->pc = 0x34A3FCu;
            goto label_34a3fc;
        }
    }
    ctx->pc = 0x34A3B0u;
    // 0x34a3b0: 0x8dc2001c  lw          $v0, 0x1C($t6)
    ctx->pc = 0x34a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x34a3b4: 0x8dc30020  lw          $v1, 0x20($t6)
    ctx->pc = 0x34a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x34a3b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a3bc: 0x8dc40010  lw          $a0, 0x10($t6)
    ctx->pc = 0x34a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x34a3c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a3c4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34a3c8: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x34a3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x34a3cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a3d0: 0xac253f60  sw          $a1, 0x3F60($at)
    ctx->pc = 0x34a3d0u;
    runtime->Store32(rdram, ctx, 0x70003F60u, GPR_U32(ctx, 5)); // MMIO: 0x70003f60
    // 0x34a3d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a3d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a3dc: 0xac223f64  sw          $v0, 0x3F64($at)
    ctx->pc = 0x34a3dcu;
    runtime->Store32(rdram, ctx, 0x70003F64u, GPR_U32(ctx, 2)); // MMIO: 0x70003f64
    // 0x34a3e0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A3E0u;
    {
        const bool branch_taken_0x34a3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3E0u;
        // 0x34a3e4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3e0) {
            ctx->pc = 0x34A3FCu;
            goto label_34a3fc;
        }
    }
    ctx->pc = 0x34A3E8u;
    // 0x34a3e8: 0x8dc20024  lw          $v0, 0x24($t6)
    ctx->pc = 0x34a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 36)));
    // 0x34a3ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a3f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a3f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a3f8: 0xac233f34  sw          $v1, 0x3F34($at)
    ctx->pc = 0x34a3f8u;
    runtime->Store32(rdram, ctx, 0x70003F34u, GPR_U32(ctx, 3)); // MMIO: 0x70003f34
label_34a3fc:
    // 0x34a3fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a400: 0xac203f2c  sw          $zero, 0x3F2C($at)
    ctx->pc = 0x34a400u;
    runtime->Store32(rdram, ctx, 0x70003F2Cu, GPR_U32(ctx, 0)); // MMIO: 0x70003f2c
    // 0x34a404: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a408: 0xac203f50  sw          $zero, 0x3F50($at)
    ctx->pc = 0x34a408u;
    runtime->Store32(rdram, ctx, 0x70003F50u, GPR_U32(ctx, 0)); // MMIO: 0x70003f50
    // 0x34a40c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x34a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a410: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a414: 0xac203f54  sw          $zero, 0x3F54($at)
    ctx->pc = 0x34a414u;
    runtime->Store32(rdram, ctx, 0x70003F54u, GPR_U32(ctx, 0)); // MMIO: 0x70003f54
    // 0x34a418: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x34a41c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34a420: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34A420u;
    {
        const bool branch_taken_0x34a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A420u;
        // 0x34a424: 0x73080  sll         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a420) {
            ctx->pc = 0x34A498u;
            goto label_34a498;
        }
    }
    ctx->pc = 0x34A428u;
    // 0x34a428: 0x8de2001c  lw          $v0, 0x1C($t7)
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x34a42c: 0x8de30020  lw          $v1, 0x20($t7)
    ctx->pc = 0x34a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x34a430: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a434: 0x8de40010  lw          $a0, 0x10($t7)
    ctx->pc = 0x34a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x34a438: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a43c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34a440: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x34a440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x34a444: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a448: 0xac253f50  sw          $a1, 0x3F50($at)
    ctx->pc = 0x34a448u;
    runtime->Store32(rdram, ctx, 0x70003F50u, GPR_U32(ctx, 5)); // MMIO: 0x70003f50
    // 0x34a44c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a450: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a454: 0xac223f54  sw          $v0, 0x3F54($at)
    ctx->pc = 0x34a454u;
    runtime->Store32(rdram, ctx, 0x70003F54u, GPR_U32(ctx, 2)); // MMIO: 0x70003f54
    // 0x34a458: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34A458u;
    {
        const bool branch_taken_0x34a458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a458) {
            ctx->pc = 0x34A474u;
            goto label_34a474;
        }
    }
    ctx->pc = 0x34A460u;
    // 0x34a460: 0x8de20024  lw          $v0, 0x24($t7)
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x34a464: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34a468: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a46c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a470: 0xac233f2c  sw          $v1, 0x3F2C($at)
    ctx->pc = 0x34a470u;
    runtime->Store32(rdram, ctx, 0x70003F2Cu, GPR_U32(ctx, 3)); // MMIO: 0x70003f2c
label_34a474:
    // 0x34a474: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a478: 0x8c633f2c  lw          $v1, 0x3F2C($v1)
    ctx->pc = 0x34a478u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F2Cu)); // MMIO: 0x70003f2c
    // 0x34a47c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a480: 0x8c423ed0  lw          $v0, 0x3ED0($v0)
    ctx->pc = 0x34a480u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34a484: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34a484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34a488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A488u;
    {
        const bool branch_taken_0x34a488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A488u;
        // 0x34a48c: 0x8fbe0000  lw          $fp, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a488) {
            ctx->pc = 0x34A49Cu;
            goto label_34a49c;
        }
    }
    ctx->pc = 0x34A490u;
    // 0x34a490: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a494: 0xac233ed0  sw          $v1, 0x3ED0($at)
    ctx->pc = 0x34a494u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 3)); // MMIO: 0x70003ed0
label_34a498:
    // 0x34a498: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x34a498u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a49c:
    // 0x34a49c: 0x24043d60  addiu       $a0, $zero, 0x3D60
    ctx->pc = 0x34a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15712));
    // 0x34a4a0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34a4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4a4: 0x8ce73ed0  lw          $a3, 0x3ED0($a3)
    ctx->pc = 0x34a4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34a4a8: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x34a4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x34a4ac: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x34a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34a4b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x34a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x34a4b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4b8: 0xac223f20  sw          $v0, 0x3F20($at)
    ctx->pc = 0x34a4b8u;
    runtime->Store32(rdram, ctx, 0x70003F20u, GPR_U32(ctx, 2)); // MMIO: 0x70003f20
    // 0x34a4bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a4c0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x34a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34a4c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4c8: 0xac203e70  sw          $zero, 0x3E70($at)
    ctx->pc = 0x34a4c8u;
    runtime->Store32(rdram, ctx, 0x70003E70u, GPR_U32(ctx, 0)); // MMIO: 0x70003e70
    // 0x34a4cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4d0: 0xac253e68  sw          $a1, 0x3E68($at)
    ctx->pc = 0x34a4d0u;
    runtime->Store32(rdram, ctx, 0x70003E68u, GPR_U32(ctx, 5)); // MMIO: 0x70003e68
    // 0x34a4d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x34a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a4d8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x34a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x34a4dc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x34a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x34a4e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x34a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34a4e4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x34a4e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a4e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34a4ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4f0: 0xac223f3c  sw          $v0, 0x3F3C($at)
    ctx->pc = 0x34a4f0u;
    runtime->Store32(rdram, ctx, 0x70003F3Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f3c
    // 0x34a4f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a4f8: 0xac223f38  sw          $v0, 0x3F38($at)
    ctx->pc = 0x34a4f8u;
    runtime->Store32(rdram, ctx, 0x70003F38u, GPR_U32(ctx, 2)); // MMIO: 0x70003f38
    // 0x34a4fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34A4FCu;
    {
        const bool branch_taken_0x34a4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a4fc) {
            ctx->pc = 0x34A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A4FCu;
            // 0x34a500: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A504u;
            goto label_34a504;
        }
    }
    ctx->pc = 0x34A504u;
label_34a504:
    // 0x34a504: 0x2012  mflo        $a0
    ctx->pc = 0x34a504u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x34a508: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x34a508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x34a50c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a510: 0xac243e6c  sw          $a0, 0x3E6C($at)
    ctx->pc = 0x34a510u;
    runtime->Store32(rdram, ctx, 0x70003E6Cu, GPR_U32(ctx, 4)); // MMIO: 0x70003e6c
    // 0x34a514: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A514u;
    {
        const bool branch_taken_0x34a514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a514) {
            ctx->pc = 0x34A518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A514u;
            // 0x34a518: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A52Cu;
            goto label_34a52c;
        }
    }
    ctx->pc = 0x34A51Cu;
    // 0x34a51c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34a520: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a524: 0xac223e6c  sw          $v0, 0x3E6C($at)
    ctx->pc = 0x34a524u;
    runtime->Store32(rdram, ctx, 0x70003E6Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003e6c
    // 0x34a528: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a52c:
    // 0x34a52c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34a530: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a534: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34a534u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34a538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a53c: 0xe4203e7c  swc1        $f0, 0x3E7C($at)
    ctx->pc = 0x34a53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003E7Cu, bits); }
    // 0x34a540: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a544: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34a544u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34a548: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x34a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a54c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x34a54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34a550: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a554: 0xac243f68  sw          $a0, 0x3F68($at)
    ctx->pc = 0x34a554u;
    runtime->Store32(rdram, ctx, 0x70003F68u, GPR_U32(ctx, 4)); // MMIO: 0x70003f68
    // 0x34a558: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a55c: 0xe4203e90  swc1        $f0, 0x3E90($at)
    ctx->pc = 0x34a55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003E90u, bits); }
    // 0x34a560: 0x8d2300a8  lw          $v1, 0xA8($t1)
    ctx->pc = 0x34a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 168)));
    // 0x34a564: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x34a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a568: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x34a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34a56c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a570: 0xe4203e94  swc1        $f0, 0x3E94($at)
    ctx->pc = 0x34a570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003E94u, bits); }
    // 0x34a574: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a578: 0xac223f94  sw          $v0, 0x3F94($at)
    ctx->pc = 0x34a578u;
    runtime->Store32(rdram, ctx, 0x70003F94u, GPR_U32(ctx, 2)); // MMIO: 0x70003f94
    // 0x34a57c: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x34a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a580: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a584: 0xac223f84  sw          $v0, 0x3F84($at)
    ctx->pc = 0x34a584u;
    runtime->Store32(rdram, ctx, 0x70003F84u, GPR_U32(ctx, 2)); // MMIO: 0x70003f84
    // 0x34a588: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a58c: 0xe4203e98  swc1        $f0, 0x3E98($at)
    ctx->pc = 0x34a58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003E98u, bits); }
    // 0x34a590: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a594: 0xac223f88  sw          $v0, 0x3F88($at)
    ctx->pc = 0x34a594u;
    runtime->Store32(rdram, ctx, 0x70003F88u, GPR_U32(ctx, 2)); // MMIO: 0x70003f88
    // 0x34a598: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a59c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5a0: 0xac223f8c  sw          $v0, 0x3F8C($at)
    ctx->pc = 0x34a5a0u;
    runtime->Store32(rdram, ctx, 0x70003F8Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f8c
    // 0x34a5a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5a8: 0xac223f90  sw          $v0, 0x3F90($at)
    ctx->pc = 0x34a5a8u;
    runtime->Store32(rdram, ctx, 0x70003F90u, GPR_U32(ctx, 2)); // MMIO: 0x70003f90
    // 0x34a5ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5b0: 0xe4203e9c  swc1        $f0, 0x3E9C($at)
    ctx->pc = 0x34a5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003E9Cu, bits); }
    // 0x34a5b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5b8: 0xac203ea0  sw          $zero, 0x3EA0($at)
    ctx->pc = 0x34a5b8u;
    runtime->Store32(rdram, ctx, 0x70003EA0u, GPR_U32(ctx, 0)); // MMIO: 0x70003ea0
    // 0x34a5bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5c0: 0xac203ea4  sw          $zero, 0x3EA4($at)
    ctx->pc = 0x34a5c0u;
    runtime->Store32(rdram, ctx, 0x70003EA4u, GPR_U32(ctx, 0)); // MMIO: 0x70003ea4
    // 0x34a5c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5c8: 0xac203ea8  sw          $zero, 0x3EA8($at)
    ctx->pc = 0x34a5c8u;
    runtime->Store32(rdram, ctx, 0x70003EA8u, GPR_U32(ctx, 0)); // MMIO: 0x70003ea8
    // 0x34a5cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5d0: 0xac203eac  sw          $zero, 0x3EAC($at)
    ctx->pc = 0x34a5d0u;
    runtime->Store32(rdram, ctx, 0x70003EACu, GPR_U32(ctx, 0)); // MMIO: 0x70003eac
    // 0x34a5d4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34A5D4u;
    {
        const bool branch_taken_0x34a5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5D4u;
        // 0x34a5d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5d4) {
            ctx->pc = 0x34A610u;
            goto label_34a610;
        }
    }
    ctx->pc = 0x34A5DCu;
    // 0x34a5dc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x34a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a5e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5e4: 0xe4203eb0  swc1        $f0, 0x3EB0($at)
    ctx->pc = 0x34a5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EB0u, bits); }
    // 0x34a5e8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x34a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a5ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5f0: 0xe4213eb4  swc1        $f1, 0x3EB4($at)
    ctx->pc = 0x34a5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EB4u, bits); }
    // 0x34a5f4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x34a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a5f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a5fc: 0xac203ebc  sw          $zero, 0x3EBC($at)
    ctx->pc = 0x34a5fcu;
    runtime->Store32(rdram, ctx, 0x70003EBCu, GPR_U32(ctx, 0)); // MMIO: 0x70003ebc
    // 0x34a600: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a604: 0xe4203eb8  swc1        $f0, 0x3EB8($at)
    ctx->pc = 0x34a604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EB8u, bits); }
    // 0x34a608: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34A608u;
    {
        const bool branch_taken_0x34a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A608u;
        // 0x34a60c: 0x3442d000  ori         $v0, $v0, 0xD000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a608) {
            ctx->pc = 0x34A638u;
            goto label_34a638;
        }
    }
    ctx->pc = 0x34A610u;
label_34a610:
    // 0x34a610: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a614: 0xac203eb0  sw          $zero, 0x3EB0($at)
    ctx->pc = 0x34a614u;
    runtime->Store32(rdram, ctx, 0x70003EB0u, GPR_U32(ctx, 0)); // MMIO: 0x70003eb0
    // 0x34a618: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a61c: 0xac203eb4  sw          $zero, 0x3EB4($at)
    ctx->pc = 0x34a61cu;
    runtime->Store32(rdram, ctx, 0x70003EB4u, GPR_U32(ctx, 0)); // MMIO: 0x70003eb4
    // 0x34a620: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a624: 0xac203eb8  sw          $zero, 0x3EB8($at)
    ctx->pc = 0x34a624u;
    runtime->Store32(rdram, ctx, 0x70003EB8u, GPR_U32(ctx, 0)); // MMIO: 0x70003eb8
    // 0x34a628: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a62c: 0xac203ebc  sw          $zero, 0x3EBC($at)
    ctx->pc = 0x34a62cu;
    runtime->Store32(rdram, ctx, 0x70003EBCu, GPR_U32(ctx, 0)); // MMIO: 0x70003ebc
    // 0x34a630: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x34a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x34a634: 0x0  nop
    ctx->pc = 0x34a634u;
    // NOP
label_34a638:
    // 0x34a638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a63c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34a63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34a640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A640u;
    {
        const bool branch_taken_0x34a640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A640u;
        // 0x34a644: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a640) {
            ctx->pc = 0x34A678u;
            goto label_34a678;
        }
    }
    ctx->pc = 0x34A648u;
    // 0x34a648: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x34a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a64c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34a64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34a650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34a650u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34a654: 0xf  sync
    ctx->pc = 0x34a654u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a658: 0x40f  sync.p
    ctx->pc = 0x34a658u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34a65c:
    // 0x34a65c: 0x0  nop
    ctx->pc = 0x34a65cu;
    // NOP
    // 0x34a660: 0x0  nop
    ctx->pc = 0x34a660u;
    // NOP
    // 0x34a664: 0x0  nop
    ctx->pc = 0x34a664u;
    // NOP
    // 0x34a668: 0x0  nop
    ctx->pc = 0x34a668u;
    // NOP
    // 0x34a66c: 0x0  nop
    ctx->pc = 0x34a66cu;
    // NOP
    // 0x34a670: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A670u;
    {
        const bool branch_taken_0x34a670 = (false);
        if (branch_taken_0x34a670) {
            ctx->pc = 0x34A65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a65c;
        }
    }
    ctx->pc = 0x34A678u;
label_34a678:
    // 0x34a678: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34a67c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x34a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x34a680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a680u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x34a684: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x34a684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34a688: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34A688u;
    {
        const bool branch_taken_0x34a688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A688u;
        // 0x34a68c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a688) {
            ctx->pc = 0x34A6E4u;
            goto label_34a6e4;
        }
    }
    ctx->pc = 0x34A690u;
    // 0x34a690: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x34a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34a694: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x34a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x34a698: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34a698u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x34a69c: 0xf  sync
    ctx->pc = 0x34a69cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a6a0: 0x40f  sync.p
    ctx->pc = 0x34a6a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34a6a4:
    // 0x34a6a4: 0x0  nop
    ctx->pc = 0x34a6a4u;
    // NOP
    // 0x34a6a8: 0x0  nop
    ctx->pc = 0x34a6a8u;
    // NOP
    // 0x34a6ac: 0x0  nop
    ctx->pc = 0x34a6acu;
    // NOP
    // 0x34a6b0: 0x0  nop
    ctx->pc = 0x34a6b0u;
    // NOP
    // 0x34a6b4: 0x0  nop
    ctx->pc = 0x34a6b4u;
    // NOP
    // 0x34a6b8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A6B8u;
    {
        const bool branch_taken_0x34a6b8 = (false);
        if (branch_taken_0x34a6b8) {
            ctx->pc = 0x34A6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a6a4;
        }
    }
    ctx->pc = 0x34A6C0u;
    // 0x34a6c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34a6c4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34a6c8:
    // 0x34a6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34a6cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a6d0: 0x0  nop
    ctx->pc = 0x34a6d0u;
    // NOP
    // 0x34a6d4: 0x0  nop
    ctx->pc = 0x34a6d4u;
    // NOP
    // 0x34a6d8: 0x0  nop
    ctx->pc = 0x34a6d8u;
    // NOP
    // 0x34a6dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A6DCu;
    {
        const bool branch_taken_0x34a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a6dc) {
            ctx->pc = 0x34A6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a6c8;
        }
    }
    ctx->pc = 0x34A6E4u;
label_34a6e4:
    // 0x34a6e4: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x34A6E4u;
    SET_GPR_U32(ctx, 31, 0x34A6ECu);
    ctx->pc = 0x34A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6E4u;
    // 0x34a6e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x34A6E4u, 0x34A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A6ECu;
label_34a6ec:
    // 0x34a6ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a6f0: 0x8c633e68  lw          $v1, 0x3E68($v1)
    ctx->pc = 0x34a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E68u)); // MMIO: 0x70003e68
    // 0x34a6f4: 0x186008de  blez        $v1, . + 4 + (0x8DE << 2)
    ctx->pc = 0x34A6F4u;
    {
        const bool branch_taken_0x34a6f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6F4u;
        // 0x34a6f8: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6f4) {
            ctx->pc = 0x34CA70u;
            goto label_34ca70;
        }
    }
    ctx->pc = 0x34A6FCu;
    // 0x34a6fc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x34a6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x34a700: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x34a700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x34a704: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x34a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x34a708: 0xafb30030  sw          $s3, 0x30($sp)
    ctx->pc = 0x34a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 19));
    // 0x34a70c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x34a70cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a710: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x34a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x34a714: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x34a714u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a718: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x34a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x34a71c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x34a71cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a720: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x34a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x34a724: 0x356b3e64  ori         $t3, $t3, 0x3E64
    ctx->pc = 0x34a724u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)15972);
    // 0x34a728: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x34a728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a72c: 0x358c3e90  ori         $t4, $t4, 0x3E90
    ctx->pc = 0x34a72cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16016);
    // 0x34a730: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x34a730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a734: 0x37de3ea0  ori         $fp, $fp, 0x3EA0
    ctx->pc = 0x34a734u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16032);
    // 0x34a738: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x34a738u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34a73c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x34a73cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x34a740: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x34a740u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a744: 0x3508d410  ori         $t0, $t0, 0xD410
    ctx->pc = 0x34a744u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54288);
    // 0x34a748: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34a74c: 0x35add080  ori         $t5, $t5, 0xD080
    ctx->pc = 0x34a74cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53376);
    // 0x34a750: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x34a750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x34a754: 0x35ced010  ori         $t6, $t6, 0xD010
    ctx->pc = 0x34a754u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53264);
    // 0x34a758: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x34a758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x34a75c: 0x35efd020  ori         $t7, $t7, 0xD020
    ctx->pc = 0x34a75cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53280);
    // 0x34a760: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x34a760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x34a764: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x34a764u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x34a768: 0x34c63ee0  ori         $a2, $a2, 0x3EE0
    ctx->pc = 0x34a768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16096);
    // 0x34a76c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x34a76cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x34a770: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x34a770u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x34a774: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x34a774u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x34a778: 0xc78780b0  lwc1        $f7, -0x7F50($gp)
    ctx->pc = 0x34a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34a77c: 0x3673e010  ori         $s3, $s3, 0xE010
    ctx->pc = 0x34a77cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)57360);
    // 0x34a780: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x34a780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x34a784: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x34a784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x34a788: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x34a788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x34a78c: 0x36f7d420  ori         $s7, $s7, 0xD420
    ctx->pc = 0x34a78cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54304);
    // 0x34a790: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x34a790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x34a794: 0x3610d400  ori         $s0, $s0, 0xD400
    ctx->pc = 0x34a794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54272);
    // 0x34a798: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x34a798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x34a79c: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x34a79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a7a0: 0xafad001c  sw          $t5, 0x1C($sp)
    ctx->pc = 0x34a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
    // 0x34a7a4: 0x3652e020  ori         $s2, $s2, 0xE020
    ctx->pc = 0x34a7a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)57376);
    // 0x34a7a8: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x34a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x34a7ac: 0x36d6fff0  ori         $s6, $s6, 0xFFF0
    ctx->pc = 0x34a7acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65520);
    // 0x34a7b0: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x34a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x34a7b4: 0x36b5d000  ori         $s5, $s5, 0xD000
    ctx->pc = 0x34a7b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)53248);
    // 0x34a7b8: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x34a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
    // 0x34a7bc: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x34a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
label_34a7c0:
    // 0x34a7c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7c4: 0x8c423e6c  lw          $v0, 0x3E6C($v0)
    ctx->pc = 0x34a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34a7c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34a7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34a7cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A7CCu;
    {
        const bool branch_taken_0x34a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a7cc) {
            ctx->pc = 0x34A7DCu;
            goto label_34a7dc;
        }
    }
    ctx->pc = 0x34A7D4u;
    // 0x34a7d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7d8: 0xac233e6c  sw          $v1, 0x3E6C($at)
    ctx->pc = 0x34a7d8u;
    runtime->Store32(rdram, ctx, 0x70003E6Cu, GPR_U32(ctx, 3)); // MMIO: 0x70003e6c
label_34a7dc:
    // 0x34a7dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7e0: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34a7e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7e8: 0xac233e60  sw          $v1, 0x3E60($at)
    ctx->pc = 0x34a7e8u;
    runtime->Store32(rdram, ctx, 0x70003E60u, GPR_U32(ctx, 3)); // MMIO: 0x70003e60
    // 0x34a7ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7f0: 0xac233e64  sw          $v1, 0x3E64($at)
    ctx->pc = 0x34a7f0u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 3)); // MMIO: 0x70003e64
    // 0x34a7f4: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34a7f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a7fc: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34a800: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x34a800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a804: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34a804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34a808: 0x8c843f38  lw          $a0, 0x3F38($a0)
    ctx->pc = 0x34a808u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F38u)); // MMIO: 0x70003f38
    // 0x34a80c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x34a810: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x34a810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a814: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x34a814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x34a818: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a81c: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34a820: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x34a820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34a824: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34a824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34a828: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x34a828u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x34a82c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34a830: 0xf  sync
    ctx->pc = 0x34a830u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a834: 0x40f  sync.p
    ctx->pc = 0x34a834u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a83c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a840: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A840u;
    {
        const bool branch_taken_0x34a840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a840) {
            ctx->pc = 0x34A894u;
            goto label_34a894;
        }
    }
    ctx->pc = 0x34A848u;
    // 0x34a848: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34a848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34a84c: 0xf  sync
    ctx->pc = 0x34a84cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a850: 0x40f  sync.p
    ctx->pc = 0x34a850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34a854:
    // 0x34a854: 0x0  nop
    ctx->pc = 0x34a854u;
    // NOP
    // 0x34a858: 0x0  nop
    ctx->pc = 0x34a858u;
    // NOP
    // 0x34a85c: 0x0  nop
    ctx->pc = 0x34a85cu;
    // NOP
    // 0x34a860: 0x0  nop
    ctx->pc = 0x34a860u;
    // NOP
    // 0x34a864: 0x0  nop
    ctx->pc = 0x34a864u;
    // NOP
    // 0x34a868: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A868u;
    {
        const bool branch_taken_0x34a868 = (false);
        if (branch_taken_0x34a868) {
            ctx->pc = 0x34A854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a854;
        }
    }
    ctx->pc = 0x34A870u;
    // 0x34a870: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34a874: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34a874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34a878:
    // 0x34a878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34a87c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a880: 0x0  nop
    ctx->pc = 0x34a880u;
    // NOP
    // 0x34a884: 0x0  nop
    ctx->pc = 0x34a884u;
    // NOP
    // 0x34a888: 0x0  nop
    ctx->pc = 0x34a888u;
    // NOP
    // 0x34a88c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A88Cu;
    {
        const bool branch_taken_0x34a88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a88c) {
            ctx->pc = 0x34A878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a878;
        }
    }
    ctx->pc = 0x34A894u;
label_34a894:
    // 0x34a894: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34a894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34a898: 0x8ca53f28  lw          $a1, 0x3F28($a1)
    ctx->pc = 0x34a898u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34a89c: 0x18a001d4  blez        $a1, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x34A89Cu;
    {
        const bool branch_taken_0x34a89c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x34A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A89Cu;
        // 0x34a8a0: 0x3c070062  lui         $a3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a89c) {
            ctx->pc = 0x34AFF0u;
            goto label_34aff0;
        }
    }
    ctx->pc = 0x34A8A4u;
    // 0x34a8a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8a8: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34a8ac: 0x24e7c2c8  addiu       $a3, $a3, -0x3D38
    ctx->pc = 0x34a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951624));
    // 0x34a8b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8b4: 0x8c633e60  lw          $v1, 0x3E60($v1)
    ctx->pc = 0x34a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34a8b8: 0x8ce400bc  lw          $a0, 0xBC($a3)
    ctx->pc = 0x34a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x34a8bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8c0: 0xac233e64  sw          $v1, 0x3E64($at)
    ctx->pc = 0x34a8c0u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 3)); // MMIO: 0x70003e64
    // 0x34a8c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34a8c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8cc: 0xac223f70  sw          $v0, 0x3F70($at)
    ctx->pc = 0x34a8ccu;
    runtime->Store32(rdram, ctx, 0x70003F70u, GPR_U32(ctx, 2)); // MMIO: 0x70003f70
    // 0x34a8d0: 0x48000e5  bltz        $a0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x34A8D0u;
    {
        const bool branch_taken_0x34a8d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34a8d0) {
            ctx->pc = 0x34AC68u;
            goto label_34ac68;
        }
    }
    ctx->pc = 0x34A8D8u;
    // 0x34a8d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8dc: 0x8c423e6c  lw          $v0, 0x3E6C($v0)
    ctx->pc = 0x34a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34a8e0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8e4: 0x8c633f48  lw          $v1, 0x3F48($v1)
    ctx->pc = 0x34a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F48u)); // MMIO: 0x70003f48
    // 0x34a8e8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x34a8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34a8ec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34a8f0: 0x8ca53f4c  lw          $a1, 0x3F4C($a1)
    ctx->pc = 0x34a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34a8f4: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x34a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34a8f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34a8fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a900: 0xac233f48  sw          $v1, 0x3F48($at)
    ctx->pc = 0x34a900u;
    runtime->Store32(rdram, ctx, 0x70003F48u, GPR_U32(ctx, 3)); // MMIO: 0x70003f48
    // 0x34a904: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34A904u;
    {
        const bool branch_taken_0x34a904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a904) {
            ctx->pc = 0x34A99Cu;
            goto label_34a99c;
        }
    }
    ctx->pc = 0x34A90Cu;
    // 0x34a90c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34a910: 0xb61824  and         $v1, $a1, $s6
    ctx->pc = 0x34a910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
    // 0x34a914: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a918: 0x8c423f88  lw          $v0, 0x3F88($v0)
    ctx->pc = 0x34a918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34a91c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x34a91cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a920: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x34a920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a924: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x34a924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x34a928: 0x8fab0030  lw          $t3, 0x30($sp)
    ctx->pc = 0x34a928u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a92c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x34a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x34a930: 0xaeec0000  sw          $t4, 0x0($s7)
    ctx->pc = 0x34a930u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 12));
    // 0x34a934: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34a934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34a938: 0xf  sync
    ctx->pc = 0x34a938u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a93c: 0x40f  sync.p
    ctx->pc = 0x34a93cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a944: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a948: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A948u;
    {
        const bool branch_taken_0x34a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a948) {
            ctx->pc = 0x34A99Cu;
            goto label_34a99c;
        }
    }
    ctx->pc = 0x34A950u;
    // 0x34a950: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34a950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34a954: 0xf  sync
    ctx->pc = 0x34a954u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a958: 0x40f  sync.p
    ctx->pc = 0x34a958u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34a95c:
    // 0x34a95c: 0x0  nop
    ctx->pc = 0x34a95cu;
    // NOP
    // 0x34a960: 0x0  nop
    ctx->pc = 0x34a960u;
    // NOP
    // 0x34a964: 0x0  nop
    ctx->pc = 0x34a964u;
    // NOP
    // 0x34a968: 0x0  nop
    ctx->pc = 0x34a968u;
    // NOP
    // 0x34a96c: 0x0  nop
    ctx->pc = 0x34a96cu;
    // NOP
    // 0x34a970: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A970u;
    {
        const bool branch_taken_0x34a970 = (false);
        if (branch_taken_0x34a970) {
            ctx->pc = 0x34A95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a95c;
        }
    }
    ctx->pc = 0x34A978u;
    // 0x34a978: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34a97c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34a97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34a980:
    // 0x34a980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a980u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34a984: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a988: 0x0  nop
    ctx->pc = 0x34a988u;
    // NOP
    // 0x34a98c: 0x0  nop
    ctx->pc = 0x34a98cu;
    // NOP
    // 0x34a990: 0x0  nop
    ctx->pc = 0x34a990u;
    // NOP
    // 0x34a994: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A994u;
    {
        const bool branch_taken_0x34a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a994) {
            ctx->pc = 0x34A980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a980;
        }
    }
    ctx->pc = 0x34A99Cu;
label_34a99c:
    // 0x34a99c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9a0: 0x8c423f4c  lw          $v0, 0x3F4C($v0)
    ctx->pc = 0x34a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34a9a4: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x34a9a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
    // 0x34a9a8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34a9ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9b0: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34a9b0u;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
label_34a9b4:
    // 0x34a9b4: 0x42000039  di
    ctx->pc = 0x34a9b4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34a9b8: 0x40f  sync.p
    ctx->pc = 0x34a9b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34a9bc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x34a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x34a9c0: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x34a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x34a9c4: 0x0  nop
    ctx->pc = 0x34a9c4u;
    // NOP
    // 0x34a9c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34A9C8u;
    {
        const bool branch_taken_0x34a9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a9c8) {
            ctx->pc = 0x34A9B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a9b4;
        }
    }
    ctx->pc = 0x34A9D0u;
    // 0x34a9d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9d4: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34a9d8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9dc: 0x8c843f88  lw          $a0, 0x3F88($a0)
    ctx->pc = 0x34a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34a9e0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9e4: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34a9e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34a9ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9f0: 0x8c633f70  lw          $v1, 0x3F70($v1)
    ctx->pc = 0x34a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F70u)); // MMIO: 0x70003f70
    // 0x34a9f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34a9f8: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34a9fc: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x34a9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34aa00: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34aa04: 0x8fbe000c  lw          $fp, 0xC($sp)
    ctx->pc = 0x34aa04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34aa08: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x34aa08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x34aa0c: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34aa0cu;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34aa10: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34aa10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34aa14: 0x20690000  addi        $t1, $v1, 0x0
    ctx->pc = 0x34aa14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34aa18: 0x208a0000  addi        $t2, $a0, 0x0
    ctx->pc = 0x34aa18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34aa1c: 0x8dd80000  lw          $t8, 0x0($t6)
    ctx->pc = 0x34aa1cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x34aa20: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34aa20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34aa24: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34aa24u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34aa28: 0xd9300010  lqc2        $vf16, 0x10($t1)
    ctx->pc = 0x34aa28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34aa2c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aa30: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34aa30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34aa34: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aa38: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34aa38u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34aa3c: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34aa3cu;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34aa40: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34aa40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34aa44: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34aa44u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34aa48: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34aa48u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34aa4c: 0xd9310010  lqc2        $vf17, 0x10($t1)
    ctx->pc = 0x34aa4cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34aa50: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34aa50u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34aa54: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aa58: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34aa5c: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w
    ctx->pc = 0x34aa5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x34aa60: 0x4be4851b  vmulw.xyzw  $vf20, $vf16, $vf4w
    ctx->pc = 0x34aa60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34aa64: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34aa64u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34aa68: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34aa68u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34aa6c: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y
    ctx->pc = 0x34aa6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34aa70: 0x4bf46528  vadd.xyzw   $vf20, $vf12, $vf20
    ctx->pc = 0x34aa70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34aa74: 0x4a0002ff  vnop
    ctx->pc = 0x34aa74u;
    // NOP operation, no action needed for VU0
    // 0x34aa78: 0x4a0002ff  vnop
    ctx->pc = 0x34aa78u;
    // NOP operation, no action needed for VU0
    // 0x34aa7c: 0x4a0002ff  vnop
    ctx->pc = 0x34aa7cu;
    // NOP operation, no action needed for VU0
    // 0x34aa80: 0x4bf4a17c  vftoi0.xyzw $vf20, $vf20
    ctx->pc = 0x34aa80u;
    { __m128 src = ctx->vu0_vf[20]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34aa84: 0x4a0002ff  vnop
    ctx->pc = 0x34aa84u;
    // NOP operation, no action needed for VU0
    // 0x34aa88: 0x4a0002ff  vnop
    ctx->pc = 0x34aa88u;
    // NOP operation, no action needed for VU0
    // 0x34aa8c: 0x4a0002ff  vnop
    ctx->pc = 0x34aa8cu;
    // NOP operation, no action needed for VU0
label_34aa90:
    // 0x34aa90: 0xfbd400b0  sqc2        $vf20, 0xB0($fp)
    ctx->pc = 0x34aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 176), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x34aa94: 0x8fd900b0  lw          $t9, 0xB0($fp)
    ctx->pc = 0x34aa94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x34aa98: 0x4a202957  vminiw.w    $vf5, $vf5, $vf0w
    ctx->pc = 0x34aa98u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34aa9c: 0xa0990000  sb          $t9, 0x0($a0)
    ctx->pc = 0x34aa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x34aaa0: 0x8fd900b4  lw          $t9, 0xB4($fp)
    ctx->pc = 0x34aaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x34aaa4: 0xa0990001  sb          $t9, 0x1($a0)
    ctx->pc = 0x34aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x34aaa8: 0x4be58d5b  vmulw.xyzw  $vf21, $vf17, $vf5w
    ctx->pc = 0x34aaa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34aaac: 0x8fd900b8  lw          $t9, 0xB8($fp)
    ctx->pc = 0x34aaacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x34aab0: 0xa0990002  sb          $t9, 0x2($a0)
    ctx->pc = 0x34aab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 25));
    // 0x34aab4: 0x8fd900bc  lw          $t9, 0xBC($fp)
    ctx->pc = 0x34aab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x34aab8: 0x4bf56d68  vadd.xyzw   $vf21, $vf13, $vf21
    ctx->pc = 0x34aab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34aabc: 0xa0990003  sb          $t9, 0x3($a0)
    ctx->pc = 0x34aabcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 25));
    // 0x34aac0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34aac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aac4: 0xd90a0000  lqc2        $vf10, 0x0($t0)
    ctx->pc = 0x34aac4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34aac8: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34aac8u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34aacc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34AACCu;
    {
        const bool branch_taken_0x34aacc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AACCu;
        // 0x34aad0: 0xd9320010  lqc2        $vf18, 0x10($t1) (Delay Slot)
        ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aacc) {
            ctx->pc = 0x34AADCu;
            goto label_34aadc;
        }
    }
    ctx->pc = 0x34AAD4u;
    // 0x34aad4: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34aad4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34aad8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34aad8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34aadc:
    // 0x34aadc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aae0: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aae4: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34aae4u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34aae8: 0x4a815283  vaddw.y     $vf10, $vf10, $vf1w
    ctx->pc = 0x34aae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x34aaec: 0x4bf5a97c  vftoi0.xyzw $vf21, $vf21
    ctx->pc = 0x34aaecu;
    { __m128 src = ctx->vu0_vf[21]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34aaf0: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34aaf0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34aaf4: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34aaf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34aaf8: 0x4a2a5199  vmuly.w     $vf6, $vf10, $vf10y
    ctx->pc = 0x34aaf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x34aafc: 0x1b000055  blez        $t8, . + 4 + (0x55 << 2)
    ctx->pc = 0x34AAFCu;
    {
        const bool branch_taken_0x34aafc = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AAFCu;
        // 0x34ab00: 0xfbd500b0  sqc2        $vf21, 0xB0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 176), _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aafc) {
            ctx->pc = 0x34AC54u;
            goto label_34ac54;
        }
    }
    ctx->pc = 0x34AB04u;
    // 0x34ab04: 0x8fd900b0  lw          $t9, 0xB0($fp)
    ctx->pc = 0x34ab04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x34ab08: 0x4a203197  vminiw.w    $vf6, $vf6, $vf0w
    ctx->pc = 0x34ab08u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x34ab0c: 0xa0990000  sb          $t9, 0x0($a0)
    ctx->pc = 0x34ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab10: 0x8fd900b4  lw          $t9, 0xB4($fp)
    ctx->pc = 0x34ab10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x34ab14: 0xa0990001  sb          $t9, 0x1($a0)
    ctx->pc = 0x34ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab18: 0x4be6959b  vmulw.xyzw  $vf22, $vf18, $vf6w
    ctx->pc = 0x34ab18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34ab1c: 0x8fd900b8  lw          $t9, 0xB8($fp)
    ctx->pc = 0x34ab1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x34ab20: 0xa0990002  sb          $t9, 0x2($a0)
    ctx->pc = 0x34ab20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab24: 0x8fd900bc  lw          $t9, 0xBC($fp)
    ctx->pc = 0x34ab24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x34ab28: 0x4bf675a8  vadd.xyzw   $vf22, $vf14, $vf22
    ctx->pc = 0x34ab28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34ab2c: 0xa0990003  sb          $t9, 0x3($a0)
    ctx->pc = 0x34ab2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab30: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34ab30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ab34: 0xd90b0000  lqc2        $vf11, 0x0($t0)
    ctx->pc = 0x34ab34u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34ab38: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x34ab38u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34ab3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34AB3Cu;
    {
        const bool branch_taken_0x34ab3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB3Cu;
        // 0x34ab40: 0xd9330010  lqc2        $vf19, 0x10($t1) (Delay Slot)
        ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab3c) {
            ctx->pc = 0x34AB4Cu;
            goto label_34ab4c;
        }
    }
    ctx->pc = 0x34AB44u;
    // 0x34ab44: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34ab44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34ab48: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34ab48u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34ab4c:
    // 0x34ab4c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ab50: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ab54: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34ab54u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34ab58: 0x4a815ac3  vaddw.y     $vf11, $vf11, $vf1w
    ctx->pc = 0x34ab58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x34ab5c: 0x4bf6b17c  vftoi0.xyzw $vf22, $vf22
    ctx->pc = 0x34ab5cu;
    { __m128 src = ctx->vu0_vf[22]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34ab60: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34ab60u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34ab64: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34ab64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34ab68: 0x4a2b59d9  vmuly.w     $vf7, $vf11, $vf11y
    ctx->pc = 0x34ab68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x34ab6c: 0x1b000039  blez        $t8, . + 4 + (0x39 << 2)
    ctx->pc = 0x34AB6Cu;
    {
        const bool branch_taken_0x34ab6c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB6Cu;
        // 0x34ab70: 0xfbd600b0  sqc2        $vf22, 0xB0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 176), _mm_castps_si128(ctx->vu0_vf[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab6c) {
            ctx->pc = 0x34AC54u;
            goto label_34ac54;
        }
    }
    ctx->pc = 0x34AB74u;
    // 0x34ab74: 0x8fd900b0  lw          $t9, 0xB0($fp)
    ctx->pc = 0x34ab74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x34ab78: 0x4a2039d7  vminiw.w    $vf7, $vf7, $vf0w
    ctx->pc = 0x34ab78u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x34ab7c: 0xa0990000  sb          $t9, 0x0($a0)
    ctx->pc = 0x34ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab80: 0x8fd900b4  lw          $t9, 0xB4($fp)
    ctx->pc = 0x34ab80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x34ab84: 0xa0990001  sb          $t9, 0x1($a0)
    ctx->pc = 0x34ab84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab88: 0x4be79ddb  vmulw.xyzw  $vf23, $vf19, $vf7w
    ctx->pc = 0x34ab88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34ab8c: 0x8fd900b8  lw          $t9, 0xB8($fp)
    ctx->pc = 0x34ab8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x34ab90: 0xa0990002  sb          $t9, 0x2($a0)
    ctx->pc = 0x34ab90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ab94: 0x8fd900bc  lw          $t9, 0xBC($fp)
    ctx->pc = 0x34ab94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x34ab98: 0x4bf77de8  vadd.xyzw   $vf23, $vf15, $vf23
    ctx->pc = 0x34ab98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34ab9c: 0xa0990003  sb          $t9, 0x3($a0)
    ctx->pc = 0x34ab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 25));
    // 0x34aba0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34aba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aba4: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34aba4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34aba8: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34aba8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34abac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34ABACu;
    {
        const bool branch_taken_0x34abac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABACu;
        // 0x34abb0: 0xd9300010  lqc2        $vf16, 0x10($t1) (Delay Slot)
        ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abac) {
            ctx->pc = 0x34ABBCu;
            goto label_34abbc;
        }
    }
    ctx->pc = 0x34ABB4u;
    // 0x34abb4: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34abb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34abb8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34abb8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34abbc:
    // 0x34abbc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34abc0: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34abc4: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34abc4u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34abc8: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34abc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34abcc: 0x4bf7b97c  vftoi0.xyzw $vf23, $vf23
    ctx->pc = 0x34abccu;
    { __m128 src = ctx->vu0_vf[23]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34abd0: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34abd0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34abd4: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34abd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34abd8: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34abd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34abdc: 0x1b00001d  blez        $t8, . + 4 + (0x1D << 2)
    ctx->pc = 0x34ABDCu;
    {
        const bool branch_taken_0x34abdc = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABDCu;
        // 0x34abe0: 0xfbd700b0  sqc2        $vf23, 0xB0($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 176), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abdc) {
            ctx->pc = 0x34AC54u;
            goto label_34ac54;
        }
    }
    ctx->pc = 0x34ABE4u;
    // 0x34abe4: 0x8fd900b0  lw          $t9, 0xB0($fp)
    ctx->pc = 0x34abe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x34abe8: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34abe8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34abec: 0xa0990000  sb          $t9, 0x0($a0)
    ctx->pc = 0x34abecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x34abf0: 0x8fd900b4  lw          $t9, 0xB4($fp)
    ctx->pc = 0x34abf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x34abf4: 0xa0990001  sb          $t9, 0x1($a0)
    ctx->pc = 0x34abf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 25));
    // 0x34abf8: 0x4be4851b  vmulw.xyzw  $vf20, $vf16, $vf4w
    ctx->pc = 0x34abf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34abfc: 0x8fd900b8  lw          $t9, 0xB8($fp)
    ctx->pc = 0x34abfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x34ac00: 0xa0990002  sb          $t9, 0x2($a0)
    ctx->pc = 0x34ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ac04: 0x8fd900bc  lw          $t9, 0xBC($fp)
    ctx->pc = 0x34ac04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x34ac08: 0x4bf46528  vadd.xyzw   $vf20, $vf12, $vf20
    ctx->pc = 0x34ac08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34ac0c: 0xa0990003  sb          $t9, 0x3($a0)
    ctx->pc = 0x34ac0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 25));
    // 0x34ac10: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34ac10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ac14: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34ac14u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34ac18: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34ac18u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34ac1c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34AC1Cu;
    {
        const bool branch_taken_0x34ac1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC1Cu;
        // 0x34ac20: 0xd9310010  lqc2        $vf17, 0x10($t1) (Delay Slot)
        ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac1c) {
            ctx->pc = 0x34AC2Cu;
            goto label_34ac2c;
        }
    }
    ctx->pc = 0x34AC24u;
    // 0x34ac24: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34ac24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34ac28: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34ac28u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34ac2c:
    // 0x34ac2c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ac30: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ac34: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34ac34u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34ac38: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w
    ctx->pc = 0x34ac38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x34ac3c: 0x4bf4a17c  vftoi0.xyzw $vf20, $vf20
    ctx->pc = 0x34ac3cu;
    { __m128 src = ctx->vu0_vf[20]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34ac40: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34ac40u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34ac44: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34ac44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34ac48: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y
    ctx->pc = 0x34ac48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34ac4c: 0x1f00ff90  bgtz        $t8, . + 4 + (-0x70 << 2)
    ctx->pc = 0x34AC4Cu;
    {
        const bool branch_taken_0x34ac4c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC4Cu;
        // 0x34ac50: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac4c) {
            ctx->pc = 0x34AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34aa90;
        }
    }
    ctx->pc = 0x34AC54u;
label_34ac54:
    // 0x34ac54: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34ac54u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34ac58: 0xadd80000  sw          $t8, 0x0($t6)
    ctx->pc = 0x34ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 24));
    // 0x34ac5c: 0x42000038  ei
    ctx->pc = 0x34ac5cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34ac60: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x34AC60u;
    {
        const bool branch_taken_0x34ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac60) {
            ctx->pc = 0x34AF0Cu;
            goto label_34af0c;
        }
    }
    ctx->pc = 0x34AC68u;
label_34ac68:
    // 0x34ac68: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ac6c: 0x8c633f4c  lw          $v1, 0x3F4C($v1)
    ctx->pc = 0x34ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34ac70: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x34ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34ac74: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34AC74u;
    {
        const bool branch_taken_0x34ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac74) {
            ctx->pc = 0x34AD0Cu;
            goto label_34ad0c;
        }
    }
    ctx->pc = 0x34AC7Cu;
    // 0x34ac7c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34ac80: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34ac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34ac84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ac88: 0x8c423f88  lw          $v0, 0x3F88($v0)
    ctx->pc = 0x34ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34ac8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34ac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x34ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ac94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34ac98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x34ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ac9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34aca0: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x34aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x34aca4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34aca8: 0xf  sync
    ctx->pc = 0x34aca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34acac: 0x40f  sync.p
    ctx->pc = 0x34acacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34acb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34acb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34acb8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34ACB8u;
    {
        const bool branch_taken_0x34acb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34acb8) {
            ctx->pc = 0x34AD0Cu;
            goto label_34ad0c;
        }
    }
    ctx->pc = 0x34ACC0u;
    // 0x34acc0: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34acc4: 0xf  sync
    ctx->pc = 0x34acc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34acc8: 0x40f  sync.p
    ctx->pc = 0x34acc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34accc:
    // 0x34accc: 0x0  nop
    ctx->pc = 0x34acccu;
    // NOP
    // 0x34acd0: 0x0  nop
    ctx->pc = 0x34acd0u;
    // NOP
    // 0x34acd4: 0x0  nop
    ctx->pc = 0x34acd4u;
    // NOP
    // 0x34acd8: 0x0  nop
    ctx->pc = 0x34acd8u;
    // NOP
    // 0x34acdc: 0x0  nop
    ctx->pc = 0x34acdcu;
    // NOP
    // 0x34ace0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34ACE0u;
    {
        const bool branch_taken_0x34ace0 = (false);
        if (branch_taken_0x34ace0) {
            ctx->pc = 0x34ACCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34accc;
        }
    }
    ctx->pc = 0x34ACE8u;
    // 0x34ace8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34acec: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34acf0:
    // 0x34acf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34acf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34acf8: 0x0  nop
    ctx->pc = 0x34acf8u;
    // NOP
    // 0x34acfc: 0x0  nop
    ctx->pc = 0x34acfcu;
    // NOP
    // 0x34ad00: 0x0  nop
    ctx->pc = 0x34ad00u;
    // NOP
    // 0x34ad04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34AD04u;
    {
        const bool branch_taken_0x34ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ad04) {
            ctx->pc = 0x34ACF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34acf0;
        }
    }
    ctx->pc = 0x34AD0Cu;
label_34ad0c:
    // 0x34ad0c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad10: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34ad14: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x34ad14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x34ad18: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad1c: 0x8c633f28  lw          $v1, 0x3F28($v1)
    ctx->pc = 0x34ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34ad20: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x34ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x34ad24: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad28: 0x8c423f4c  lw          $v0, 0x3F4C($v0)
    ctx->pc = 0x34ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34ad2c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x34ad2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x34ad30: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x34ad30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34ad34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34ad38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad3c: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34ad3cu;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
    // 0x34ad40: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x34ad40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x34ad44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34ad48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ad48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad4c: 0xac243e74  sw          $a0, 0x3E74($at)
    ctx->pc = 0x34ad4cu;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 4)); // MMIO: 0x70003e74
    // 0x34ad50: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34ad54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad58: 0x8c423f88  lw          $v0, 0x3F88($v0)
    ctx->pc = 0x34ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34ad5c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x34ad5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ad60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x34ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34ad64: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ad68: 0x8c633f48  lw          $v1, 0x3F48($v1)
    ctx->pc = 0x34ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F48u)); // MMIO: 0x70003f48
    // 0x34ad6c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x34ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x34ad70: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34ad70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34ad74: 0x8fab0030  lw          $t3, 0x30($sp)
    ctx->pc = 0x34ad74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ad78: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x34ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x34ad7c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x34ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x34ad80: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34ad84: 0xf  sync
    ctx->pc = 0x34ad84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ad88: 0x40f  sync.p
    ctx->pc = 0x34ad88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ad8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34ad90: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34ad94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34AD94u;
    {
        const bool branch_taken_0x34ad94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad94) {
            ctx->pc = 0x34ADECu;
            goto label_34adec;
        }
    }
    ctx->pc = 0x34AD9Cu;
    // 0x34ad9c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34ada0: 0xf  sync
    ctx->pc = 0x34ada0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ada4: 0x40f  sync.p
    ctx->pc = 0x34ada4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34ada8:
    // 0x34ada8: 0x0  nop
    ctx->pc = 0x34ada8u;
    // NOP
    // 0x34adac: 0x0  nop
    ctx->pc = 0x34adacu;
    // NOP
    // 0x34adb0: 0x0  nop
    ctx->pc = 0x34adb0u;
    // NOP
    // 0x34adb4: 0x0  nop
    ctx->pc = 0x34adb4u;
    // NOP
    // 0x34adb8: 0x0  nop
    ctx->pc = 0x34adb8u;
    // NOP
    // 0x34adbc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34ADBCu;
    {
        const bool branch_taken_0x34adbc = (false);
        if (branch_taken_0x34adbc) {
            ctx->pc = 0x34ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ada8;
        }
    }
    ctx->pc = 0x34ADC4u;
    // 0x34adc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34adc8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34adc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34adcc: 0x0  nop
    ctx->pc = 0x34adccu;
    // NOP
label_34add0:
    // 0x34add0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34add0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34add4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34add4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34add8: 0x0  nop
    ctx->pc = 0x34add8u;
    // NOP
    // 0x34addc: 0x0  nop
    ctx->pc = 0x34addcu;
    // NOP
    // 0x34ade0: 0x0  nop
    ctx->pc = 0x34ade0u;
    // NOP
    // 0x34ade4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34ADE4u;
    {
        const bool branch_taken_0x34ade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ade4) {
            ctx->pc = 0x34ADD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34add0;
        }
    }
    ctx->pc = 0x34ADECu;
label_34adec:
    // 0x34adec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34adf0: 0x8ca53f48  lw          $a1, 0x3F48($a1)
    ctx->pc = 0x34adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F48u)); // MMIO: 0x70003f48
    // 0x34adf4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34adf8: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34adfc: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x34adfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34ae00: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae04: 0x8c843f28  lw          $a0, 0x3F28($a0)
    ctx->pc = 0x34ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34ae08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae0c: 0xac223ed0  sw          $v0, 0x3ED0($at)
    ctx->pc = 0x34ae0cu;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed0
    // 0x34ae10: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x34ae10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34ae14: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x34ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ae18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae1c: 0xac233f48  sw          $v1, 0x3F48($at)
    ctx->pc = 0x34ae1cu;
    runtime->Store32(rdram, ctx, 0x70003F48u, GPR_U32(ctx, 3)); // MMIO: 0x70003f48
    // 0x34ae20: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_34ae24:
    // 0x34ae24: 0x42000039  di
    ctx->pc = 0x34ae24u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34ae28: 0x40f  sync.p
    ctx->pc = 0x34ae28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ae2c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34ae30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34ae34: 0x0  nop
    ctx->pc = 0x34ae34u;
    // NOP
    // 0x34ae38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34AE38u;
    {
        const bool branch_taken_0x34ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ae38) {
            ctx->pc = 0x34AE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ae24;
        }
    }
    ctx->pc = 0x34AE40u;
    // 0x34ae40: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae44: 0x8c843f88  lw          $a0, 0x3F88($a0)
    ctx->pc = 0x34ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34ae48: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae4c: 0x8c633ed0  lw          $v1, 0x3ED0($v1)
    ctx->pc = 0x34ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34ae50: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae54: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34ae58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34ae5c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae60: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34ae64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34ae68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x34ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34ae6c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ae70: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34ae74: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34ae74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34ae78: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x34ae78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ae7c: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x34ae7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34ae80: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34ae80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ae84: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34ae84u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34ae88: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34ae88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34ae8c: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x34ae8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34ae90:
    // 0x34ae90: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ae94: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34ae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ae98: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34ae98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34ae9c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34ae9cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34aea0: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34aea0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34aea4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34aea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aea8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34AEA8u;
    {
        const bool branch_taken_0x34aea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEA8u;
        // 0x34aeac: 0xac8c0000  sw          $t4, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aea8) {
            ctx->pc = 0x34AEBCu;
            goto label_34aebc;
        }
    }
    ctx->pc = 0x34AEB0u;
    // 0x34aeb0: 0xa22820  add         $a1, $a1, $v0
    ctx->pc = 0x34aeb0u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x34aeb4: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34aeb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34aeb8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34aeb8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34aebc:
    // 0x34aebc: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34aebcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34aec0: 0x1f00fff3  bgtz        $t8, . + 4 + (-0xD << 2)
    ctx->pc = 0x34AEC0u;
    {
        const bool branch_taken_0x34aec0 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEC0u;
        // 0x34aec4: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aec0) {
            ctx->pc = 0x34AE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ae90;
        }
    }
    ctx->pc = 0x34AEC8u;
    // 0x34aec8: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x34aec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34aecc: 0x651822  sub         $v1, $v1, $a1
    ctx->pc = 0x34aeccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34aed0: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x34aed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34aed4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34aed8: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34aed8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aedc: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34aee0: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34aee0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34aee4: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34aee4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34aee8: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34aee8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aeec: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34aef0: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34aef0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34aef4: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34aef4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34aef8: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34aef8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aefc: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34af00: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34af00u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34af04: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x34af04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x34af08: 0x42000038  ei
    ctx->pc = 0x34af08u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_34af0c:
    // 0x34af0c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34af10: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34af10u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34af14: 0x18800036  blez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34AF14u;
    {
        const bool branch_taken_0x34af14 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF14u;
        // 0x34af18: 0x240cfffc  addiu       $t4, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af14) {
            ctx->pc = 0x34AFF0u;
            goto label_34aff0;
        }
    }
    ctx->pc = 0x34AF1Cu;
    // 0x34af1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34af20: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34af20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34af24: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34af24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34af28: 0x8c633f28  lw          $v1, 0x3F28($v1)
    ctx->pc = 0x34af28u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34af2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34af2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34af30: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34af34: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x34af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x34af38: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x34af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x34af3c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34af3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34af40: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x34af40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34af44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34af48: 0xac243e74  sw          $a0, 0x3E74($at)
    ctx->pc = 0x34af48u;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 4)); // MMIO: 0x70003e74
    // 0x34af4c: 0x1880001e  blez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34AF4Cu;
    {
        const bool branch_taken_0x34af4c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34af4c) {
            ctx->pc = 0x34AFC8u;
            goto label_34afc8;
        }
    }
    ctx->pc = 0x34AF54u;
    // 0x34af54: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34af54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34af58: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34af58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34af5c: 0x8c633f88  lw          $v1, 0x3F88($v1)
    ctx->pc = 0x34af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F88u)); // MMIO: 0x70003f88
    // 0x34af60: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x34af60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34af64: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34af68: 0x8c423f4c  lw          $v0, 0x3F4C($v0)
    ctx->pc = 0x34af68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34af6c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x34af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x34af70: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x34af70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x34af74: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x34af74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34af78: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x34af78u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x34af7c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x34af7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34af80: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x34af80u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x34af84: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34af84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34af88: 0xf  sync
    ctx->pc = 0x34af88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34af8c: 0x40f  sync.p
    ctx->pc = 0x34af8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34af90: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34af94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34af98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34AF98u;
    {
        const bool branch_taken_0x34af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af98) {
            ctx->pc = 0x34AFC8u;
            goto label_34afc8;
        }
    }
    ctx->pc = 0x34AFA0u;
    // 0x34afa0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34afa4: 0xf  sync
    ctx->pc = 0x34afa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34afa8: 0x40f  sync.p
    ctx->pc = 0x34afa8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34afac:
    // 0x34afac: 0x0  nop
    ctx->pc = 0x34afacu;
    // NOP
    // 0x34afb0: 0x0  nop
    ctx->pc = 0x34afb0u;
    // NOP
    // 0x34afb4: 0x0  nop
    ctx->pc = 0x34afb4u;
    // NOP
    // 0x34afb8: 0x0  nop
    ctx->pc = 0x34afb8u;
    // NOP
    // 0x34afbc: 0x0  nop
    ctx->pc = 0x34afbcu;
    // NOP
    // 0x34afc0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34AFC0u;
    {
        const bool branch_taken_0x34afc0 = (false);
        if (branch_taken_0x34afc0) {
            ctx->pc = 0x34AFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34afac;
        }
    }
    ctx->pc = 0x34AFC8u;
label_34afc8:
    // 0x34afc8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34afcc: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34afccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34afd0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34afd4: 0x8c843f28  lw          $a0, 0x3F28($a0)
    ctx->pc = 0x34afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F28u)); // MMIO: 0x70003f28
    // 0x34afd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34afdc: 0x8c423f4c  lw          $v0, 0x3F4C($v0)
    ctx->pc = 0x34afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34afe0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34afe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34afe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34afe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34afe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34afec: 0xac223f4c  sw          $v0, 0x3F4C($at)
    ctx->pc = 0x34afecu;
    runtime->Store32(rdram, ctx, 0x70003F4Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f4c
label_34aff0:
    // 0x34aff0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34aff4: 0x8c423f2c  lw          $v0, 0x3F2C($v0)
    ctx->pc = 0x34aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F2Cu)); // MMIO: 0x70003f2c
    // 0x34aff8: 0x184000f3  blez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x34AFF8u;
    {
        const bool branch_taken_0x34aff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFF8u;
        // 0x34affc: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aff8) {
            ctx->pc = 0x34B3C8u;
            goto label_34b3c8;
        }
    }
    ctx->pc = 0x34B000u;
    // 0x34b000: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b004: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34b004u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34b008: 0x27dec2c8  addiu       $fp, $fp, -0x3D38
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951624));
    // 0x34b00c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b010: 0x8c843f50  lw          $a0, 0x3F50($a0)
    ctx->pc = 0x34b010u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F50u)); // MMIO: 0x70003f50
    // 0x34b014: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x34b014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34b018: 0x8fc500c0  lw          $a1, 0xC0($fp)
    ctx->pc = 0x34b018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
    // 0x34b01c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b020: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34b020u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b024: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34b024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34b028: 0x8cc63e60  lw          $a2, 0x3E60($a2)
    ctx->pc = 0x34b028u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34b02c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34b030: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x34b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34b034: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b038: 0xac223f74  sw          $v0, 0x3F74($at)
    ctx->pc = 0x34b038u;
    runtime->Store32(rdram, ctx, 0x70003F74u, GPR_U32(ctx, 2)); // MMIO: 0x70003f74
    // 0x34b03c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b040: 0xac243f50  sw          $a0, 0x3F50($at)
    ctx->pc = 0x34b040u;
    runtime->Store32(rdram, ctx, 0x70003F50u, GPR_U32(ctx, 4)); // MMIO: 0x70003f50
    // 0x34b044: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b048: 0xac263e64  sw          $a2, 0x3E64($at)
    ctx->pc = 0x34b048u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 6)); // MMIO: 0x70003e64
    // 0x34b04c: 0x4a00089  bltz        $a1, . + 4 + (0x89 << 2)
    ctx->pc = 0x34B04Cu;
    {
        const bool branch_taken_0x34b04c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B04Cu;
        // 0x34b050: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b04c) {
            ctx->pc = 0x34B274u;
            goto label_34b274;
        }
    }
    ctx->pc = 0x34B054u;
label_34b054:
    // 0x34b054: 0x42000039  di
    ctx->pc = 0x34b054u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34b058: 0x40f  sync.p
    ctx->pc = 0x34b058u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b05c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34b060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34b064: 0x0  nop
    ctx->pc = 0x34b064u;
    // NOP
    // 0x34b068: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B068u;
    {
        const bool branch_taken_0x34b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b068) {
            ctx->pc = 0x34B054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b054;
        }
    }
    ctx->pc = 0x34B070u;
    // 0x34b070: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b074: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34b074u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b078: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b07c: 0x8c843f74  lw          $a0, 0x3F74($a0)
    ctx->pc = 0x34b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F74u)); // MMIO: 0x70003f74
    // 0x34b080: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b084: 0x8c633f8c  lw          $v1, 0x3F8C($v1)
    ctx->pc = 0x34b084u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F8Cu)); // MMIO: 0x70003f8c
    // 0x34b088: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b08c: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34b090: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34b090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34b094: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x34b094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b098: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x34b098u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34b09c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34b09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34b0a0: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34b0a0u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34b0a4: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34b0a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34b0a8: 0x20890000  addi        $t1, $a0, 0x0
    ctx->pc = 0x34b0a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34b0ac: 0x206a0000  addi        $t2, $v1, 0x0
    ctx->pc = 0x34b0acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34b0b0: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x34b0b0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34b0b4: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34b0b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b0b8: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34b0b8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b0bc: 0xd9300010  lqc2        $vf16, 0x10($t1)
    ctx->pc = 0x34b0bcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b0c0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b0c4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b0c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b0cc: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34b0ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34b0d0: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b0d0u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b0d4: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b0d8: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34b0d8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b0dc: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34b0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b0e0: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34b0e0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b0e4: 0xd9310010  lqc2        $vf17, 0x10($t1)
    ctx->pc = 0x34b0e4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b0e8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b0ec: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34b0ecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b0f0: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b0f4: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w
    ctx->pc = 0x34b0f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x34b0f8: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b0f8u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b0fc: 0x4be4851b  vmulw.xyzw  $vf20, $vf16, $vf4w
    ctx->pc = 0x34b0fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b100: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b100u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b104: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y
    ctx->pc = 0x34b104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b108: 0xd90a0000  lqc2        $vf10, 0x0($t0)
    ctx->pc = 0x34b108u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b10c: 0x4bf46528  vadd.xyzw   $vf20, $vf12, $vf20
    ctx->pc = 0x34b10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b110: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34b110u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b114: 0x4a202957  vminiw.w    $vf5, $vf5, $vf0w
    ctx->pc = 0x34b114u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b118: 0xd9320010  lqc2        $vf18, 0x10($t1)
    ctx->pc = 0x34b118u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b11c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b120: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b124: 0x4a815283  vaddw.y     $vf10, $vf10, $vf1w
    ctx->pc = 0x34b124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x34b128: 0x4a0002ff  vnop
    ctx->pc = 0x34b128u;
    // NOP operation, no action needed for VU0
label_34b12c:
    // 0x34b12c: 0x4be58d5b  vmulw.xyzw  $vf21, $vf17, $vf5w
    ctx->pc = 0x34b12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34b130: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B130u;
    {
        const bool branch_taken_0x34b130 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B130u;
        // 0x34b134: 0x4a2a5199  vmuly.w     $vf6, $vf10, $vf10y (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b130) {
            ctx->pc = 0x34B144u;
            goto label_34b144;
        }
    }
    ctx->pc = 0x34B138u;
    // 0x34b138: 0xf8740000  sqc2        $vf20, 0x0($v1)
    ctx->pc = 0x34b138u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x34b13c: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34b13cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b140: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b140u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b144:
    // 0x34b144: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b144u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b148: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b148u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b14c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34b14cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b150: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b154: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b158: 0x4a203197  vminiw.w    $vf6, $vf6, $vf0w
    ctx->pc = 0x34b158u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x34b15c: 0xd90b0000  lqc2        $vf11, 0x0($t0)
    ctx->pc = 0x34b15cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b160: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x34b160u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b164: 0xd9330010  lqc2        $vf19, 0x10($t1)
    ctx->pc = 0x34b164u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b168: 0x4bf56d68  vadd.xyzw   $vf21, $vf13, $vf21
    ctx->pc = 0x34b168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34b16c: 0x4a815ac3  vaddw.y     $vf11, $vf11, $vf1w
    ctx->pc = 0x34b16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x34b170: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b170u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b174: 0x1b00003a  blez        $t8, . + 4 + (0x3A << 2)
    ctx->pc = 0x34B174u;
    {
        const bool branch_taken_0x34b174 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B174u;
        // 0x34b178: 0x4be6959b  vmulw.xyzw  $vf22, $vf18, $vf6w (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b174) {
            ctx->pc = 0x34B260u;
            goto label_34b260;
        }
    }
    ctx->pc = 0x34B17Cu;
    // 0x34b17c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B17Cu;
    {
        const bool branch_taken_0x34b17c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B17Cu;
        // 0x34b180: 0x4a2b59d9  vmuly.w     $vf7, $vf11, $vf11y (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b17c) {
            ctx->pc = 0x34B190u;
            goto label_34b190;
        }
    }
    ctx->pc = 0x34B184u;
    // 0x34b184: 0xf8750000  sqc2        $vf21, 0x0($v1)
    ctx->pc = 0x34b184u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x34b188: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34b188u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b18c: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b18cu;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b190:
    // 0x34b190: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b190u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b194: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b194u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b198: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b19c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b1a0: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b1a4: 0x4a2039d7  vminiw.w    $vf7, $vf7, $vf0w
    ctx->pc = 0x34b1a4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x34b1a8: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34b1a8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b1ac: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34b1acu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b1b0: 0xd9300010  lqc2        $vf16, 0x10($t1)
    ctx->pc = 0x34b1b0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b1b4: 0x4bf675a8  vadd.xyzw   $vf22, $vf14, $vf22
    ctx->pc = 0x34b1b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34b1b8: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34b1b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34b1bc: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b1bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b1c0: 0x1b000027  blez        $t8, . + 4 + (0x27 << 2)
    ctx->pc = 0x34B1C0u;
    {
        const bool branch_taken_0x34b1c0 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1C0u;
        // 0x34b1c4: 0x4be79ddb  vmulw.xyzw  $vf23, $vf19, $vf7w (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1c0) {
            ctx->pc = 0x34B260u;
            goto label_34b260;
        }
    }
    ctx->pc = 0x34B1C8u;
    // 0x34b1c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B1C8u;
    {
        const bool branch_taken_0x34b1c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1C8u;
        // 0x34b1cc: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1c8) {
            ctx->pc = 0x34B1DCu;
            goto label_34b1dc;
        }
    }
    ctx->pc = 0x34B1D0u;
    // 0x34b1d0: 0xf8760000  sqc2        $vf22, 0x0($v1)
    ctx->pc = 0x34b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x34b1d4: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34b1d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b1d8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b1d8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b1dc:
    // 0x34b1dc: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b1dcu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b1e0: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b1e0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b1e4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34b1e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b1e8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b1ec: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b1f0: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34b1f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b1f4: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34b1f4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b1f8: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34b1f8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b1fc: 0xd9310010  lqc2        $vf17, 0x10($t1)
    ctx->pc = 0x34b1fcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b200: 0x4bf77de8  vadd.xyzw   $vf23, $vf15, $vf23
    ctx->pc = 0x34b200u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34b204: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w
    ctx->pc = 0x34b204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x34b208: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b208u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b20c: 0x1b000014  blez        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x34B20Cu;
    {
        const bool branch_taken_0x34b20c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B20Cu;
        // 0x34b210: 0x4be4851b  vmulw.xyzw  $vf20, $vf16, $vf4w (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b20c) {
            ctx->pc = 0x34B260u;
            goto label_34b260;
        }
    }
    ctx->pc = 0x34B214u;
    // 0x34b214: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B214u;
    {
        const bool branch_taken_0x34b214 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B214u;
        // 0x34b218: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b214) {
            ctx->pc = 0x34B228u;
            goto label_34b228;
        }
    }
    ctx->pc = 0x34B21Cu;
    // 0x34b21c: 0xf8770000  sqc2        $vf23, 0x0($v1)
    ctx->pc = 0x34b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x34b220: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34b220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b224: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b224u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b228:
    // 0x34b228: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b228u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b22c: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b22cu;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b230: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b234: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b238: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b23c: 0x4a202957  vminiw.w    $vf5, $vf5, $vf0w
    ctx->pc = 0x34b23cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b240: 0xd90a0000  lqc2        $vf10, 0x0($t0)
    ctx->pc = 0x34b240u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b244: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34b244u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b248: 0xd9320010  lqc2        $vf18, 0x10($t1)
    ctx->pc = 0x34b248u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34b24c: 0x4bf46528  vadd.xyzw   $vf20, $vf12, $vf20
    ctx->pc = 0x34b24cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b250: 0x4a815283  vaddw.y     $vf10, $vf10, $vf1w
    ctx->pc = 0x34b250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x34b254: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b254u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b258: 0x1f00ffb4  bgtz        $t8, . + 4 + (-0x4C << 2)
    ctx->pc = 0x34B258u;
    {
        const bool branch_taken_0x34b258 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B258u;
        // 0x34b25c: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b258) {
            ctx->pc = 0x34B12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b12c;
        }
    }
    ctx->pc = 0x34B260u;
label_34b260:
    // 0x34b260: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34b260u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34b264: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x34b264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x34b268: 0x42000038  ei
    ctx->pc = 0x34b268u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34b26c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x34B26Cu;
    {
        const bool branch_taken_0x34b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b26c) {
            ctx->pc = 0x34B310u;
            goto label_34b310;
        }
    }
    ctx->pc = 0x34B274u;
label_34b274:
    // 0x34b274: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x34b274u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
label_34b278:
    // 0x34b278: 0x42000039  di
    ctx->pc = 0x34b278u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34b27c: 0x40f  sync.p
    ctx->pc = 0x34b27cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b280: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34b284: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x34b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x34b288: 0x0  nop
    ctx->pc = 0x34b288u;
    // NOP
    // 0x34b28c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B28Cu;
    {
        const bool branch_taken_0x34b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b28c) {
            ctx->pc = 0x34B278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b278;
        }
    }
    ctx->pc = 0x34B294u;
    // 0x34b294: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b298: 0x8c843f68  lw          $a0, 0x3F68($a0)
    ctx->pc = 0x34b298u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b29c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b2a0: 0x8c633f8c  lw          $v1, 0x3F8C($v1)
    ctx->pc = 0x34b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F8Cu)); // MMIO: 0x70003f8c
    // 0x34b2a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b2a8: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34b2ac: 0x8fbe0014  lw          $fp, 0x14($sp)
    ctx->pc = 0x34b2acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34b2b0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x34b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b2b4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x34b2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34b2b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34b2b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34b2bc: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34b2bcu;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34b2c0: 0x20880000  addi        $t0, $a0, 0x0
    ctx->pc = 0x34b2c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34b2c4: 0x206a0000  addi        $t2, $v1, 0x0
    ctx->pc = 0x34b2c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34b2c8: 0x8fd80000  lw          $t8, 0x0($fp)
    ctx->pc = 0x34b2c8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34b2cc:
    // 0x34b2cc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b2d0: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b2d4: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x34b2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34b2d8: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b2d8u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b2dc: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34b2dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34b2e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b2e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B2E4u;
    {
        const bool branch_taken_0x34b2e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2E4u;
        // 0x34b2e8: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2e4) {
            ctx->pc = 0x34B2F8u;
            goto label_34b2f8;
        }
    }
    ctx->pc = 0x34B2ECu;
    // 0x34b2ec: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34b2ecu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34b2f0: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34b2f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b2f4: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b2f4u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b2f8:
    // 0x34b2f8: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b2f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b2fc: 0x1f00fff3  bgtz        $t8, . + 4 + (-0xD << 2)
    ctx->pc = 0x34B2FCu;
    {
        const bool branch_taken_0x34b2fc = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2FCu;
        // 0x34b300: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2fc) {
            ctx->pc = 0x34B2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b2cc;
        }
    }
    ctx->pc = 0x34B304u;
    // 0x34b304: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34b304u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34b308: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x34b308u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x34b30c: 0x42000038  ei
    ctx->pc = 0x34b30cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_34b310:
    // 0x34b310: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b314: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34b318: 0x1880002b  blez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x34B318u;
    {
        const bool branch_taken_0x34b318 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34b318) {
            ctx->pc = 0x34B3C8u;
            goto label_34b3c8;
        }
    }
    ctx->pc = 0x34B320u;
    // 0x34b320: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34b320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34b324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b328: 0x8c423f8c  lw          $v0, 0x3F8C($v0)
    ctx->pc = 0x34b328u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F8Cu)); // MMIO: 0x70003f8c
    // 0x34b32c: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x34b32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34b330: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b334: 0x8c633f54  lw          $v1, 0x3F54($v1)
    ctx->pc = 0x34b334u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F54u)); // MMIO: 0x70003f54
    // 0x34b338: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x34b338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x34b33c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x34b33cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b340: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x34b340u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x34b344: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b348: 0x8c423f2c  lw          $v0, 0x3F2C($v0)
    ctx->pc = 0x34b348u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F2Cu)); // MMIO: 0x70003f2c
    // 0x34b34c: 0x8fab0024  lw          $t3, 0x24($sp)
    ctx->pc = 0x34b34cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34b350: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x34b350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34b354: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34b354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34b358: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x34b358u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x34b35c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34b360: 0xf  sync
    ctx->pc = 0x34b360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b364: 0x40f  sync.p
    ctx->pc = 0x34b364u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b368: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34b36c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b370: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34B370u;
    {
        const bool branch_taken_0x34b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b370) {
            ctx->pc = 0x34B3A0u;
            goto label_34b3a0;
        }
    }
    ctx->pc = 0x34B378u;
    // 0x34b378: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34b378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34b37c: 0xf  sync
    ctx->pc = 0x34b37cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b380: 0x40f  sync.p
    ctx->pc = 0x34b380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34b384:
    // 0x34b384: 0x0  nop
    ctx->pc = 0x34b384u;
    // NOP
    // 0x34b388: 0x0  nop
    ctx->pc = 0x34b388u;
    // NOP
    // 0x34b38c: 0x0  nop
    ctx->pc = 0x34b38cu;
    // NOP
    // 0x34b390: 0x0  nop
    ctx->pc = 0x34b390u;
    // NOP
    // 0x34b394: 0x0  nop
    ctx->pc = 0x34b394u;
    // NOP
    // 0x34b398: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B398u;
    {
        const bool branch_taken_0x34b398 = (false);
        if (branch_taken_0x34b398) {
            ctx->pc = 0x34B384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b384;
        }
    }
    ctx->pc = 0x34B3A0u;
label_34b3a0:
    // 0x34b3a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3a4: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34b3a8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3ac: 0x8c843f2c  lw          $a0, 0x3F2C($a0)
    ctx->pc = 0x34b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F2Cu)); // MMIO: 0x70003f2c
    // 0x34b3b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3b4: 0x8c423f54  lw          $v0, 0x3F54($v0)
    ctx->pc = 0x34b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F54u)); // MMIO: 0x70003f54
    // 0x34b3b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34b3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34b3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34b3c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3c4: 0xac223f54  sw          $v0, 0x3F54($at)
    ctx->pc = 0x34b3c4u;
    runtime->Store32(rdram, ctx, 0x70003F54u, GPR_U32(ctx, 2)); // MMIO: 0x70003f54
label_34b3c8:
    // 0x34b3c8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3cc: 0x8ca53f30  lw          $a1, 0x3F30($a1)
    ctx->pc = 0x34b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34b3d0: 0x18a001a9  blez        $a1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x34B3D0u;
    {
        const bool branch_taken_0x34b3d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x34B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3D0u;
        // 0x34b3d4: 0x3c0c0062  lui         $t4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3d0) {
            ctx->pc = 0x34BA78u;
            goto label_34ba78;
        }
    }
    ctx->pc = 0x34B3D8u;
    // 0x34b3d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3dc: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b3e0: 0x258cc2c8  addiu       $t4, $t4, -0x3D38
    ctx->pc = 0x34b3e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294951624));
    // 0x34b3e4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3e8: 0x8c633e60  lw          $v1, 0x3E60($v1)
    ctx->pc = 0x34b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34b3ec: 0x8d8400c4  lw          $a0, 0xC4($t4)
    ctx->pc = 0x34b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
    // 0x34b3f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b3f4: 0xac233e64  sw          $v1, 0x3E64($at)
    ctx->pc = 0x34b3f4u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 3)); // MMIO: 0x70003e64
    // 0x34b3f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34b3fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b400: 0xac223f78  sw          $v0, 0x3F78($at)
    ctx->pc = 0x34b400u;
    runtime->Store32(rdram, ctx, 0x70003F78u, GPR_U32(ctx, 2)); // MMIO: 0x70003f78
    // 0x34b404: 0x48000c4  bltz        $a0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x34B404u;
    {
        const bool branch_taken_0x34b404 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34b404) {
            ctx->pc = 0x34B718u;
            goto label_34b718;
        }
    }
    ctx->pc = 0x34B40Cu;
    // 0x34b40c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b410: 0x8c423e6c  lw          $v0, 0x3E6C($v0)
    ctx->pc = 0x34b410u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34b414: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b418: 0x8c633f58  lw          $v1, 0x3F58($v1)
    ctx->pc = 0x34b418u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F58u)); // MMIO: 0x70003f58
    // 0x34b41c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x34b41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34b420: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b424: 0x8ca53f5c  lw          $a1, 0x3F5C($a1)
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34b428: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x34b428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34b42c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34b430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b434: 0xac233f58  sw          $v1, 0x3F58($at)
    ctx->pc = 0x34b434u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 3)); // MMIO: 0x70003f58
    // 0x34b438: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34B438u;
    {
        const bool branch_taken_0x34b438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b438) {
            ctx->pc = 0x34B4D4u;
            goto label_34b4d4;
        }
    }
    ctx->pc = 0x34B440u;
    // 0x34b440: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34b440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34b444: 0xb61824  and         $v1, $a1, $s6
    ctx->pc = 0x34b444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
    // 0x34b448: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b44c: 0x8c423f90  lw          $v0, 0x3F90($v0)
    ctx->pc = 0x34b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b450: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x34b450u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b454: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x34b454u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b458: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x34b458u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x34b45c: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x34b45cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b460: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x34b460u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x34b464: 0xaeef0000  sw          $t7, 0x0($s7)
    ctx->pc = 0x34b464u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 15));
    // 0x34b468: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34b468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34b46c: 0xf  sync
    ctx->pc = 0x34b46cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b470: 0x40f  sync.p
    ctx->pc = 0x34b470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34b478: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b47c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B47Cu;
    {
        const bool branch_taken_0x34b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b47c) {
            ctx->pc = 0x34B4D4u;
            goto label_34b4d4;
        }
    }
    ctx->pc = 0x34B484u;
    // 0x34b484: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34b484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34b488: 0xf  sync
    ctx->pc = 0x34b488u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b48c: 0x40f  sync.p
    ctx->pc = 0x34b48cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34b490:
    // 0x34b490: 0x0  nop
    ctx->pc = 0x34b490u;
    // NOP
    // 0x34b494: 0x0  nop
    ctx->pc = 0x34b494u;
    // NOP
    // 0x34b498: 0x0  nop
    ctx->pc = 0x34b498u;
    // NOP
    // 0x34b49c: 0x0  nop
    ctx->pc = 0x34b49cu;
    // NOP
    // 0x34b4a0: 0x0  nop
    ctx->pc = 0x34b4a0u;
    // NOP
    // 0x34b4a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B4A4u;
    {
        const bool branch_taken_0x34b4a4 = (false);
        if (branch_taken_0x34b4a4) {
            ctx->pc = 0x34B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b490;
        }
    }
    ctx->pc = 0x34B4ACu;
    // 0x34b4ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34b4b0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34b4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34b4b4: 0x0  nop
    ctx->pc = 0x34b4b4u;
    // NOP
label_34b4b8:
    // 0x34b4b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34b4bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b4c0: 0x0  nop
    ctx->pc = 0x34b4c0u;
    // NOP
    // 0x34b4c4: 0x0  nop
    ctx->pc = 0x34b4c4u;
    // NOP
    // 0x34b4c8: 0x0  nop
    ctx->pc = 0x34b4c8u;
    // NOP
    // 0x34b4cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B4CCu;
    {
        const bool branch_taken_0x34b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b4cc) {
            ctx->pc = 0x34B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b4b8;
        }
    }
    ctx->pc = 0x34B4D4u;
label_34b4d4:
    // 0x34b4d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b4d8: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x34b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34b4dc: 0x3c1e0001  lui         $fp, 0x1
    ctx->pc = 0x34b4dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1 << 16));
    // 0x34b4e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34b4e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b4e8: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34b4e8u;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
label_34b4ec:
    // 0x34b4ec: 0x42000039  di
    ctx->pc = 0x34b4ecu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34b4f0: 0x40f  sync.p
    ctx->pc = 0x34b4f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b4f4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x34b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x34b4f8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x34b4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x34b4fc: 0x0  nop
    ctx->pc = 0x34b4fcu;
    // NOP
    // 0x34b500: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B500u;
    {
        const bool branch_taken_0x34b500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b500) {
            ctx->pc = 0x34B4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b4ec;
        }
    }
    ctx->pc = 0x34B508u;
    // 0x34b508: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b50c: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34b510: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b514: 0x8c843f90  lw          $a0, 0x3F90($a0)
    ctx->pc = 0x34b514u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b518: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b51c: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b520: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34b520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34b524: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b528: 0x8c633f78  lw          $v1, 0x3F78($v1)
    ctx->pc = 0x34b528u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F78u)); // MMIO: 0x70003f78
    // 0x34b52c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b530: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34b530u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34b534: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34b538: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x34b538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b53c: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x34b53cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34b540: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34b540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34b544: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34b544u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34b548: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34b548u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34b54c: 0x20690000  addi        $t1, $v1, 0x0
    ctx->pc = 0x34b54cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34b550: 0x208a0000  addi        $t2, $a0, 0x0
    ctx->pc = 0x34b550u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34b554: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x34b554u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34b558: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34b558u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b55c: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34b55cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b560: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b564: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b568: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b56c: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34b56cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34b570: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b570u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b574: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b574u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b578: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34b578u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b57c: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34b57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b580: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34b580u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b584: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b588: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b58c: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34b58cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b590: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w
    ctx->pc = 0x34b590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x34b594: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b594u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b598: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b598u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b59c: 0x4a64651b  vmulw.zw    $vf20, $vf12, $vf4w
    ctx->pc = 0x34b59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b5a0: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y
    ctx->pc = 0x34b5a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b5a4: 0xd90a0000  lqc2        $vf10, 0x0($t0)
    ctx->pc = 0x34b5a4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b5a8: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34b5a8u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b5ac: 0x4b146502  vaddz.x     $vf20, $vf12, $vf20z
    ctx->pc = 0x34b5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b5b0: 0x4a946503  vaddw.y     $vf20, $vf12, $vf20w
    ctx->pc = 0x34b5b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b5b4: 0x4a202957  vminiw.w    $vf5, $vf5, $vf0w
    ctx->pc = 0x34b5b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b5b8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b5bc: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b5c0: 0x4a815283  vaddw.y     $vf10, $vf10, $vf1w
    ctx->pc = 0x34b5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_34b5c4:
    // 0x34b5c4: 0x4a656d5b  vmulw.zw    $vf21, $vf13, $vf5w
    ctx->pc = 0x34b5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34b5c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B5C8u;
    {
        const bool branch_taken_0x34b5c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5C8u;
        // 0x34b5cc: 0x4839a000  qmfc2.ni    $t9, $vf20 (Delay Slot)
        SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5c8) {
            ctx->pc = 0x34B5DCu;
            goto label_34b5dc;
        }
    }
    ctx->pc = 0x34B5D0u;
    // 0x34b5d0: 0xfc990000  sd          $t9, 0x0($a0)
    ctx->pc = 0x34b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 25));
    // 0x34b5d4: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x34b5d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34b5d8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b5d8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b5dc:
    // 0x34b5dc: 0x4a2a5199  vmuly.w     $vf6, $vf10, $vf10y
    ctx->pc = 0x34b5dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x34b5e0: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b5e0u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b5e4: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b5e8: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b5e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b5ec: 0xd90b0000  lqc2        $vf11, 0x0($t0)
    ctx->pc = 0x34b5ecu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b5f0: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x34b5f0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b5f4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34b5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b5f8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b5fc: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b600: 0x4b156d42  vaddz.x     $vf21, $vf13, $vf21z
    ctx->pc = 0x34b600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34b604: 0x4a956d43  vaddw.y     $vf21, $vf13, $vf21w
    ctx->pc = 0x34b604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34b608: 0x4a203197  vminiw.w    $vf6, $vf6, $vf0w
    ctx->pc = 0x34b608u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x34b60c: 0x1b00003d  blez        $t8, . + 4 + (0x3D << 2)
    ctx->pc = 0x34B60Cu;
    {
        const bool branch_taken_0x34b60c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B60Cu;
        // 0x34b610: 0x4a815ac3  vaddw.y     $vf11, $vf11, $vf1w (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b60c) {
            ctx->pc = 0x34B704u;
            goto label_34b704;
        }
    }
    ctx->pc = 0x34B614u;
    // 0x34b614: 0x4a66759b  vmulw.zw    $vf22, $vf14, $vf6w
    ctx->pc = 0x34b614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34b618: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B618u;
    {
        const bool branch_taken_0x34b618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B618u;
        // 0x34b61c: 0x4839a800  qmfc2.ni    $t9, $vf21 (Delay Slot)
        SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b618) {
            ctx->pc = 0x34B62Cu;
            goto label_34b62c;
        }
    }
    ctx->pc = 0x34B620u;
    // 0x34b620: 0xfc990000  sd          $t9, 0x0($a0)
    ctx->pc = 0x34b620u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 25));
    // 0x34b624: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x34b624u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34b628: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b628u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b62c:
    // 0x34b62c: 0x4a2b59d9  vmuly.w     $vf7, $vf11, $vf11y
    ctx->pc = 0x34b62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x34b630: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b630u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b634: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b634u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b638: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b638u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b63c: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x34b63cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b640: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34b640u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b644: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b648: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b64c: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b650: 0x4b167582  vaddz.x     $vf22, $vf14, $vf22z
    ctx->pc = 0x34b650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34b654: 0x4a967583  vaddw.y     $vf22, $vf14, $vf22w
    ctx->pc = 0x34b654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34b658: 0x4a2039d7  vminiw.w    $vf7, $vf7, $vf0w
    ctx->pc = 0x34b658u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x34b65c: 0x1b000029  blez        $t8, . + 4 + (0x29 << 2)
    ctx->pc = 0x34B65Cu;
    {
        const bool branch_taken_0x34b65c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B65Cu;
        // 0x34b660: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b65c) {
            ctx->pc = 0x34B704u;
            goto label_34b704;
        }
    }
    ctx->pc = 0x34B664u;
    // 0x34b664: 0x4a677ddb  vmulw.zw    $vf23, $vf15, $vf7w
    ctx->pc = 0x34b664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34b668: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B668u;
    {
        const bool branch_taken_0x34b668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B668u;
        // 0x34b66c: 0x4839b000  qmfc2.ni    $t9, $vf22 (Delay Slot)
        SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b668) {
            ctx->pc = 0x34B67Cu;
            goto label_34b67c;
        }
    }
    ctx->pc = 0x34B670u;
    // 0x34b670: 0xfc990000  sd          $t9, 0x0($a0)
    ctx->pc = 0x34b670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 25));
    // 0x34b674: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x34b674u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34b678: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b678u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b67c:
    // 0x34b67c: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34b67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b680: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b680u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b684: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b684u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b688: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b688u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b68c: 0xd9090000  lqc2        $vf9, 0x0($t0)
    ctx->pc = 0x34b68cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b690: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34b690u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b694: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34b694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b698: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b69c: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34b6a0: 0x4b177dc2  vaddz.x     $vf23, $vf15, $vf23z
    ctx->pc = 0x34b6a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34b6a4: 0x4a977dc3  vaddw.y     $vf23, $vf15, $vf23w
    ctx->pc = 0x34b6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34b6a8: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34b6a8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34b6ac: 0x1b000015  blez        $t8, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B6ACu;
    {
        const bool branch_taken_0x34b6ac = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6ACu;
        // 0x34b6b0: 0x4a814a43  vaddw.y     $vf9, $vf9, $vf1w (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6ac) {
            ctx->pc = 0x34B704u;
            goto label_34b704;
        }
    }
    ctx->pc = 0x34B6B4u;
    // 0x34b6b4: 0x4a64651b  vmulw.zw    $vf20, $vf12, $vf4w
    ctx->pc = 0x34b6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b6b8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B6B8u;
    {
        const bool branch_taken_0x34b6b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6B8u;
        // 0x34b6bc: 0x4839b800  qmfc2.ni    $t9, $vf23 (Delay Slot)
        SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6b8) {
            ctx->pc = 0x34B6CCu;
            goto label_34b6cc;
        }
    }
    ctx->pc = 0x34B6C0u;
    // 0x34b6c0: 0xfc990000  sd          $t9, 0x0($a0)
    ctx->pc = 0x34b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 25));
    // 0x34b6c4: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x34b6c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34b6c8: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b6c8u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b6cc:
    // 0x34b6cc: 0x4a294959  vmuly.w     $vf5, $vf9, $vf9y
    ctx->pc = 0x34b6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b6d0: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b6d0u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b6d4: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34b6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34b6d8: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b6d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b6dc: 0xd90a0000  lqc2        $vf10, 0x0($t0)
    ctx->pc = 0x34b6dcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b6e0: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34b6e0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34b6e4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b6e8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b6ec: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b6f0: 0x4b146502  vaddz.x     $vf20, $vf12, $vf20z
    ctx->pc = 0x34b6f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b6f4: 0x4a946503  vaddw.y     $vf20, $vf12, $vf20w
    ctx->pc = 0x34b6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34b6f8: 0x4a202957  vminiw.w    $vf5, $vf5, $vf0w
    ctx->pc = 0x34b6f8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34b6fc: 0x1f00ffb1  bgtz        $t8, . + 4 + (-0x4F << 2)
    ctx->pc = 0x34B6FCu;
    {
        const bool branch_taken_0x34b6fc = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6FCu;
        // 0x34b700: 0x4a815283  vaddw.y     $vf10, $vf10, $vf1w (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6fc) {
            ctx->pc = 0x34B5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b5c4;
        }
    }
    ctx->pc = 0x34B704u;
label_34b704:
    // 0x34b704: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34b704u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34b708: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x34b708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x34b70c: 0x42000038  ei
    ctx->pc = 0x34b70cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34b710: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x34B710u;
    {
        const bool branch_taken_0x34b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b710) {
            ctx->pc = 0x34B99Cu;
            goto label_34b99c;
        }
    }
    ctx->pc = 0x34B718u;
label_34b718:
    // 0x34b718: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b71c: 0x8c633f5c  lw          $v1, 0x3F5C($v1)
    ctx->pc = 0x34b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34b720: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x34b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34b724: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34B724u;
    {
        const bool branch_taken_0x34b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b724) {
            ctx->pc = 0x34B7BCu;
            goto label_34b7bc;
        }
    }
    ctx->pc = 0x34B72Cu;
    // 0x34b72c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34b730: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34b734: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b738: 0x8c423f90  lw          $v0, 0x3F90($v0)
    ctx->pc = 0x34b738u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b73c: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x34b73cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b740: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x34b740u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x34b744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b748: 0x8fbe0030  lw          $fp, 0x30($sp)
    ctx->pc = 0x34b748u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b74c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34b750: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34b750u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34b754: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34b754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34b758: 0xf  sync
    ctx->pc = 0x34b758u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b75c: 0x40f  sync.p
    ctx->pc = 0x34b75cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b760: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34b764: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b768: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34B768u;
    {
        const bool branch_taken_0x34b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b768) {
            ctx->pc = 0x34B7BCu;
            goto label_34b7bc;
        }
    }
    ctx->pc = 0x34B770u;
    // 0x34b770: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34b770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34b774: 0xf  sync
    ctx->pc = 0x34b774u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b778: 0x40f  sync.p
    ctx->pc = 0x34b778u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34b77c:
    // 0x34b77c: 0x0  nop
    ctx->pc = 0x34b77cu;
    // NOP
    // 0x34b780: 0x0  nop
    ctx->pc = 0x34b780u;
    // NOP
    // 0x34b784: 0x0  nop
    ctx->pc = 0x34b784u;
    // NOP
    // 0x34b788: 0x0  nop
    ctx->pc = 0x34b788u;
    // NOP
    // 0x34b78c: 0x0  nop
    ctx->pc = 0x34b78cu;
    // NOP
    // 0x34b790: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B790u;
    {
        const bool branch_taken_0x34b790 = (false);
        if (branch_taken_0x34b790) {
            ctx->pc = 0x34B77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b77c;
        }
    }
    ctx->pc = 0x34B798u;
    // 0x34b798: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34b798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34b79c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34b79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34b7a0:
    // 0x34b7a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34b7a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b7a8: 0x0  nop
    ctx->pc = 0x34b7a8u;
    // NOP
    // 0x34b7ac: 0x0  nop
    ctx->pc = 0x34b7acu;
    // NOP
    // 0x34b7b0: 0x0  nop
    ctx->pc = 0x34b7b0u;
    // NOP
    // 0x34b7b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B7B4u;
    {
        const bool branch_taken_0x34b7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b7b4) {
            ctx->pc = 0x34B7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b7a0;
        }
    }
    ctx->pc = 0x34B7BCu;
label_34b7bc:
    // 0x34b7bc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b7c0: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34b7c4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x34b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b7c8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b7cc: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x34b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34b7d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34b7d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b7d8: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x34b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34b7dc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x34b7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x34b7e0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x34b7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34b7e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34b7e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b7ec: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34b7ecu;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
    // 0x34b7f0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x34b7f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x34b7f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34b7f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b7fc: 0xac243e74  sw          $a0, 0x3E74($at)
    ctx->pc = 0x34b7fcu;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 4)); // MMIO: 0x70003e74
    // 0x34b800: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34b800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34b804: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b808: 0x8c423f90  lw          $v0, 0x3F90($v0)
    ctx->pc = 0x34b808u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b80c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x34b80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b810: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x34b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34b814: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b818: 0x8c633f58  lw          $v1, 0x3F58($v1)
    ctx->pc = 0x34b818u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F58u)); // MMIO: 0x70003f58
    // 0x34b81c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x34b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x34b820: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34b824: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x34b824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b828: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x34b828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x34b82c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x34b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x34b830: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34b830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34b834: 0xf  sync
    ctx->pc = 0x34b834u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b838: 0x40f  sync.p
    ctx->pc = 0x34b838u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b83c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34b840: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b844: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B844u;
    {
        const bool branch_taken_0x34b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b844) {
            ctx->pc = 0x34B89Cu;
            goto label_34b89c;
        }
    }
    ctx->pc = 0x34B84Cu;
    // 0x34b84c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34b850: 0xf  sync
    ctx->pc = 0x34b850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b854: 0x40f  sync.p
    ctx->pc = 0x34b854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34b858:
    // 0x34b858: 0x0  nop
    ctx->pc = 0x34b858u;
    // NOP
    // 0x34b85c: 0x0  nop
    ctx->pc = 0x34b85cu;
    // NOP
    // 0x34b860: 0x0  nop
    ctx->pc = 0x34b860u;
    // NOP
    // 0x34b864: 0x0  nop
    ctx->pc = 0x34b864u;
    // NOP
    // 0x34b868: 0x0  nop
    ctx->pc = 0x34b868u;
    // NOP
    // 0x34b86c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B86Cu;
    {
        const bool branch_taken_0x34b86c = (false);
        if (branch_taken_0x34b86c) {
            ctx->pc = 0x34B858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b858;
        }
    }
    ctx->pc = 0x34B874u;
    // 0x34b874: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34b874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34b878: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34b878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34b87c: 0x0  nop
    ctx->pc = 0x34b87cu;
    // NOP
label_34b880:
    // 0x34b880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34b884: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34b884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34b888: 0x0  nop
    ctx->pc = 0x34b888u;
    // NOP
    // 0x34b88c: 0x0  nop
    ctx->pc = 0x34b88cu;
    // NOP
    // 0x34b890: 0x0  nop
    ctx->pc = 0x34b890u;
    // NOP
    // 0x34b894: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B894u;
    {
        const bool branch_taken_0x34b894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b894) {
            ctx->pc = 0x34B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b880;
        }
    }
    ctx->pc = 0x34B89Cu;
label_34b89c:
    // 0x34b89c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8a0: 0x8ca53f58  lw          $a1, 0x3F58($a1)
    ctx->pc = 0x34b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F58u)); // MMIO: 0x70003f58
    // 0x34b8a4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8a8: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34b8ac: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x34b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34b8b0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8b4: 0x8c843f30  lw          $a0, 0x3F30($a0)
    ctx->pc = 0x34b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34b8b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8bc: 0xac223ed0  sw          $v0, 0x3ED0($at)
    ctx->pc = 0x34b8bcu;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed0
    // 0x34b8c0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x34b8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34b8c4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x34b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34b8c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8cc: 0xac233f58  sw          $v1, 0x3F58($at)
    ctx->pc = 0x34b8ccu;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 3)); // MMIO: 0x70003f58
    // 0x34b8d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x34b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_34b8d4:
    // 0x34b8d4: 0x42000039  di
    ctx->pc = 0x34b8d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34b8d8: 0x40f  sync.p
    ctx->pc = 0x34b8d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34b8dc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34b8e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34b8e4: 0x0  nop
    ctx->pc = 0x34b8e4u;
    // NOP
    // 0x34b8e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B8E8u;
    {
        const bool branch_taken_0x34b8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b8e8) {
            ctx->pc = 0x34B8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b8d4;
        }
    }
    ctx->pc = 0x34B8F0u;
    // 0x34b8f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8f4: 0x8c843f90  lw          $a0, 0x3F90($a0)
    ctx->pc = 0x34b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b8f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b8fc: 0x8c633ed0  lw          $v1, 0x3ED0($v1)
    ctx->pc = 0x34b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34b900: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b904: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34b904u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34b908: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34b908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34b90c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34b910: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34b910u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34b914: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34b918: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x34b918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34b91c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b920: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34b920u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34b924: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34b924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34b928: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x34b928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b92c: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x34b92cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34b930: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34b930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34b934: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34b934u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34b938: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34b938u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34b93c: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x34b93cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34b940:
    // 0x34b940: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b944: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34b948: 0xdc6c0000  ld          $t4, 0x0($v1)
    ctx->pc = 0x34b948u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b94c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34b94cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34b950: 0x20630008  addi        $v1, $v1, 0x8
    ctx->pc = 0x34b950u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b954: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b958: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34B958u;
    {
        const bool branch_taken_0x34b958 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B958u;
        // 0x34b95c: 0xfc8c0000  sd          $t4, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b958) {
            ctx->pc = 0x34B96Cu;
            goto label_34b96c;
        }
    }
    ctx->pc = 0x34B960u;
    // 0x34b960: 0xa22820  add         $a1, $a1, $v0
    ctx->pc = 0x34b960u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x34b964: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x34b964u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34b968: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34b968u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34b96c:
    // 0x34b96c: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34b96cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34b970: 0x1f00fff3  bgtz        $t8, . + 4 + (-0xD << 2)
    ctx->pc = 0x34B970u;
    {
        const bool branch_taken_0x34b970 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B970u;
        // 0x34b974: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b970) {
            ctx->pc = 0x34B940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b940;
        }
    }
    ctx->pc = 0x34B978u;
    // 0x34b978: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x34b978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34b97c: 0x651822  sub         $v1, $v1, $a1
    ctx->pc = 0x34b97cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34b980: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x34b980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34b984: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34b984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34b988: 0xdc6c0000  ld          $t4, 0x0($v1)
    ctx->pc = 0x34b988u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b98c: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x34b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x34b990: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34b990u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34b994: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x34b994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x34b998: 0x42000038  ei
    ctx->pc = 0x34b998u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_34b99c:
    // 0x34b99c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9a0: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34b9a4: 0x18800034  blez        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x34B9A4u;
    {
        const bool branch_taken_0x34b9a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B9A4u;
        // 0x34b9a8: 0x240cfffe  addiu       $t4, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9a4) {
            ctx->pc = 0x34BA78u;
            goto label_34ba78;
        }
    }
    ctx->pc = 0x34B9ACu;
    // 0x34b9ac: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9b0: 0x8c633ed4  lw          $v1, 0x3ED4($v1)
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34b9b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9b8: 0x8c423f30  lw          $v0, 0x3F30($v0)
    ctx->pc = 0x34b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34b9bc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x34b9bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x34b9c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34b9c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34b9c8: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x34b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x34b9cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x34b9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34b9d0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34b9d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34b9d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34b9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9d8: 0xac233e74  sw          $v1, 0x3E74($at)
    ctx->pc = 0x34b9d8u;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 3)); // MMIO: 0x70003e74
    // 0x34b9dc: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34b9e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9e4: 0x8c843f90  lw          $a0, 0x3F90($a0)
    ctx->pc = 0x34b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F90u)); // MMIO: 0x70003f90
    // 0x34b9e8: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x34b9e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34b9ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34b9f0: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34b9f4: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x34b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x34b9f8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x34b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x34b9fc: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x34b9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ba00: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x34ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x34ba04: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x34ba04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34ba08: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x34ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x34ba0c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34ba10: 0xf  sync
    ctx->pc = 0x34ba10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ba14: 0x40f  sync.p
    ctx->pc = 0x34ba14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ba18: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34ba1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34ba20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34BA20u;
    {
        const bool branch_taken_0x34ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba20) {
            ctx->pc = 0x34BA50u;
            goto label_34ba50;
        }
    }
    ctx->pc = 0x34BA28u;
    // 0x34ba28: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34ba2c: 0xf  sync
    ctx->pc = 0x34ba2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34ba30: 0x40f  sync.p
    ctx->pc = 0x34ba30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34ba34:
    // 0x34ba34: 0x0  nop
    ctx->pc = 0x34ba34u;
    // NOP
    // 0x34ba38: 0x0  nop
    ctx->pc = 0x34ba38u;
    // NOP
    // 0x34ba3c: 0x0  nop
    ctx->pc = 0x34ba3cu;
    // NOP
    // 0x34ba40: 0x0  nop
    ctx->pc = 0x34ba40u;
    // NOP
    // 0x34ba44: 0x0  nop
    ctx->pc = 0x34ba44u;
    // NOP
    // 0x34ba48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BA48u;
    {
        const bool branch_taken_0x34ba48 = (false);
        if (branch_taken_0x34ba48) {
            ctx->pc = 0x34BA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ba34;
        }
    }
    ctx->pc = 0x34BA50u;
label_34ba50:
    // 0x34ba50: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba54: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34ba58: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba5c: 0x8c843f30  lw          $a0, 0x3F30($a0)
    ctx->pc = 0x34ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F30u)); // MMIO: 0x70003f30
    // 0x34ba60: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba64: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x34ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34ba68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34ba68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ba6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ba70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ba70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba74: 0xac223f5c  sw          $v0, 0x3F5C($at)
    ctx->pc = 0x34ba74u;
    runtime->Store32(rdram, ctx, 0x70003F5Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f5c
label_34ba78:
    // 0x34ba78: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba7c: 0x8ca53f34  lw          $a1, 0x3F34($a1)
    ctx->pc = 0x34ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F34u)); // MMIO: 0x70003f34
    // 0x34ba80: 0x18a0016d  blez        $a1, . + 4 + (0x16D << 2)
    ctx->pc = 0x34BA80u;
    {
        const bool branch_taken_0x34ba80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x34BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA80u;
        // 0x34ba84: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba80) {
            ctx->pc = 0x34C038u;
            goto label_34c038;
        }
    }
    ctx->pc = 0x34BA88u;
    // 0x34ba88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba8c: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34ba90: 0x27dec2c8  addiu       $fp, $fp, -0x3D38
    ctx->pc = 0x34ba90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951624));
    // 0x34ba94: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ba98: 0x8c633e60  lw          $v1, 0x3E60($v1)
    ctx->pc = 0x34ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34ba9c: 0x8fc400d0  lw          $a0, 0xD0($fp)
    ctx->pc = 0x34ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 208)));
    // 0x34baa0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34baa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34baa4: 0xac233e64  sw          $v1, 0x3E64($at)
    ctx->pc = 0x34baa4u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 3)); // MMIO: 0x70003e64
    // 0x34baa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34baac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34baacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bab0: 0xac223f80  sw          $v0, 0x3F80($at)
    ctx->pc = 0x34bab0u;
    runtime->Store32(rdram, ctx, 0x70003F80u, GPR_U32(ctx, 2)); // MMIO: 0x70003f80
    // 0x34bab4: 0x480007e  bltz        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x34BAB4u;
    {
        const bool branch_taken_0x34bab4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34bab4) {
            ctx->pc = 0x34BCB0u;
            goto label_34bcb0;
        }
    }
    ctx->pc = 0x34BABCu;
    // 0x34babc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bac0: 0x8c423e6c  lw          $v0, 0x3E6C($v0)
    ctx->pc = 0x34bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34bac4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bac8: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x34bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F60u)); // MMIO: 0x70003f60
    // 0x34bacc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x34baccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34bad0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34bad4: 0x8ca53f64  lw          $a1, 0x3F64($a1)
    ctx->pc = 0x34bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34bad8: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x34bad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34badc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34bae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bae4: 0xac233f60  sw          $v1, 0x3F60($at)
    ctx->pc = 0x34bae4u;
    runtime->Store32(rdram, ctx, 0x70003F60u, GPR_U32(ctx, 3)); // MMIO: 0x70003f60
    // 0x34bae8: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34BAE8u;
    {
        const bool branch_taken_0x34bae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bae8) {
            ctx->pc = 0x34BB84u;
            goto label_34bb84;
        }
    }
    ctx->pc = 0x34BAF0u;
    // 0x34baf0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34baf4: 0xb61824  and         $v1, $a1, $s6
    ctx->pc = 0x34baf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
    // 0x34baf8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bafc: 0x8c423f94  lw          $v0, 0x3F94($v0)
    ctx->pc = 0x34bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34bb00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34bb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bb04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x34bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bb08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34bb0c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x34bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bb10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34bb14: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x34bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x34bb18: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34bb1c: 0xf  sync
    ctx->pc = 0x34bb1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bb20: 0x40f  sync.p
    ctx->pc = 0x34bb20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bb24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bb28: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bb2c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34BB2Cu;
    {
        const bool branch_taken_0x34bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb2c) {
            ctx->pc = 0x34BB84u;
            goto label_34bb84;
        }
    }
    ctx->pc = 0x34BB34u;
    // 0x34bb34: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34bb38: 0xf  sync
    ctx->pc = 0x34bb38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bb3c: 0x40f  sync.p
    ctx->pc = 0x34bb3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34bb40:
    // 0x34bb40: 0x0  nop
    ctx->pc = 0x34bb40u;
    // NOP
    // 0x34bb44: 0x0  nop
    ctx->pc = 0x34bb44u;
    // NOP
    // 0x34bb48: 0x0  nop
    ctx->pc = 0x34bb48u;
    // NOP
    // 0x34bb4c: 0x0  nop
    ctx->pc = 0x34bb4cu;
    // NOP
    // 0x34bb50: 0x0  nop
    ctx->pc = 0x34bb50u;
    // NOP
    // 0x34bb54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BB54u;
    {
        const bool branch_taken_0x34bb54 = (false);
        if (branch_taken_0x34bb54) {
            ctx->pc = 0x34BB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bb40;
        }
    }
    ctx->pc = 0x34BB5Cu;
    // 0x34bb5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34bb60: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34bb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34bb64: 0x0  nop
    ctx->pc = 0x34bb64u;
    // NOP
label_34bb68:
    // 0x34bb68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34bb6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bb70: 0x0  nop
    ctx->pc = 0x34bb70u;
    // NOP
    // 0x34bb74: 0x0  nop
    ctx->pc = 0x34bb74u;
    // NOP
    // 0x34bb78: 0x0  nop
    ctx->pc = 0x34bb78u;
    // NOP
    // 0x34bb7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BB7Cu;
    {
        const bool branch_taken_0x34bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb7c) {
            ctx->pc = 0x34BB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bb68;
        }
    }
    ctx->pc = 0x34BB84u;
label_34bb84:
    // 0x34bb84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bb88: 0x8c423f64  lw          $v0, 0x3F64($v0)
    ctx->pc = 0x34bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34bb8c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x34bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x34bb90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bb94: 0xe4273ea0  swc1        $f7, 0x3EA0($at)
    ctx->pc = 0x34bb94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003EA0u, bits); }
    // 0x34bb98: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34bb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34bb9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bba0: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34bba0u;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
label_34bba4:
    // 0x34bba4: 0x42000039  di
    ctx->pc = 0x34bba4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34bba8: 0x40f  sync.p
    ctx->pc = 0x34bba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bbac: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x34bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x34bbb0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x34bbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x34bbb4: 0x0  nop
    ctx->pc = 0x34bbb4u;
    // NOP
    // 0x34bbb8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BBB8u;
    {
        const bool branch_taken_0x34bbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bbb8) {
            ctx->pc = 0x34BBA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bba4;
        }
    }
    ctx->pc = 0x34BBC0u;
    // 0x34bbc0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bbc4: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34bbc8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34bbcc: 0x8c843f94  lw          $a0, 0x3F94($a0)
    ctx->pc = 0x34bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34bbd0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34bbd4: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34bbd8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bbdc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bbe0: 0x8c633f80  lw          $v1, 0x3F80($v1)
    ctx->pc = 0x34bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F80u)); // MMIO: 0x70003f80
    // 0x34bbe4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bbe8: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34bbec: 0x8fab0014  lw          $t3, 0x14($sp)
    ctx->pc = 0x34bbecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34bbf0: 0x8fac0018  lw          $t4, 0x18($sp)
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bbf4: 0x8fad0028  lw          $t5, 0x28($sp)
    ctx->pc = 0x34bbf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34bbf8: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x34bbf8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34bbfc: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34bbfcu;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34bc00: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x34bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc04: 0xc5a40000  lwc1        $f4, 0x0($t5)
    ctx->pc = 0x34bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34bc08: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x34bc08u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x34bc0c: 0x46042180  add.s       $f6, $f4, $f4
    ctx->pc = 0x34bc0cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34bc10: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34bc10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34bc14: 0x20690000  addi        $t1, $v1, 0x0
    ctx->pc = 0x34bc14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34bc18: 0x8d780000  lw          $t8, 0x0($t3)
    ctx->pc = 0x34bc18u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_34bc1c:
    // 0x34bc1c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bc20: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34bc24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34bc24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bc28: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x34BC28u;
    {
        const bool branch_taken_0x34bc28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC28u;
        // 0x34bc2c: 0xc502000c  lwc1        $f2, 0xC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc28) {
            ctx->pc = 0x34BC78u;
            goto label_34bc78;
        }
    }
    ctx->pc = 0x34BC30u;
    // 0x34bc30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34bc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34bc34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34bc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34bc38: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x34bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bc3c: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x34bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34bc40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x34bc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34bc44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34bc44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34bc48: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x34bc48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bc4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x34BC4Cu;
    {
        const bool branch_taken_0x34bc4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC4Cu;
        // 0x34bc50: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc4c) {
            ctx->pc = 0x34BC5Cu;
            goto label_34bc5c;
        }
    }
    ctx->pc = 0x34BC54u;
    // 0x34bc54: 0x80d2f1b  j           func_34BC6C
    ctx->pc = 0x34BC54u;
    ctx->pc = 0x34BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC54u;
    // 0x34bc58: 0x46060001  sub.s       $f0, $f0, $f6 (Delay Slot)
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BC6Cu;
    goto label_34bc6c;
    ctx->pc = 0x34BC5Cu;
label_34bc5c:
    // 0x34bc5c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x34bc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34BC60u;
    {
        const bool branch_taken_0x34bc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC60u;
        // 0x34bc64: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc60) {
            ctx->pc = 0x34BC6Cu;
            goto label_34bc6c;
        }
    }
    ctx->pc = 0x34BC68u;
    // 0x34bc68: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x34bc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_34bc6c:
    // 0x34bc6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34bc70: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34bc70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34bc74: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34bc74u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34bc78:
    // 0x34bc78: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34bc78u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34bc7c: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34bc7cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34bc80: 0x0  nop
    ctx->pc = 0x34bc80u;
    // NOP
    // 0x34bc84: 0x0  nop
    ctx->pc = 0x34bc84u;
    // NOP
    // 0x34bc88: 0x0  nop
    ctx->pc = 0x34bc88u;
    // NOP
    // 0x34bc8c: 0x0  nop
    ctx->pc = 0x34bc8cu;
    // NOP
    // 0x34bc90: 0x0  nop
    ctx->pc = 0x34bc90u;
    // NOP
    // 0x34bc94: 0x1f00ffe1  bgtz        $t8, . + 4 + (-0x1F << 2)
    ctx->pc = 0x34BC94u;
    {
        const bool branch_taken_0x34bc94 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC94u;
        // 0x34bc98: 0x1224820  add         $t1, $t1, $v0 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc94) {
            ctx->pc = 0x34BC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bc1c;
        }
    }
    ctx->pc = 0x34BC9Cu;
    // 0x34bc9c: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34bc9cu;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34bca0: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x34bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x34bca4: 0x42000038  ei
    ctx->pc = 0x34bca4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34bca8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x34BCA8u;
    {
        const bool branch_taken_0x34bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bca8) {
            ctx->pc = 0x34BF54u;
            goto label_34bf54;
        }
    }
    ctx->pc = 0x34BCB0u;
label_34bcb0:
    // 0x34bcb0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bcb4: 0x8c633f64  lw          $v1, 0x3F64($v1)
    ctx->pc = 0x34bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34bcb8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x34bcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34bcbc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34BCBCu;
    {
        const bool branch_taken_0x34bcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bcbc) {
            ctx->pc = 0x34BD54u;
            goto label_34bd54;
        }
    }
    ctx->pc = 0x34BCC4u;
    // 0x34bcc4: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34bcc8: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34bcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34bccc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bcd0: 0x8c423f94  lw          $v0, 0x3F94($v0)
    ctx->pc = 0x34bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34bcd4: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x34bcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bcd8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x34bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x34bcdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bce0: 0x8fbe0030  lw          $fp, 0x30($sp)
    ctx->pc = 0x34bce0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bce4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x34bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x34bce8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34bcec: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34bcf0: 0xf  sync
    ctx->pc = 0x34bcf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bcf4: 0x40f  sync.p
    ctx->pc = 0x34bcf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bcf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bcfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bd00: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34BD00u;
    {
        const bool branch_taken_0x34bd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd00) {
            ctx->pc = 0x34BD54u;
            goto label_34bd54;
        }
    }
    ctx->pc = 0x34BD08u;
    // 0x34bd08: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34bd0c: 0xf  sync
    ctx->pc = 0x34bd0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bd10: 0x40f  sync.p
    ctx->pc = 0x34bd10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34bd14:
    // 0x34bd14: 0x0  nop
    ctx->pc = 0x34bd14u;
    // NOP
    // 0x34bd18: 0x0  nop
    ctx->pc = 0x34bd18u;
    // NOP
    // 0x34bd1c: 0x0  nop
    ctx->pc = 0x34bd1cu;
    // NOP
    // 0x34bd20: 0x0  nop
    ctx->pc = 0x34bd20u;
    // NOP
    // 0x34bd24: 0x0  nop
    ctx->pc = 0x34bd24u;
    // NOP
    // 0x34bd28: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BD28u;
    {
        const bool branch_taken_0x34bd28 = (false);
        if (branch_taken_0x34bd28) {
            ctx->pc = 0x34BD14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bd14;
        }
    }
    ctx->pc = 0x34BD30u;
    // 0x34bd30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34bd34: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34bd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_34bd38:
    // 0x34bd38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34bd3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bd40: 0x0  nop
    ctx->pc = 0x34bd40u;
    // NOP
    // 0x34bd44: 0x0  nop
    ctx->pc = 0x34bd44u;
    // NOP
    // 0x34bd48: 0x0  nop
    ctx->pc = 0x34bd48u;
    // NOP
    // 0x34bd4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BD4Cu;
    {
        const bool branch_taken_0x34bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bd4c) {
            ctx->pc = 0x34BD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bd38;
        }
    }
    ctx->pc = 0x34BD54u;
label_34bd54:
    // 0x34bd54: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34bd58: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34bd5c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x34bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x34bd60: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bd64: 0x8c633f34  lw          $v1, 0x3F34($v1)
    ctx->pc = 0x34bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F34u)); // MMIO: 0x70003f34
    // 0x34bd68: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x34bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x34bd6c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bd70: 0x8c423f64  lw          $v0, 0x3F64($v0)
    ctx->pc = 0x34bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34bd74: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x34bd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x34bd78: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x34bd78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34bd7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34bd80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bd84: 0xac223ed4  sw          $v0, 0x3ED4($at)
    ctx->pc = 0x34bd84u;
    runtime->Store32(rdram, ctx, 0x70003ED4u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed4
    // 0x34bd88: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x34bd88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x34bd8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34bd90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bd94: 0xac243e74  sw          $a0, 0x3E74($at)
    ctx->pc = 0x34bd94u;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 4)); // MMIO: 0x70003e74
    // 0x34bd98: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34bd9c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bda0: 0x8c423f94  lw          $v0, 0x3F94($v0)
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34bda4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bda8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x34bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34bdac: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bdb0: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F60u)); // MMIO: 0x70003f60
    // 0x34bdb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x34bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x34bdb8: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x34bdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x34bdbc: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bdc0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x34bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x34bdc4: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x34bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x34bdc8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34bdcc: 0xf  sync
    ctx->pc = 0x34bdccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bdd0: 0x40f  sync.p
    ctx->pc = 0x34bdd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bdd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bdd8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bddc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34BDDCu;
    {
        const bool branch_taken_0x34bddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bddc) {
            ctx->pc = 0x34BE34u;
            goto label_34be34;
        }
    }
    ctx->pc = 0x34BDE4u;
    // 0x34bde4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34bde8: 0xf  sync
    ctx->pc = 0x34bde8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bdec: 0x40f  sync.p
    ctx->pc = 0x34bdecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34bdf0:
    // 0x34bdf0: 0x0  nop
    ctx->pc = 0x34bdf0u;
    // NOP
    // 0x34bdf4: 0x0  nop
    ctx->pc = 0x34bdf4u;
    // NOP
    // 0x34bdf8: 0x0  nop
    ctx->pc = 0x34bdf8u;
    // NOP
    // 0x34bdfc: 0x0  nop
    ctx->pc = 0x34bdfcu;
    // NOP
    // 0x34be00: 0x0  nop
    ctx->pc = 0x34be00u;
    // NOP
    // 0x34be04: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BE04u;
    {
        const bool branch_taken_0x34be04 = (false);
        if (branch_taken_0x34be04) {
            ctx->pc = 0x34BDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bdf0;
        }
    }
    ctx->pc = 0x34BE0Cu;
    // 0x34be0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34be10: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34be10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34be14: 0x0  nop
    ctx->pc = 0x34be14u;
    // NOP
label_34be18:
    // 0x34be18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34be18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34be1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34be1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34be20: 0x0  nop
    ctx->pc = 0x34be20u;
    // NOP
    // 0x34be24: 0x0  nop
    ctx->pc = 0x34be24u;
    // NOP
    // 0x34be28: 0x0  nop
    ctx->pc = 0x34be28u;
    // NOP
    // 0x34be2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BE2Cu;
    {
        const bool branch_taken_0x34be2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34be2c) {
            ctx->pc = 0x34BE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34be18;
        }
    }
    ctx->pc = 0x34BE34u;
label_34be34:
    // 0x34be34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34be34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34be38: 0x8ca53f60  lw          $a1, 0x3F60($a1)
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F60u)); // MMIO: 0x70003f60
    // 0x34be3c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34be40: 0x8c633e6c  lw          $v1, 0x3E6C($v1)
    ctx->pc = 0x34be40u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34be44: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x34be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34be48: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34be48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34be4c: 0x8c843f34  lw          $a0, 0x3F34($a0)
    ctx->pc = 0x34be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F34u)); // MMIO: 0x70003f34
    // 0x34be50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34be50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34be54: 0xac223ed0  sw          $v0, 0x3ED0($at)
    ctx->pc = 0x34be54u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 2)); // MMIO: 0x70003ed0
    // 0x34be58: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x34be58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34be5c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x34be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34be60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34be64: 0xac233f60  sw          $v1, 0x3F60($at)
    ctx->pc = 0x34be64u;
    runtime->Store32(rdram, ctx, 0x70003F60u, GPR_U32(ctx, 3)); // MMIO: 0x70003f60
    // 0x34be68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x34be68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_34be6c:
    // 0x34be6c: 0x42000039  di
    ctx->pc = 0x34be6cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34be70: 0x40f  sync.p
    ctx->pc = 0x34be70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34be74: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34be78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34be7c: 0x0  nop
    ctx->pc = 0x34be7cu;
    // NOP
    // 0x34be80: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BE80u;
    {
        const bool branch_taken_0x34be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34be80) {
            ctx->pc = 0x34BE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34be6c;
        }
    }
    ctx->pc = 0x34BE88u;
    // 0x34be88: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34be88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34be8c: 0x8c843f94  lw          $a0, 0x3F94($a0)
    ctx->pc = 0x34be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34be90: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34be90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34be94: 0x8c633ed0  lw          $v1, 0x3ED0($v1)
    ctx->pc = 0x34be94u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED0u)); // MMIO: 0x70003ed0
    // 0x34be98: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34be98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34be9c: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34bea0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34bea4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34bea8: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34beac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34beb0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x34beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34beb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34beb8: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34bebc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34bec0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bec4: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x34bec4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34bec8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34bec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34becc: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34beccu;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34bed0: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34bed0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34bed4: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34bed8:
    // 0x34bed8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bedc: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34bee0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x34bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34bee4: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34bee4u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34bee8: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34bee8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34beec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34beecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bef0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34BEF0u;
    {
        const bool branch_taken_0x34bef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BEF0u;
        // 0x34bef4: 0xe4830000  swc1        $f3, 0x0($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bef0) {
            ctx->pc = 0x34BF04u;
            goto label_34bf04;
        }
    }
    ctx->pc = 0x34BEF8u;
    // 0x34bef8: 0xa22820  add         $a1, $a1, $v0
    ctx->pc = 0x34bef8u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x34befc: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34befcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34bf00: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34bf00u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34bf04:
    // 0x34bf04: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34bf04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34bf08: 0x1f00fff3  bgtz        $t8, . + 4 + (-0xD << 2)
    ctx->pc = 0x34BF08u;
    {
        const bool branch_taken_0x34bf08 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF08u;
        // 0x34bf0c: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf08) {
            ctx->pc = 0x34BED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bed8;
        }
    }
    ctx->pc = 0x34BF10u;
    // 0x34bf10: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x34bf10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34bf14: 0x651822  sub         $v1, $v1, $a1
    ctx->pc = 0x34bf14u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34bf18: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x34bf18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34bf1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34bf20: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34bf20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bf24: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34bf28: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34bf28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34bf2c: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34bf2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34bf30: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34bf30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bf34: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34bf38: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x34bf38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34bf3c: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x34bf3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x34bf40: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x34bf40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bf44: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x34bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x34bf48: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34bf48u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34bf4c: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x34bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x34bf50: 0x42000038  ei
    ctx->pc = 0x34bf50u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_34bf54:
    // 0x34bf54: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34bf58: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34bf5c: 0x18800036  blez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x34BF5Cu;
    {
        const bool branch_taken_0x34bf5c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x34BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF5Cu;
        // 0x34bf60: 0x240cfffc  addiu       $t4, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bf5c) {
            ctx->pc = 0x34C038u;
            goto label_34c038;
        }
    }
    ctx->pc = 0x34BF64u;
    // 0x34bf64: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bf68: 0x8c423ed4  lw          $v0, 0x3ED4($v0)
    ctx->pc = 0x34bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003ED4u)); // MMIO: 0x70003ed4
    // 0x34bf6c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bf70: 0x8c633f34  lw          $v1, 0x3F34($v1)
    ctx->pc = 0x34bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F34u)); // MMIO: 0x70003f34
    // 0x34bf74: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34bf74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34bf78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bf7c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x34bf80: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x34bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x34bf84: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34bf84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34bf88: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x34bf88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34bf8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bf90: 0xac243e74  sw          $a0, 0x3E74($at)
    ctx->pc = 0x34bf90u;
    runtime->Store32(rdram, ctx, 0x70003E74u, GPR_U32(ctx, 4)); // MMIO: 0x70003e74
    // 0x34bf94: 0x1880001e  blez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34BF94u;
    {
        const bool branch_taken_0x34bf94 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34bf94) {
            ctx->pc = 0x34C010u;
            goto label_34c010;
        }
    }
    ctx->pc = 0x34BF9Cu;
    // 0x34bf9c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34bfa0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34bfa4: 0x8c633f94  lw          $v1, 0x3F94($v1)
    ctx->pc = 0x34bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F94u)); // MMIO: 0x70003f94
    // 0x34bfa8: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x34bfa8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34bfac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34bfb0: 0x8c423f64  lw          $v0, 0x3F64($v0)
    ctx->pc = 0x34bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34bfb4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x34bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x34bfb8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x34bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x34bfbc: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x34bfbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bfc0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x34bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x34bfc4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x34bfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34bfc8: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x34bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x34bfcc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34bfd0: 0xf  sync
    ctx->pc = 0x34bfd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bfd4: 0x40f  sync.p
    ctx->pc = 0x34bfd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bfd8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34bfdc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34bfe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34BFE0u;
    {
        const bool branch_taken_0x34bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bfe0) {
            ctx->pc = 0x34C010u;
            goto label_34c010;
        }
    }
    ctx->pc = 0x34BFE8u;
    // 0x34bfe8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34bfec: 0xf  sync
    ctx->pc = 0x34bfecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34bff0: 0x40f  sync.p
    ctx->pc = 0x34bff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34bff4:
    // 0x34bff4: 0x0  nop
    ctx->pc = 0x34bff4u;
    // NOP
    // 0x34bff8: 0x0  nop
    ctx->pc = 0x34bff8u;
    // NOP
    // 0x34bffc: 0x0  nop
    ctx->pc = 0x34bffcu;
    // NOP
    // 0x34c000: 0x0  nop
    ctx->pc = 0x34c000u;
    // NOP
    // 0x34c004: 0x0  nop
    ctx->pc = 0x34c004u;
    // NOP
    // 0x34c008: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C008u;
    {
        const bool branch_taken_0x34c008 = (false);
        if (branch_taken_0x34c008) {
            ctx->pc = 0x34BFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bff4;
        }
    }
    ctx->pc = 0x34C010u;
label_34c010:
    // 0x34c010: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c014: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34c014u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34c018: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c01c: 0x8c843f34  lw          $a0, 0x3F34($a0)
    ctx->pc = 0x34c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F34u)); // MMIO: 0x70003f34
    // 0x34c020: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c024: 0x8c423f64  lw          $v0, 0x3F64($v0)
    ctx->pc = 0x34c024u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34c028: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34c028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34c02c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c030: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c034: 0xac223f64  sw          $v0, 0x3F64($at)
    ctx->pc = 0x34c034u;
    runtime->Store32(rdram, ctx, 0x70003F64u, GPR_U32(ctx, 2)); // MMIO: 0x70003f64
label_34c038:
    // 0x34c038: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c03c: 0x8c843f24  lw          $a0, 0x3F24($a0)
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34c040: 0x188001fd  blez        $a0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x34C040u;
    {
        const bool branch_taken_0x34c040 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34c040) {
            ctx->pc = 0x34C838u;
            goto label_34c838;
        }
    }
    ctx->pc = 0x34C048u;
    // 0x34c048: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34c048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x34c04c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c050: 0x8c423f84  lw          $v0, 0x3F84($v0)
    ctx->pc = 0x34c050u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F84u)); // MMIO: 0x70003f84
    // 0x34c054: 0x8fbe0010  lw          $fp, 0x10($sp)
    ctx->pc = 0x34c054u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c058: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c05c: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x34c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F40u)); // MMIO: 0x70003f40
    // 0x34c060: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34c060u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34c064: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x34c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c068: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34c068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x34c06c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c070: 0x8c423e6c  lw          $v0, 0x3E6C($v0)
    ctx->pc = 0x34c070u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34c074: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x34c074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c078: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34c078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34c07c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x34c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x34c080: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x34c080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x34c084: 0xf  sync
    ctx->pc = 0x34c084u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c088: 0x40f  sync.p
    ctx->pc = 0x34c088u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c08c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c090: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34c090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34c094: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34C094u;
    {
        const bool branch_taken_0x34c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c094) {
            ctx->pc = 0x34C0ECu;
            goto label_34c0ec;
        }
    }
    ctx->pc = 0x34C09Cu;
    // 0x34c09c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x34c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x34c0a0: 0xf  sync
    ctx->pc = 0x34c0a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c0a4: 0x40f  sync.p
    ctx->pc = 0x34c0a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34c0a8:
    // 0x34c0a8: 0x0  nop
    ctx->pc = 0x34c0a8u;
    // NOP
    // 0x34c0ac: 0x0  nop
    ctx->pc = 0x34c0acu;
    // NOP
    // 0x34c0b0: 0x0  nop
    ctx->pc = 0x34c0b0u;
    // NOP
    // 0x34c0b4: 0x0  nop
    ctx->pc = 0x34c0b4u;
    // NOP
    // 0x34c0b8: 0x0  nop
    ctx->pc = 0x34c0b8u;
    // NOP
    // 0x34c0bc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C0BCu;
    {
        const bool branch_taken_0x34c0bc = (false);
        if (branch_taken_0x34c0bc) {
            ctx->pc = 0x34C0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c0a8;
        }
    }
    ctx->pc = 0x34C0C4u;
    // 0x34c0c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34c0c8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x34c0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x34c0cc: 0x0  nop
    ctx->pc = 0x34c0ccu;
    // NOP
label_34c0d0:
    // 0x34c0d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x34c0d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34c0d8: 0x0  nop
    ctx->pc = 0x34c0d8u;
    // NOP
    // 0x34c0dc: 0x0  nop
    ctx->pc = 0x34c0dcu;
    // NOP
    // 0x34c0e0: 0x0  nop
    ctx->pc = 0x34c0e0u;
    // NOP
    // 0x34c0e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C0E4u;
    {
        const bool branch_taken_0x34c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c0e4) {
            ctx->pc = 0x34C0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c0d0;
        }
    }
    ctx->pc = 0x34C0ECu;
label_34c0ec:
    // 0x34c0ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0f0: 0x8c423f24  lw          $v0, 0x3F24($v0)
    ctx->pc = 0x34c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34c0f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x34c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x34c0f8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0fc: 0x8c843e6c  lw          $a0, 0x3E6C($a0)
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34c100: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x34c104: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x34c108: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c10c: 0x8ca53f40  lw          $a1, 0x3F40($a1)
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F40u)); // MMIO: 0x70003f40
    // 0x34c110: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34c110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34c114: 0x24e7c2c8  addiu       $a3, $a3, -0x3D38
    ctx->pc = 0x34c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951624));
    // 0x34c118: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x34c11c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x34c11cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x34c120: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34c120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34c124: 0x8cc63f68  lw          $a2, 0x3F68($a2)
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c128: 0x2508c2c8  addiu       $t0, $t0, -0x3D38
    ctx->pc = 0x34c128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951624));
    // 0x34c12c: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x34c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x34c130: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34c134: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34c138: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34c13c: 0x8d0700cc  lw          $a3, 0xCC($t0)
    ctx->pc = 0x34c13cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C394u));
    // 0x34c140: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c144: 0xac253f40  sw          $a1, 0x3F40($at)
    ctx->pc = 0x34c144u;
    runtime->Store32(rdram, ctx, 0x70003F40u, GPR_U32(ctx, 5)); // MMIO: 0x70003f40
    // 0x34c148: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c14c: 0xac223f6c  sw          $v0, 0x3F6C($at)
    ctx->pc = 0x34c14cu;
    runtime->Store32(rdram, ctx, 0x70003F6Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f6c
    // 0x34c150: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c154: 0xac233f78  sw          $v1, 0x3F78($at)
    ctx->pc = 0x34c154u;
    runtime->Store32(rdram, ctx, 0x70003F78u, GPR_U32(ctx, 3)); // MMIO: 0x70003f78
    // 0x34c158: 0x4e10008  bgez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x34C158u;
    {
        const bool branch_taken_0x34c158 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x34C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C158u;
        // 0x34c15c: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c158) {
            ctx->pc = 0x34C17Cu;
            goto label_34c17c;
        }
    }
    ctx->pc = 0x34C160u;
    // 0x34c160: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x34c160u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x34c164: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c168: 0xac203ea0  sw          $zero, 0x3EA0($at)
    ctx->pc = 0x34c168u;
    runtime->Store32(rdram, ctx, 0x70003EA0u, GPR_U32(ctx, 0)); // MMIO: 0x70003ea0
    // 0x34c16c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c170: 0xac2b3f7c  sw          $t3, 0x3F7C($at)
    ctx->pc = 0x34c170u;
    runtime->Store32(rdram, ctx, 0x70003F7Cu, GPR_U32(ctx, 11)); // MMIO: 0x70003f7c
    // 0x34c174: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34C174u;
    {
        const bool branch_taken_0x34c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c174) {
            ctx->pc = 0x34C194u;
            goto label_34c194;
        }
    }
    ctx->pc = 0x34C17Cu;
label_34c17c:
    // 0x34c17c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c180: 0x8c633f20  lw          $v1, 0x3F20($v1)
    ctx->pc = 0x34c180u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c184: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c188: 0xac223f7c  sw          $v0, 0x3F7C($at)
    ctx->pc = 0x34c188u;
    runtime->Store32(rdram, ctx, 0x70003F7Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f7c
    // 0x34c18c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c190: 0xac233ea0  sw          $v1, 0x3EA0($at)
    ctx->pc = 0x34c190u;
    runtime->Store32(rdram, ctx, 0x70003EA0u, GPR_U32(ctx, 3)); // MMIO: 0x70003ea0
label_34c194:
    // 0x34c194: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c198: 0x8c423e60  lw          $v0, 0x3E60($v0)
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34c19c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34c1a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1a4: 0x8c633f24  lw          $v1, 0x3F24($v1)
    ctx->pc = 0x34c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34c1a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1ac: 0xac223e64  sw          $v0, 0x3E64($at)
    ctx->pc = 0x34c1acu;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 2)); // MMIO: 0x70003e64
    // 0x34c1b0: 0x146c00a3  bne         $v1, $t4, . + 4 + (0xA3 << 2)
    ctx->pc = 0x34C1B0u;
    {
        const bool branch_taken_0x34c1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x34C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1B0u;
        // 0x34c1b4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1b0) {
            ctx->pc = 0x34C440u;
            goto label_34c440;
        }
    }
    ctx->pc = 0x34C1B8u;
    // 0x34c1b8: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x34c1b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
label_34c1bc:
    // 0x34c1bc: 0x42000039  di
    ctx->pc = 0x34c1bcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34c1c0: 0x40f  sync.p
    ctx->pc = 0x34c1c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c1c4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34c1c8: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x34c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x34c1cc: 0x0  nop
    ctx->pc = 0x34c1ccu;
    // NOP
    // 0x34c1d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C1D0u;
    {
        const bool branch_taken_0x34c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c1d0) {
            ctx->pc = 0x34C1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c1bc;
        }
    }
    ctx->pc = 0x34C1D8u;
    // 0x34c1d8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1dc: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c1e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1e4: 0x8c843f6c  lw          $a0, 0x3F6C($a0)
    ctx->pc = 0x34c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F6Cu)); // MMIO: 0x70003f6c
    // 0x34c1e8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1ec: 0x8c633f84  lw          $v1, 0x3F84($v1)
    ctx->pc = 0x34c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F84u)); // MMIO: 0x70003f84
    // 0x34c1f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1f4: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c1f8: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x34c1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c1fc: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x34c1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c200: 0x8fbe000c  lw          $fp, 0xC($sp)
    ctx->pc = 0x34c200u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34c204: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x34c204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x34c208: 0xd9e20010  lqc2        $vf2, 0x10($t7)
    ctx->pc = 0x34c208u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x34c20c: 0xd9fc0020  lqc2        $vf28, 0x20($t7)
    ctx->pc = 0x34c20cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x34c210: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34c210u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34c214: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34c214u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34c218: 0x20890000  addi        $t1, $a0, 0x0
    ctx->pc = 0x34c218u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34c21c: 0x206a0000  addi        $t2, $v1, 0x0
    ctx->pc = 0x34c21cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c220: 0x8dd80000  lw          $t8, 0x0($t6)
    ctx->pc = 0x34c220u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x34c224: 0x4bc1085b  vmulw.xyz   $vf1, $vf1, $vf1w
    ctx->pc = 0x34c224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c228: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c228u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c22c: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x34c22cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c230: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c234: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c238: 0x4bc16328  vadd.xyz    $vf12, $vf12, $vf1
    ctx->pc = 0x34c238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x34c23c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c23cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c240: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c240u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c244: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c244u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c248: 0x4bc1651b  vmulw.xyz   $vf20, $vf12, $vf1w
    ctx->pc = 0x34c248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34c24c: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34c24cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c250: 0xd9510000  lqc2        $vf17, 0x0($t2)
    ctx->pc = 0x34c250u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c254: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c258: 0x4bd48428  vadd.xyz    $vf16, $vf16, $vf20
    ctx->pc = 0x34c258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x34c25c: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c260: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c260u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c264: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c264u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c268: 0x4bdc80ac  vsub.xyz    $vf2, $vf16, $vf28
    ctx->pc = 0x34c268u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c26c: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c26cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c270: 0x4bc16b68  vadd.xyz    $vf13, $vf13, $vf1
    ctx->pc = 0x34c270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c274: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34c274u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c278: 0x4bc210aa  vmul.xyz    $vf2, $vf2, $vf2
    ctx->pc = 0x34c278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c27c: 0xd9520000  lqc2        $vf18, 0x0($t2)
    ctx->pc = 0x34c27cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c280: 0x4bc16d5b  vmulw.xyz   $vf21, $vf13, $vf1w
    ctx->pc = 0x34c280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34c284: 0x4a0002ff  vnop
    ctx->pc = 0x34c284u;
    // NOP operation, no action needed for VU0
    // 0x34c288: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c28c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c290: 0x4bd58c68  vadd.xyz    $vf17, $vf17, $vf21
    ctx->pc = 0x34c290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x34c294: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c298: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c29c: 0x4bc173a8  vadd.xyz    $vf14, $vf14, $vf1
    ctx->pc = 0x34c29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x34c2a0: 0x4bdc88ec  vsub.xyz    $vf3, $vf17, $vf28
    ctx->pc = 0x34c2a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_34c2a4:
    // 0x34c2a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34C2A4u;
    {
        const bool branch_taken_0x34c2a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2A4u;
        // 0x34c2a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c2a4) {
            ctx->pc = 0x34C2C0u;
            goto label_34c2c0;
        }
    }
    ctx->pc = 0x34C2ACu;
    // 0x34c2ac: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x34c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x34c2b0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x34c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x34c2b4: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34c2b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34c2b8: 0x4a221090  vmaxx.w     $vf2, $vf2, $vf2x
    ctx->pc = 0x34c2b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2bc: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c2bcu;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34c2c0:
    // 0x34c2c0: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34c2c0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34c2c4: 0x4bc1759b  vmulw.xyz   $vf22, $vf14, $vf1w
    ctx->pc = 0x34c2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x34c2c8: 0x4bc318ea  vmul.xyz    $vf3, $vf3, $vf3
    ctx->pc = 0x34c2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c2cc: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c2ccu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c2d0: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c2d0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c2d4: 0x4bd694a8  vadd.xyz    $vf18, $vf18, $vf22
    ctx->pc = 0x34c2d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x34c2d8: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c2d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c2dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c2e0: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c2e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c2e4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34c2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c2e8: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x34c2e8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c2ec: 0xd9530000  lqc2        $vf19, 0x0($t2)
    ctx->pc = 0x34c2ecu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c2f0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c2f4: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c2f8: 0x4bc17be8  vadd.xyz    $vf15, $vf15, $vf1
    ctx->pc = 0x34c2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x34c2fc: 0x1b000049  blez        $t8, . + 4 + (0x49 << 2)
    ctx->pc = 0x34C2FCu;
    {
        const bool branch_taken_0x34c2fc = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2FCu;
        // 0x34c300: 0x4bdc912c  vsub.xyz    $vf4, $vf18, $vf28 (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[18], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c2fc) {
            ctx->pc = 0x34C424u;
            goto label_34c424;
        }
    }
    ctx->pc = 0x34C304u;
    // 0x34c304: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34C304u;
    {
        const bool branch_taken_0x34c304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C304u;
        // 0x34c308: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c304) {
            ctx->pc = 0x34C320u;
            goto label_34c320;
        }
    }
    ctx->pc = 0x34C30Cu;
    // 0x34c30c: 0xf88d0000  sqc2        $vf13, 0x0($a0)
    ctx->pc = 0x34c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x34c310: 0xf8710000  sqc2        $vf17, 0x0($v1)
    ctx->pc = 0x34c310u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x34c314: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34c314u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34c318: 0x4a231090  vmaxx.w     $vf2, $vf2, $vf3x
    ctx->pc = 0x34c318u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c31c: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c31cu;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34c320:
    // 0x34c320: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34c320u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34c324: 0x4bc17ddb  vmulw.xyz   $vf23, $vf15, $vf1w
    ctx->pc = 0x34c324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x34c328: 0x4bc4212a  vmul.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x34c328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34c32c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c32cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c330: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c330u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c334: 0x4bd79ce8  vadd.xyz    $vf19, $vf19, $vf23
    ctx->pc = 0x34c334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x34c338: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c338u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c33c: 0x4b042101  vaddy.x     $vf4, $vf4, $vf4y
    ctx->pc = 0x34c33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34c340: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c340u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c344: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c348: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c348u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c34c: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x34c34cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c350: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c354: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c358: 0x4bc16328  vadd.xyz    $vf12, $vf12, $vf1
    ctx->pc = 0x34c358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x34c35c: 0x1b000031  blez        $t8, . + 4 + (0x31 << 2)
    ctx->pc = 0x34C35Cu;
    {
        const bool branch_taken_0x34c35c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C35Cu;
        // 0x34c360: 0x4bdc996c  vsub.xyz    $vf5, $vf19, $vf28 (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[19], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c35c) {
            ctx->pc = 0x34C424u;
            goto label_34c424;
        }
    }
    ctx->pc = 0x34C364u;
    // 0x34c364: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34C364u;
    {
        const bool branch_taken_0x34c364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C364u;
        // 0x34c368: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c364) {
            ctx->pc = 0x34C380u;
            goto label_34c380;
        }
    }
    ctx->pc = 0x34C36Cu;
    // 0x34c36c: 0xf88e0000  sqc2        $vf14, 0x0($a0)
    ctx->pc = 0x34c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x34c370: 0xf8720000  sqc2        $vf18, 0x0($v1)
    ctx->pc = 0x34c370u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x34c374: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34c374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34c378: 0x4a241090  vmaxx.w     $vf2, $vf2, $vf4x
    ctx->pc = 0x34c378u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c37c: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c37cu;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34c380:
    // 0x34c380: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34c380u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34c384: 0x4bc1651b  vmulw.xyz   $vf20, $vf12, $vf1w
    ctx->pc = 0x34c384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34c388: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x34c388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34c38c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c38cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c390: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c390u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c394: 0x4bd48428  vadd.xyz    $vf16, $vf16, $vf20
    ctx->pc = 0x34c394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x34c398: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c398u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c39c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x34c39cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x34c3a0: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c3a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c3a4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x34c3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c3a8: 0xd92d0000  lqc2        $vf13, 0x0($t1)
    ctx->pc = 0x34c3a8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c3ac: 0xd9510000  lqc2        $vf17, 0x0($t2)
    ctx->pc = 0x34c3acu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c3b0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x34c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c3b4: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c3b8: 0x4bc16b68  vadd.xyz    $vf13, $vf13, $vf1
    ctx->pc = 0x34c3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c3bc: 0x1b000019  blez        $t8, . + 4 + (0x19 << 2)
    ctx->pc = 0x34C3BCu;
    {
        const bool branch_taken_0x34c3bc = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x34C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C3BCu;
        // 0x34c3c0: 0x4bdc80ac  vsub.xyz    $vf2, $vf16, $vf28 (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c3bc) {
            ctx->pc = 0x34C424u;
            goto label_34c424;
        }
    }
    ctx->pc = 0x34C3C4u;
    // 0x34c3c4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x34C3C4u;
    {
        const bool branch_taken_0x34c3c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C3C4u;
        // 0x34c3c8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c3c4) {
            ctx->pc = 0x34C3E0u;
            goto label_34c3e0;
        }
    }
    ctx->pc = 0x34C3CCu;
    // 0x34c3cc: 0xf88f0000  sqc2        $vf15, 0x0($a0)
    ctx->pc = 0x34c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x34c3d0: 0xf8730000  sqc2        $vf19, 0x0($v1)
    ctx->pc = 0x34c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x34c3d4: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x34c3d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34c3d8: 0x4a251090  vmaxx.w     $vf2, $vf2, $vf5x
    ctx->pc = 0x34c3d8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3dc: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c3dcu;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34c3e0:
    // 0x34c3e0: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34c3e0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34c3e4: 0x4bc16d5b  vmulw.xyz   $vf21, $vf13, $vf1w
    ctx->pc = 0x34c3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34c3e8: 0x4bc210aa  vmul.xyz    $vf2, $vf2, $vf2
    ctx->pc = 0x34c3e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3ec: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c3ecu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c3f0: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c3f4: 0x4bd58c68  vadd.xyz    $vf17, $vf17, $vf21
    ctx->pc = 0x34c3f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x34c3f8: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c3f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c3fc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c400: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c400u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c404: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c408: 0xd92e0000  lqc2        $vf14, 0x0($t1)
    ctx->pc = 0x34c408u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c40c: 0xd9520000  lqc2        $vf18, 0x0($t2)
    ctx->pc = 0x34c40cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c410: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c414: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c418: 0x4bc173a8  vadd.xyz    $vf14, $vf14, $vf1
    ctx->pc = 0x34c418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x34c41c: 0x1f00ffa1  bgtz        $t8, . + 4 + (-0x5F << 2)
    ctx->pc = 0x34C41Cu;
    {
        const bool branch_taken_0x34c41c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C41Cu;
        // 0x34c420: 0x4bdc88ec  vsub.xyz    $vf3, $vf17, $vf28 (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c41c) {
            ctx->pc = 0x34C2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c2a4;
        }
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34c424u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34c428: 0xadd80000  sw          $t8, 0x0($t6)
    ctx->pc = 0x34c428u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 24));
    // 0x34c42c: 0x48391000  qmfc2.ni    $t9, $vf2
    ctx->pc = 0x34c42cu;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c430: 0x7df90010  sq          $t9, 0x10($t7)
    ctx->pc = 0x34c430u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 25));
    // 0x34c434: 0x42000038  ei
    ctx->pc = 0x34c434u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34c438: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x34C438u;
    {
        const bool branch_taken_0x34c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c438) {
            ctx->pc = 0x34C77Cu;
            goto label_34c77c;
        }
    }
    ctx->pc = 0x34C440u;
label_34c440:
    // 0x34c440: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x34C440u;
    {
        const bool branch_taken_0x34c440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C440u;
        // 0x34c444: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c440) {
            ctx->pc = 0x34C77Cu;
            goto label_34c77c;
        }
    }
    ctx->pc = 0x34C448u;
    // 0x34c448: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x34c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x34c44c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x34c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x34c450: 0x4400070  bltz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x34C450u;
    {
        const bool branch_taken_0x34c450 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C450u;
        // 0x34c454: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c450) {
            ctx->pc = 0x34C614u;
            goto label_34c614;
        }
    }
    ctx->pc = 0x34C458u;
label_34c458:
    // 0x34c458: 0x42000039  di
    ctx->pc = 0x34c458u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34c45c: 0x40f  sync.p
    ctx->pc = 0x34c45cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c460: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34c464: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x34c464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x34c468: 0x0  nop
    ctx->pc = 0x34c468u;
    // NOP
    // 0x34c46c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C46Cu;
    {
        const bool branch_taken_0x34c46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c46c) {
            ctx->pc = 0x34C458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c458;
        }
    }
    ctx->pc = 0x34C474u;
    // 0x34c474: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c478: 0x8ca53f68  lw          $a1, 0x3F68($a1)
    ctx->pc = 0x34c478u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c47c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34c480: 0x8cc63f6c  lw          $a2, 0x3F6C($a2)
    ctx->pc = 0x34c480u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003F6Cu)); // MMIO: 0x70003f6c
    // 0x34c484: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34c484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34c488: 0x8ce73f7c  lw          $a3, 0x3F7C($a3)
    ctx->pc = 0x34c488u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70003F7Cu)); // MMIO: 0x70003f7c
    // 0x34c48c: 0x3c0e7000  lui         $t6, 0x7000
    ctx->pc = 0x34c48cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)28672 << 16));
    // 0x34c490: 0x8dce3f78  lw          $t6, 0x3F78($t6)
    ctx->pc = 0x34c490u;
    SET_GPR_S32(ctx, 14, (int32_t)runtime->Load32(rdram, ctx, 0x70003F78u)); // MMIO: 0x70003f78
    // 0x34c494: 0x3c0f7000  lui         $t7, 0x7000
    ctx->pc = 0x34c494u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)28672 << 16));
    // 0x34c498: 0x8def3f84  lw          $t7, 0x3F84($t7)
    ctx->pc = 0x34c498u;
    SET_GPR_S32(ctx, 15, (int32_t)runtime->Load32(rdram, ctx, 0x70003F84u)); // MMIO: 0x70003f84
    // 0x34c49c: 0x3c1e7000  lui         $fp, 0x7000
    ctx->pc = 0x34c49cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)28672 << 16));
    // 0x34c4a0: 0x8fde3f20  lw          $fp, 0x3F20($fp)
    ctx->pc = 0x34c4a0u;
    SET_GPR_S32(ctx, 30, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c4a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x34c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c4a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x34c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c4ac: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x34c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34c4b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34c4b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c4b4: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x34c4b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34c4b8: 0xd87c0020  lqc2        $vf28, 0x20($v1)
    ctx->pc = 0x34c4b8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x34c4bc: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34c4bcu;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34c4c0: 0x20a80000  addi        $t0, $a1, 0x0
    ctx->pc = 0x34c4c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34c4c4: 0x20c90000  addi        $t1, $a2, 0x0
    ctx->pc = 0x34c4c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34c4c8: 0x20ea0000  addi        $t2, $a3, 0x0
    ctx->pc = 0x34c4c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c4cc: 0x21cb0000  addi        $t3, $t6, 0x0
    ctx->pc = 0x34c4ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x34c4d0: 0x21ec0000  addi        $t4, $t7, 0x0
    ctx->pc = 0x34c4d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x34c4d4: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x34c4d4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c4d8: 0x8c6d0010  lw          $t5, 0x10($v1)
    ctx->pc = 0x34c4d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34c4dc: 0x4bc1085b  vmulw.xyz   $vf1, $vf1, $vf1w
    ctx->pc = 0x34c4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34c4e0:
    // 0x34c4e0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c4e4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c4e8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c4ec: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x34C4ECu;
    {
        const bool branch_taken_0x34c4ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4ECu;
        // 0x34c4f0: 0xd9080000  lqc2        $vf8, 0x0($t0) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c4ec) {
            ctx->pc = 0x34C5D8u;
            goto label_34c5d8;
        }
    }
    ctx->pc = 0x34C4F4u;
    // 0x34c4f4: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c4f4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c4f8: 0xd97e0000  lqc2        $vf30, 0x0($t3)
    ctx->pc = 0x34c4f8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34c4fc: 0xd97f0010  lqc2        $vf31, 0x10($t3)
    ctx->pc = 0x34c4fcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x34c500: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34c500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34c504: 0x4bc16328  vadd.xyz    $vf12, $vf12, $vf1
    ctx->pc = 0x34c504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x34c508: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x34c508u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c50c: 0xd9510010  lqc2        $vf17, 0x10($t2)
    ctx->pc = 0x34c50cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c510: 0x4a284119  vmuly.w     $vf4, $vf8, $vf8y
    ctx->pc = 0x34c510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34c514: 0xd9520020  lqc2        $vf18, 0x20($t2)
    ctx->pc = 0x34c514u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c518: 0xd9530030  lqc2        $vf19, 0x30($t2)
    ctx->pc = 0x34c518u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x34c51c: 0xd9940000  lqc2        $vf20, 0x0($t4)
    ctx->pc = 0x34c51cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34c520: 0x4a202117  vminiw.w    $vf4, $vf4, $vf0w
    ctx->pc = 0x34c520u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x34c524: 0xd9950010  lqc2        $vf21, 0x10($t4)
    ctx->pc = 0x34c524u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x34c528: 0xd9960020  lqc2        $vf22, 0x20($t4)
    ctx->pc = 0x34c528u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x34c52c: 0xd9970030  lqc2        $vf23, 0x30($t4)
    ctx->pc = 0x34c52cu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x34c530: 0x4a64f75b  vmulw.zw    $vf29, $vf30, $vf4w
    ctx->pc = 0x34c530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x34c534: 0x4bc1635b  vmulw.xyz   $vf13, $vf12, $vf1w
    ctx->pc = 0x34c534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c538: 0x4bc081bc  vmulax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x34c538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c53c: 0x4bc088bd  vmadday.xyz $ACC, $vf17, $vf0y
    ctx->pc = 0x34c53cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c540: 0x4bc090be  vmaddaz.xyz $ACC, $vf18, $vf0z
    ctx->pc = 0x34c540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c544: 0x4bc09ecb  vmaddw.xyz  $vf27, $vf19, $vf0w
    ctx->pc = 0x34c544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x34c548: 0x4b1df742  vaddz.x     $vf29, $vf30, $vf29z
    ctx->pc = 0x34c548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x34c54c: 0x4a9df743  vaddw.y     $vf29, $vf30, $vf29w
    ctx->pc = 0x34c54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x34c550: 0x4bcdbb68  vadd.xyz    $vf13, $vf23, $vf13
    ctx->pc = 0x34c550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c554: 0x4bd681bc  vmulax.xyz  $ACC, $vf16, $vf22x
    ctx->pc = 0x34c554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c558: 0x4bd688bd  vmadday.xyz $ACC, $vf17, $vf22y
    ctx->pc = 0x34c558u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c55c: 0x4bd6968a  vmaddz.xyz  $vf26, $vf18, $vf22z
    ctx->pc = 0x34c55cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x34c560: 0x4a7d03bc  vdiv        $Q, $vf0w, $vf29x
    ctx->pc = 0x34c560u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x34c564: 0x4b1fe8da  vmulz.x     $vf3, $vf29, $vf31z
    ctx->pc = 0x34c564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c568: 0x4a9fe8db  vmulw.y     $vf3, $vf29, $vf31w
    ctx->pc = 0x34c568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c56c: 0x4a38a33c  vmove.w     $vf24, $vf20
    ctx->pc = 0x34c56cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], ctx->vu0_vf[20], _mm_castsi128_ps(mask)); }
    // 0x34c570: 0x4bcddee8  vadd.xyz    $vf27, $vf27, $vf13
    ctx->pc = 0x34c570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x34c574: 0xf92c0000  sqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c574u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x34c578: 0x4bc3a518  vmulx.xyz   $vf20, $vf20, $vf3x
    ctx->pc = 0x34c578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x34c57c: 0x4bc3ad59  vmuly.xyz   $vf21, $vf21, $vf3y
    ctx->pc = 0x34c57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x34c580: 0x4bdcd8ac  vsub.xyz    $vf2, $vf27, $vf28
    ctx->pc = 0x34c580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c584: 0x4a400760  vaddq.z     $vf29, $vf0, $Q
    ctx->pc = 0x34c584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x34c588: 0x4afd03bc  vdiv        $Q, $vf0w, $vf29y
    ctx->pc = 0x34c588u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x34c58c: 0x4bd581bc  vmulax.xyz  $ACC, $vf16, $vf21x
    ctx->pc = 0x34c58cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c590: 0x4bd588bd  vmadday.xyz $ACC, $vf17, $vf21y
    ctx->pc = 0x34c590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c594: 0x4bd5964a  vmaddz.xyz  $vf25, $vf18, $vf21z
    ctx->pc = 0x34c594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x34c598: 0x4bc210aa  vmul.xyz    $vf2, $vf2, $vf2
    ctx->pc = 0x34c598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c59c: 0x4bd481bc  vmulax.xyz  $ACC, $vf16, $vf20x
    ctx->pc = 0x34c59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c5a0: 0x4bd488bd  vmadday.xyz $ACC, $vf17, $vf20y
    ctx->pc = 0x34c5a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c5a4: 0x4bd4960a  vmaddz.xyz  $vf24, $vf18, $vf20z
    ctx->pc = 0x34c5a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x34c5a8: 0x4a20075c  vmulq.w     $vf29, $vf0, $Q
    ctx->pc = 0x34c5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x34c5ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c5b0: 0xf9fb0030  sqc2        $vf27, 0x30($t7)
    ctx->pc = 0x34c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x34c5b4: 0xf9fa0020  sqc2        $vf26, 0x20($t7)
    ctx->pc = 0x34c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x34c5b8: 0xf9f90010  sqc2        $vf25, 0x10($t7)
    ctx->pc = 0x34c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x34c5bc: 0xf9f80000  sqc2        $vf24, 0x0($t7)
    ctx->pc = 0x34c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x34c5c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c5c4: 0xf97e0000  sqc2        $vf30, 0x0($t3)
    ctx->pc = 0x34c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x34c5c8: 0xf97d0010  sqc2        $vf29, 0x10($t3)
    ctx->pc = 0x34c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x34c5cc: 0x21ef0040  addi        $t7, $t7, 0x40
    ctx->pc = 0x34c5ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x34c5d0: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c5d0u;
    ctx->vi[1] = ctx->vi[1] + 1;
    // 0x34c5d4: 0x4a221090  vmaxx.w     $vf2, $vf2, $vf2x
    ctx->pc = 0x34c5d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34c5d8:
    // 0x34c5d8: 0x11e4020  add         $t0, $t0, $fp
    ctx->pc = 0x34c5d8u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c5dc: 0x13e4820  add         $t1, $t1, $fp
    ctx->pc = 0x34c5dcu;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c5e0: 0x14d5020  add         $t2, $t2, $t5
    ctx->pc = 0x34c5e0u;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x34c5e4: 0x17e5820  add         $t3, $t3, $fp
    ctx->pc = 0x34c5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x34c5e8: 0x218c0040  addi        $t4, $t4, 0x40
    ctx->pc = 0x34c5e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x34c5ec: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c5ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c5f0: 0x1f00ffbb  bgtz        $t8, . + 4 + (-0x45 << 2)
    ctx->pc = 0x34C5F0u;
    {
        const bool branch_taken_0x34c5f0 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5F0u;
        // 0x34c5f4: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5f0) {
            ctx->pc = 0x34C4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c4e0;
        }
    }
    ctx->pc = 0x34C5F8u;
    // 0x34c5f8: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34c5f8u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34c5fc: 0xac580000  sw          $t8, 0x0($v0)
    ctx->pc = 0x34c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 24));
    // 0x34c600: 0x48391000  qmfc2.ni    $t9, $vf2
    ctx->pc = 0x34c600u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c604: 0x7c790010  sq          $t9, 0x10($v1)
    ctx->pc = 0x34c604u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 25));
    // 0x34c608: 0x42000038  ei
    ctx->pc = 0x34c608u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34c60c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x34C60Cu;
    {
        const bool branch_taken_0x34c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c60c) {
            ctx->pc = 0x34C77Cu;
            goto label_34c77c;
        }
    }
    ctx->pc = 0x34C614u;
label_34c614:
    // 0x34c614: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x34c614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_34c618:
    // 0x34c618: 0x42000039  di
    ctx->pc = 0x34c618u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34c61c: 0x40f  sync.p
    ctx->pc = 0x34c61cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c620: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x34c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x34c624: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x34c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x34c628: 0x0  nop
    ctx->pc = 0x34c628u;
    // NOP
    // 0x34c62c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C62Cu;
    {
        const bool branch_taken_0x34c62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c62c) {
            ctx->pc = 0x34C618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c618;
        }
    }
    ctx->pc = 0x34C634u;
    // 0x34c634: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34c634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34c638: 0x8cc63f68  lw          $a2, 0x3F68($a2)
    ctx->pc = 0x34c638u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c63c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c640: 0x8ca53f6c  lw          $a1, 0x3F6C($a1)
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F6Cu)); // MMIO: 0x70003f6c
    // 0x34c644: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c648: 0x8c843f7c  lw          $a0, 0x3F7C($a0)
    ctx->pc = 0x34c648u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F7Cu)); // MMIO: 0x70003f7c
    // 0x34c64c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c650: 0x8c633f84  lw          $v1, 0x3F84($v1)
    ctx->pc = 0x34c650u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F84u)); // MMIO: 0x70003f84
    // 0x34c654: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c658: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34c658u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c65c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x34c65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c660: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c664: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34c668: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x34c668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x34c66c: 0xd9c20010  lqc2        $vf2, 0x10($t6)
    ctx->pc = 0x34c66cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x34c670: 0xd9dc0020  lqc2        $vf28, 0x20($t6)
    ctx->pc = 0x34c670u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x34c674: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34c674u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34c678: 0x20c80000  addi        $t0, $a2, 0x0
    ctx->pc = 0x34c678u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34c67c: 0x20a90000  addi        $t1, $a1, 0x0
    ctx->pc = 0x34c67cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x34c680: 0x208a0000  addi        $t2, $a0, 0x0
    ctx->pc = 0x34c680u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c684: 0x206b0000  addi        $t3, $v1, 0x0
    ctx->pc = 0x34c684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x34c688: 0x8cf80000  lw          $t8, 0x0($a3)
    ctx->pc = 0x34c688u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34c68c: 0x8dcd0010  lw          $t5, 0x10($t6)
    ctx->pc = 0x34c68cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x34c690: 0x4bc1085b  vmulw.xyz   $vf1, $vf1, $vf1w
    ctx->pc = 0x34c690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34c694:
    // 0x34c694: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c698: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c69c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c6a0: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x34C6A0u;
    {
        const bool branch_taken_0x34c6a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6A0u;
        // 0x34c6a4: 0xd9080000  lqc2        $vf8, 0x0($t0) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6a0) {
            ctx->pc = 0x34C74Cu;
            goto label_34c74c;
        }
    }
    ctx->pc = 0x34C6A8u;
    // 0x34c6a8: 0xd92c0000  lqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c6a8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c6ac: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x34c6acu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c6b0: 0xd9510010  lqc2        $vf17, 0x10($t2)
    ctx->pc = 0x34c6b0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c6b4: 0xd9520020  lqc2        $vf18, 0x20($t2)
    ctx->pc = 0x34c6b4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c6b8: 0xd9530030  lqc2        $vf19, 0x30($t2)
    ctx->pc = 0x34c6b8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x34c6bc: 0x4a814203  vaddw.y     $vf8, $vf8, $vf1w
    ctx->pc = 0x34c6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x34c6c0: 0x4be16328  vadd.xyzw   $vf12, $vf12, $vf1
    ctx->pc = 0x34c6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x34c6c4: 0xd9740000  lqc2        $vf20, 0x0($t3)
    ctx->pc = 0x34c6c4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34c6c8: 0xd9750010  lqc2        $vf21, 0x10($t3)
    ctx->pc = 0x34c6c8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x34c6cc: 0xd9760020  lqc2        $vf22, 0x20($t3)
    ctx->pc = 0x34c6ccu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x34c6d0: 0xd9770030  lqc2        $vf23, 0x30($t3)
    ctx->pc = 0x34c6d0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x34c6d4: 0x4bc1635b  vmulw.xyz   $vf13, $vf12, $vf1w
    ctx->pc = 0x34c6d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c6d8: 0x4bc081bc  vmulax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x34c6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c6dc: 0x4bc088bd  vmadday.xyz $ACC, $vf17, $vf0y
    ctx->pc = 0x34c6dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c6e0: 0x4bc090be  vmaddaz.xyz $ACC, $vf18, $vf0z
    ctx->pc = 0x34c6e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c6e4: 0x4bc09ecb  vmaddw.xyz  $vf27, $vf19, $vf0w
    ctx->pc = 0x34c6e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x34c6e8: 0x4bcdbb68  vadd.xyz    $vf13, $vf23, $vf13
    ctx->pc = 0x34c6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x34c6ec: 0x4bd681bc  vmulax.xyz  $ACC, $vf16, $vf22x
    ctx->pc = 0x34c6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c6f0: 0x4bd688bd  vmadday.xyz $ACC, $vf17, $vf22y
    ctx->pc = 0x34c6f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c6f4: 0x4bd6968a  vmaddz.xyz  $vf26, $vf18, $vf22z
    ctx->pc = 0x34c6f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x34c6f8: 0x4bcddee8  vadd.xyz    $vf27, $vf27, $vf13
    ctx->pc = 0x34c6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x34c6fc: 0x4bd581bc  vmulax.xyz  $ACC, $vf16, $vf21x
    ctx->pc = 0x34c6fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c700: 0x4bd588bd  vmadday.xyz $ACC, $vf17, $vf21y
    ctx->pc = 0x34c700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c704: 0x4bd5964a  vmaddz.xyz  $vf25, $vf18, $vf21z
    ctx->pc = 0x34c704u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x34c708: 0x4bdcd8ac  vsub.xyz    $vf2, $vf27, $vf28
    ctx->pc = 0x34c708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c70c: 0x4bd481bc  vmulax.xyz  $ACC, $vf16, $vf20x
    ctx->pc = 0x34c70cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c710: 0x4bd488bd  vmadday.xyz $ACC, $vf17, $vf20y
    ctx->pc = 0x34c710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34c714: 0x4bd4960a  vmaddz.xyz  $vf24, $vf18, $vf20z
    ctx->pc = 0x34c714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x34c718: 0x4bc210aa  vmul.xyz    $vf2, $vf2, $vf2
    ctx->pc = 0x34c718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c71c: 0x4a38a33c  vmove.w     $vf24, $vf20
    ctx->pc = 0x34c71cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], ctx->vu0_vf[20], _mm_castsi128_ps(mask)); }
    // 0x34c720: 0xf92c0000  sqc2        $vf12, 0x0($t1)
    ctx->pc = 0x34c720u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x34c724: 0xf87b0030  sqc2        $vf27, 0x30($v1)
    ctx->pc = 0x34c724u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x34c728: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c72c: 0xf87a0020  sqc2        $vf26, 0x20($v1)
    ctx->pc = 0x34c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x34c730: 0xf8790010  sqc2        $vf25, 0x10($v1)
    ctx->pc = 0x34c730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x34c734: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x34c734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x34c738: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c73c: 0x20630040  addi        $v1, $v1, 0x40
    ctx->pc = 0x34c73cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x34c740: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c740u;
    ctx->vi[1] = ctx->vi[1] + 1;
    // 0x34c744: 0x4a0002ff  vnop
    ctx->pc = 0x34c744u;
    // NOP operation, no action needed for VU0
    // 0x34c748: 0x4a221090  vmaxx.w     $vf2, $vf2, $vf2x
    ctx->pc = 0x34c748u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34c74c:
    // 0x34c74c: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c74cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c750: 0x1224820  add         $t1, $t1, $v0
    ctx->pc = 0x34c750u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x34c754: 0x14d5020  add         $t2, $t2, $t5
    ctx->pc = 0x34c754u;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x34c758: 0x216b0040  addi        $t3, $t3, 0x40
    ctx->pc = 0x34c758u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x34c75c: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c75cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c760: 0x1f00ffcc  bgtz        $t8, . + 4 + (-0x34 << 2)
    ctx->pc = 0x34C760u;
    {
        const bool branch_taken_0x34c760 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C760u;
        // 0x34c764: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c760) {
            ctx->pc = 0x34C694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c694;
        }
    }
    ctx->pc = 0x34C768u;
    // 0x34c768: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34c768u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34c76c: 0xacf80000  sw          $t8, 0x0($a3)
    ctx->pc = 0x34c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 24));
    // 0x34c770: 0x48391000  qmfc2.ni    $t9, $vf2
    ctx->pc = 0x34c770u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c774: 0x7dd90010  sq          $t9, 0x10($t6)
    ctx->pc = 0x34c774u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 25));
    // 0x34c778: 0x42000038  ei
    ctx->pc = 0x34c778u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_34c77c:
    // 0x34c77c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c780: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34c780u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34c784: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x34C784u;
    {
        const bool branch_taken_0x34c784 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34c784) {
            ctx->pc = 0x34C838u;
            goto label_34c838;
        }
    }
    ctx->pc = 0x34C78Cu;
    // 0x34c78c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34c790: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c794: 0x8c423f84  lw          $v0, 0x3F84($v0)
    ctx->pc = 0x34c794u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F84u)); // MMIO: 0x70003f84
    // 0x34c798: 0x8fbe001c  lw          $fp, 0x1C($sp)
    ctx->pc = 0x34c798u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34c79c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c7a0: 0x8c633f44  lw          $v1, 0x3F44($v1)
    ctx->pc = 0x34c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F44u)); // MMIO: 0x70003f44
    // 0x34c7a4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34c7a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c7ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x34c7b0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x34c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34c7b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c7b8: 0x8c423f24  lw          $v0, 0x3F24($v0)
    ctx->pc = 0x34c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34c7bc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x34c7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c7c0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34c7c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34c7c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34c7c8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34c7cc: 0xf  sync
    ctx->pc = 0x34c7ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c7d0: 0x40f  sync.p
    ctx->pc = 0x34c7d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c7d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34c7d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34c7dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34C7DCu;
    {
        const bool branch_taken_0x34c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c7dc) {
            ctx->pc = 0x34C810u;
            goto label_34c810;
        }
    }
    ctx->pc = 0x34C7E4u;
    // 0x34c7e4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34c7e8: 0xf  sync
    ctx->pc = 0x34c7e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c7ec: 0x40f  sync.p
    ctx->pc = 0x34c7ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34c7f0:
    // 0x34c7f0: 0x0  nop
    ctx->pc = 0x34c7f0u;
    // NOP
    // 0x34c7f4: 0x0  nop
    ctx->pc = 0x34c7f4u;
    // NOP
    // 0x34c7f8: 0x0  nop
    ctx->pc = 0x34c7f8u;
    // NOP
    // 0x34c7fc: 0x0  nop
    ctx->pc = 0x34c7fcu;
    // NOP
    // 0x34c800: 0x0  nop
    ctx->pc = 0x34c800u;
    // NOP
    // 0x34c804: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C804u;
    {
        const bool branch_taken_0x34c804 = (false);
        if (branch_taken_0x34c804) {
            ctx->pc = 0x34C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c7f0;
        }
    }
    ctx->pc = 0x34C80Cu;
    // 0x34c80c: 0x0  nop
    ctx->pc = 0x34c80cu;
    // NOP
label_34c810:
    // 0x34c810: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c814: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34c814u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34c818: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c81c: 0x8c843f24  lw          $a0, 0x3F24($a0)
    ctx->pc = 0x34c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F24u)); // MMIO: 0x70003f24
    // 0x34c820: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c824: 0x8c423f44  lw          $v0, 0x3F44($v0)
    ctx->pc = 0x34c824u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F44u)); // MMIO: 0x70003f44
    // 0x34c828: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34c828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34c82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c830: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c834: 0xac223f44  sw          $v0, 0x3F44($at)
    ctx->pc = 0x34c834u;
    runtime->Store32(rdram, ctx, 0x70003F44u, GPR_U32(ctx, 2)); // MMIO: 0x70003f44
label_34c838:
    // 0x34c838: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c83c: 0x8c423e60  lw          $v0, 0x3E60($v0)
    ctx->pc = 0x34c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E60u)); // MMIO: 0x70003e60
    // 0x34c840: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x34c844: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c848: 0xac223e64  sw          $v0, 0x3E64($at)
    ctx->pc = 0x34c848u;
    runtime->Store32(rdram, ctx, 0x70003E64u, GPR_U32(ctx, 2)); // MMIO: 0x70003e64
label_34c84c:
    // 0x34c84c: 0x42000039  di
    ctx->pc = 0x34c84cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x34c850: 0x40f  sync.p
    ctx->pc = 0x34c850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c854: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x34c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x34c858: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34c85c: 0x0  nop
    ctx->pc = 0x34c85cu;
    // NOP
    // 0x34c860: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C860u;
    {
        const bool branch_taken_0x34c860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c860) {
            ctx->pc = 0x34C84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c84c;
        }
    }
    ctx->pc = 0x34C868u;
    // 0x34c868: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c86c: 0x8c843f68  lw          $a0, 0x3F68($a0)
    ctx->pc = 0x34c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c870: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c874: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34c874u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c878: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x34c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c87c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x34c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c880: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x34c880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34c884: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x34c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c888: 0x4a000070  viadd       $vi1, $vi0, $vi0
    ctx->pc = 0x34c888u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x34c88c: 0x20880000  addi        $t0, $a0, 0x0
    ctx->pc = 0x34c88cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x34c890: 0x8cb80000  lw          $t8, 0x0($a1)
    ctx->pc = 0x34c890u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34c894:
    // 0x34c894: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c898: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x34c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c89c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34c89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c8a0: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x34C8A0u;
    {
        const bool branch_taken_0x34c8a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8A0u;
        // 0x34c8a4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8a0) {
            ctx->pc = 0x34C934u;
            goto label_34c934;
        }
    }
    ctx->pc = 0x34C8A8u;
    // 0x34c8a8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x34c8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x34c8ac: 0x210a0000  addi        $t2, $t0, 0x0
    ctx->pc = 0x34c8acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c8b0: 0x1104001e  beq         $t0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34C8B0u;
    {
        const bool branch_taken_0x34c8b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x34C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8B0u;
        // 0x34c8b4: 0x208b0000  addi        $t3, $a0, 0x0 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8b0) {
            ctx->pc = 0x34C92Cu;
            goto label_34c92c;
        }
    }
    ctx->pc = 0x34C8B8u;
    // 0x34c8b8: 0x30590030  andi        $t9, $v0, 0x30
    ctx->pc = 0x34c8b8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x34c8bc: 0x1b20000c  blez        $t9, . + 4 + (0xC << 2)
label_34c8c0:
    if (ctx->pc == 0x34C8C0u) {
        ctx->pc = 0x34C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8BCu;
        // 0x34c8c0: 0x794c0000  lq          $t4, 0x0($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C8C4u;
        goto label_fallthrough_0x34c8bc;
    }
    ctx->pc = 0x34C8BCu;
    {
        const bool branch_taken_0x34c8bc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x34C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8BCu;
        // 0x34c8c0: 0x794c0000  lq          $t4, 0x0($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8bc) {
            ctx->pc = 0x34C8F0u;
            goto label_34c8f0;
        }
    }
label_fallthrough_0x34c8bc:
    ctx->pc = 0x34C8C4u;
    // 0x34c8c4: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x34c8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x34c8c8: 0x2339fff0  addi        $t9, $t9, -0x10
    ctx->pc = 0x34c8c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)4294967280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x34c8cc: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x34c8ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c8d0: 0x0  nop
    ctx->pc = 0x34c8d0u;
    // NOP
    // 0x34c8d4: 0x0  nop
    ctx->pc = 0x34c8d4u;
    // NOP
    // 0x34c8d8: 0x0  nop
    ctx->pc = 0x34c8d8u;
    // NOP
    // 0x34c8dc: 0x0  nop
    ctx->pc = 0x34c8dcu;
    // NOP
    // 0x34c8e0: 0x0  nop
    ctx->pc = 0x34c8e0u;
    // NOP
    // 0x34c8e4: 0x0  nop
    ctx->pc = 0x34c8e4u;
    // NOP
    // 0x34c8e8: 0x1f20fff5  bgtz        $t9, . + 4 + (-0xB << 2)
    ctx->pc = 0x34C8E8u;
    {
        const bool branch_taken_0x34c8e8 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x34C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8E8u;
        // 0x34c8ec: 0x216b0010  addi        $t3, $t3, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8e8) {
            ctx->pc = 0x34C8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c8c0;
        }
    }
    ctx->pc = 0x34C8F0u;
label_34c8f0:
    // 0x34c8f0: 0x20590000  addi        $t9, $v0, 0x0
    ctx->pc = 0x34c8f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x34c8f4: 0x19c982  srl         $t9, $t9, 6
    ctx->pc = 0x34c8f4u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 25), 6));
    // 0x34c8f8: 0x1b20000c  blez        $t9, . + 4 + (0xC << 2)
label_34c8fc:
    if (ctx->pc == 0x34C8FCu) {
        ctx->pc = 0x34C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8F8u;
        // 0x34c8fc: 0x794c0000  lq          $t4, 0x0($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C900u;
        goto label_fallthrough_0x34c8f8;
    }
    ctx->pc = 0x34C8F8u;
    {
        const bool branch_taken_0x34c8f8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x34C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8F8u;
        // 0x34c8fc: 0x794c0000  lq          $t4, 0x0($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8f8) {
            ctx->pc = 0x34C92Cu;
            goto label_34c92c;
        }
    }
label_fallthrough_0x34c8f8:
    ctx->pc = 0x34C900u;
    // 0x34c900: 0x794d0010  lq          $t5, 0x10($t2)
    ctx->pc = 0x34c900u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c904: 0x794e0020  lq          $t6, 0x20($t2)
    ctx->pc = 0x34c904u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c908: 0x794f0030  lq          $t7, 0x30($t2)
    ctx->pc = 0x34c908u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x34c90c: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x34c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x34c910: 0x7d6d0010  sq          $t5, 0x10($t3)
    ctx->pc = 0x34c910u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 13));
    // 0x34c914: 0x7d6e0020  sq          $t6, 0x20($t3)
    ctx->pc = 0x34c914u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 14));
    // 0x34c918: 0x7d6f0030  sq          $t7, 0x30($t3)
    ctx->pc = 0x34c918u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 48), GPR_VEC(ctx, 15));
    // 0x34c91c: 0x2339ffff  addi        $t9, $t9, -0x1
    ctx->pc = 0x34c91cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x34c920: 0x214a0040  addi        $t2, $t2, 0x40
    ctx->pc = 0x34c920u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x34c924: 0x1f20fff5  bgtz        $t9, . + 4 + (-0xB << 2)
    ctx->pc = 0x34C924u;
    {
        const bool branch_taken_0x34c924 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x34C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C924u;
        // 0x34c928: 0x216b0040  addi        $t3, $t3, 0x40 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c924) {
            ctx->pc = 0x34C8FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c8fc;
        }
    }
    ctx->pc = 0x34C92Cu;
label_34c92c:
    // 0x34c92c: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x34c92cu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x34c930: 0x4a010872  viaddi      $vi1, $vi1, 0x1
    ctx->pc = 0x34c930u;
    ctx->vi[1] = ctx->vi[1] + 1;
label_34c934:
    // 0x34c934: 0x1024020  add         $t0, $t0, $v0
    ctx->pc = 0x34c934u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x34c938: 0x2318ffff  addi        $t8, $t8, -0x1
    ctx->pc = 0x34c938u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x34c93c: 0x1f00ffd5  bgtz        $t8, . + 4 + (-0x2B << 2)
    ctx->pc = 0x34C93Cu;
    {
        const bool branch_taken_0x34c93c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x34C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C93Cu;
        // 0x34c940: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c93c) {
            ctx->pc = 0x34C894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c894;
        }
    }
    ctx->pc = 0x34C944u;
    // 0x34c944: 0x48580800  cfc2.ni     $t8, $vi1
    ctx->pc = 0x34c944u;
    SET_GPR_U32(ctx, 24, static_cast<uint32_t>(ctx->vi[1]));
    // 0x34c948: 0xacb80000  sw          $t8, 0x0($a1)
    ctx->pc = 0x34c948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 24));
    // 0x34c94c: 0x42000038  ei
    ctx->pc = 0x34c94cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x34c950: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c954: 0x8c843e64  lw          $a0, 0x3E64($a0)
    ctx->pc = 0x34c954u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34c958: 0x1880002b  blez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x34C958u;
    {
        const bool branch_taken_0x34c958 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x34c958) {
            ctx->pc = 0x34CA08u;
            goto label_34ca08;
        }
    }
    ctx->pc = 0x34C960u;
    // 0x34c960: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x34c960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x34c964: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c968: 0x8c423f68  lw          $v0, 0x3F68($v0)
    ctx->pc = 0x34c968u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F68u)); // MMIO: 0x70003f68
    // 0x34c96c: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x34c96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34c970: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c974: 0x8c633f3c  lw          $v1, 0x3F3C($v1)
    ctx->pc = 0x34c974u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F3Cu)); // MMIO: 0x70003f3c
    // 0x34c978: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x34c978u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x34c97c: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x34c97cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c980: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x34c980u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x34c984: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c988: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x34c988u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c98c: 0x8fac0024  lw          $t4, 0x24($sp)
    ctx->pc = 0x34c98cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34c990: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x34c990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c994: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34c994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34c998: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x34c998u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x34c99c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34c9a0: 0xf  sync
    ctx->pc = 0x34c9a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c9a4: 0x40f  sync.p
    ctx->pc = 0x34c9a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c9a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34c9ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34c9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34c9b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34C9B0u;
    {
        const bool branch_taken_0x34c9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c9b0) {
            ctx->pc = 0x34C9E0u;
            goto label_34c9e0;
        }
    }
    ctx->pc = 0x34C9B8u;
    // 0x34c9b8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34c9bc: 0xf  sync
    ctx->pc = 0x34c9bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x34c9c0: 0x40f  sync.p
    ctx->pc = 0x34c9c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_34c9c4:
    // 0x34c9c4: 0x0  nop
    ctx->pc = 0x34c9c4u;
    // NOP
    // 0x34c9c8: 0x0  nop
    ctx->pc = 0x34c9c8u;
    // NOP
    // 0x34c9cc: 0x0  nop
    ctx->pc = 0x34c9ccu;
    // NOP
    // 0x34c9d0: 0x0  nop
    ctx->pc = 0x34c9d0u;
    // NOP
    // 0x34c9d4: 0x0  nop
    ctx->pc = 0x34c9d4u;
    // NOP
    // 0x34c9d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C9D8u;
    {
        const bool branch_taken_0x34c9d8 = (false);
        if (branch_taken_0x34c9d8) {
            ctx->pc = 0x34C9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c9c4;
        }
    }
    ctx->pc = 0x34C9E0u;
label_34c9e0:
    // 0x34c9e0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34c9e4: 0x8c633e64  lw          $v1, 0x3E64($v1)
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34c9e8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c9ec: 0x8c843f20  lw          $a0, 0x3F20($a0)
    ctx->pc = 0x34c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34c9f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c9f4: 0x8c423f3c  lw          $v0, 0x3F3C($v0)
    ctx->pc = 0x34c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F3Cu)); // MMIO: 0x70003f3c
    // 0x34c9f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x34c9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34c9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ca00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca04: 0xac223f3c  sw          $v0, 0x3F3C($at)
    ctx->pc = 0x34ca04u;
    runtime->Store32(rdram, ctx, 0x70003F3Cu, GPR_U32(ctx, 2)); // MMIO: 0x70003f3c
label_34ca08:
    // 0x34ca08: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca0c: 0x8ce73e6c  lw          $a3, 0x3E6C($a3)
    ctx->pc = 0x34ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70003E6Cu)); // MMIO: 0x70003e6c
    // 0x34ca10: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca14: 0x8c633f20  lw          $v1, 0x3F20($v1)
    ctx->pc = 0x34ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003F20u)); // MMIO: 0x70003f20
    // 0x34ca18: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca1c: 0x8c843f38  lw          $a0, 0x3F38($a0)
    ctx->pc = 0x34ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003F38u)); // MMIO: 0x70003f38
    // 0x34ca20: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x34ca20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34ca24: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca28: 0x8ca53e70  lw          $a1, 0x3E70($a1)
    ctx->pc = 0x34ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003E70u)); // MMIO: 0x70003e70
    // 0x34ca2c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca30: 0x8c423e68  lw          $v0, 0x3E68($v0)
    ctx->pc = 0x34ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E68u)); // MMIO: 0x70003e68
    // 0x34ca34: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca38: 0x8cc63e64  lw          $a2, 0x3E64($a2)
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003E64u)); // MMIO: 0x70003e64
    // 0x34ca3c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34ca40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca44: 0xac203ed0  sw          $zero, 0x3ED0($at)
    ctx->pc = 0x34ca44u;
    runtime->Store32(rdram, ctx, 0x70003ED0u, GPR_U32(ctx, 0)); // MMIO: 0x70003ed0
    // 0x34ca48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x34ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34ca4c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34ca50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca54: 0xac243f38  sw          $a0, 0x3F38($at)
    ctx->pc = 0x34ca54u;
    runtime->Store32(rdram, ctx, 0x70003F38u, GPR_U32(ctx, 4)); // MMIO: 0x70003f38
    // 0x34ca58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca5c: 0xac253e70  sw          $a1, 0x3E70($at)
    ctx->pc = 0x34ca5cu;
    runtime->Store32(rdram, ctx, 0x70003E70u, GPR_U32(ctx, 5)); // MMIO: 0x70003e70
    // 0x34ca60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca64: 0xac223e68  sw          $v0, 0x3E68($at)
    ctx->pc = 0x34ca64u;
    runtime->Store32(rdram, ctx, 0x70003E68u, GPR_U32(ctx, 2)); // MMIO: 0x70003e68
    // 0x34ca68: 0x1c40f755  bgtz        $v0, . + 4 + (-0x8AB << 2)
    ctx->pc = 0x34CA68u;
    {
        const bool branch_taken_0x34ca68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x34CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA68u;
        // 0x34ca6c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca68) {
            ctx->pc = 0x34A7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a7c0;
        }
    }
    ctx->pc = 0x34CA70u;
label_34ca70:
    // 0x34ca70: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca74: 0x8c423e70  lw          $v0, 0x3E70($v0)
    ctx->pc = 0x34ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003E70u)); // MMIO: 0x70003e70
    // 0x34ca78: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x34ca78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34ca7c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x34ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x34ca80: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x34ca80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ca84: 0x11c00062  beqz        $t6, . + 4 + (0x62 << 2)
    ctx->pc = 0x34CA84u;
    {
        const bool branch_taken_0x34ca84 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA84u;
        // 0x34ca88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca84) {
            ctx->pc = 0x34CC10u;
            goto label_34cc10;
        }
    }
    ctx->pc = 0x34CA8Cu;
    // 0x34ca8c: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x34ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x34ca90: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34ca94: 0x8c843e70  lw          $a0, 0x3E70($a0)
    ctx->pc = 0x34ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003E70u)); // MMIO: 0x70003e70
    // 0x34ca98: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x34ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x34ca9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34caa0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34caa4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34CAA4u;
    {
        const bool branch_taken_0x34caa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAA4u;
        // 0x34caa8: 0xadc20008  sw          $v0, 0x8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34caa4) {
            ctx->pc = 0x34CAD0u;
            goto label_34cad0;
        }
    }
    ctx->pc = 0x34CAACu;
    // 0x34caac: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34caacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34cab0: 0x8ca53f40  lw          $a1, 0x3F40($a1)
    ctx->pc = 0x34cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F40u)); // MMIO: 0x70003f40
    // 0x34cab4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cab8: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x34cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x34cabc: 0x8dc40020  lw          $a0, 0x20($t6)
    ctx->pc = 0x34cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x34cac0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x34cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x34cac4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cac8: 0x8c423f44  lw          $v0, 0x3F44($v0)
    ctx->pc = 0x34cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F44u)); // MMIO: 0x70003f44
    // 0x34cacc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34caccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_34cad0:
    // 0x34cad0: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x34cad0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cad4: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x34cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x34cad8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34cad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34cadc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34CADCu;
    {
        const bool branch_taken_0x34cadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CADCu;
        // 0x34cae0: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cadc) {
            ctx->pc = 0x34CB10u;
            goto label_34cb10;
        }
    }
    ctx->pc = 0x34CAE4u;
    // 0x34cae4: 0x8de2001c  lw          $v0, 0x1C($t7)
    ctx->pc = 0x34cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x34cae8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34caec: 0x8ca53f48  lw          $a1, 0x3F48($a1)
    ctx->pc = 0x34caecu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F48u)); // MMIO: 0x70003f48
    // 0x34caf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34caf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34caf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34caf8: 0x8de40020  lw          $a0, 0x20($t7)
    ctx->pc = 0x34caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x34cafc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34cb00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34cb04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cb08: 0x8c423f4c  lw          $v0, 0x3F4C($v0)
    ctx->pc = 0x34cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F4Cu)); // MMIO: 0x70003f4c
    // 0x34cb0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34cb10:
    // 0x34cb10: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x34cb10u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cb14: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34cb18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34cb1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34CB1Cu;
    {
        const bool branch_taken_0x34cb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB1Cu;
        // 0x34cb20: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb1c) {
            ctx->pc = 0x34CB50u;
            goto label_34cb50;
        }
    }
    ctx->pc = 0x34CB24u;
    // 0x34cb24: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cb28: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34cb2c: 0x8ca53f58  lw          $a1, 0x3F58($a1)
    ctx->pc = 0x34cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F58u)); // MMIO: 0x70003f58
    // 0x34cb30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34cb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34cb34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cb38: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x34cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34cb3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34cb40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34cb44: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cb48: 0x8c423f5c  lw          $v0, 0x3F5C($v0)
    ctx->pc = 0x34cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F5Cu)); // MMIO: 0x70003f5c
    // 0x34cb4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34cb50:
    // 0x34cb50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x34cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cb54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cb58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34cb5c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34CB5Cu;
    {
        const bool branch_taken_0x34cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB5Cu;
        // 0x34cb60: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb5c) {
            ctx->pc = 0x34CB94u;
            goto label_34cb94;
        }
    }
    ctx->pc = 0x34CB64u;
    // 0x34cb64: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x34cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x34cb68: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x34cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x34cb6c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34cb70: 0x8ca53f40  lw          $a1, 0x3F40($a1)
    ctx->pc = 0x34cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F40u)); // MMIO: 0x70003f40
    // 0x34cb74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cb78: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34cb7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34cb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34cb80: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x34cb84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cb88: 0x8c423f44  lw          $v0, 0x3F44($v0)
    ctx->pc = 0x34cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F44u)); // MMIO: 0x70003f44
    // 0x34cb8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34cb90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34cb94:
    // 0x34cb94: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x34cb94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cb98: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34cb9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x34cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x34cba0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34CBA0u;
    {
        const bool branch_taken_0x34cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBA0u;
        // 0x34cba4: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cba0) {
            ctx->pc = 0x34CBD4u;
            goto label_34cbd4;
        }
    }
    ctx->pc = 0x34CBA8u;
    // 0x34cba8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x34cbac: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34cbb0: 0x8ca53f60  lw          $a1, 0x3F60($a1)
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F60u)); // MMIO: 0x70003f60
    // 0x34cbb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34cbb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cbbc: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x34cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x34cbc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34cbc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34cbc8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cbcc: 0x8c423f64  lw          $v0, 0x3F64($v0)
    ctx->pc = 0x34cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F64u)); // MMIO: 0x70003f64
    // 0x34cbd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34cbd4:
    // 0x34cbd4: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x34cbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cbd8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x34cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34cbdc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34cbe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34CBE0u;
    {
        const bool branch_taken_0x34cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBE0u;
        // 0x34cbe4: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbe0) {
            ctx->pc = 0x34CC10u;
            goto label_34cc10;
        }
    }
    ctx->pc = 0x34CBE8u;
    // 0x34cbe8: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x34cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x34cbec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34cbf0: 0x8ca53f50  lw          $a1, 0x3F50($a1)
    ctx->pc = 0x34cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003F50u)); // MMIO: 0x70003f50
    // 0x34cbf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34cbf8: 0x8d640020  lw          $a0, 0x20($t3)
    ctx->pc = 0x34cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x34cbfc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34cc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34cc04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34cc08: 0x8c423f54  lw          $v0, 0x3F54($v0)
    ctx->pc = 0x34cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003F54u)); // MMIO: 0x70003f54
    // 0x34cc0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34cc10:
    // 0x34cc10: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x34cc10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cc14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34cc18: 0xc4213eac  lwc1        $f1, 0x3EAC($at)
    ctx->pc = 0x34cc18u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003EACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cc1c: 0xc5800024  lwc1        $f0, 0x24($t4)
    ctx->pc = 0x34cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cc20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34cc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cc24: 0x0  nop
    ctx->pc = 0x34cc24u;
    // NOP
    // 0x34cc28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34CC28u;
    {
        const bool branch_taken_0x34cc28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cc28) {
            ctx->pc = 0x34CC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CC28u;
            // 0x34cc2c: 0xe5810024  swc1        $f1, 0x24($t4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CC30u;
            goto label_34cc30;
        }
    }
    ctx->pc = 0x34CC30u;
label_34cc30:
    // 0x34cc30: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x34CC30u;
    SET_GPR_U32(ctx, 31, 0x34CC38u);
    ctx->pc = 0x34CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC30u;
    // 0x34cc34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x34CC30u, 0x34CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC38u;
label_34cc38:
    // 0x34cc38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34cc3c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x34cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34cc40: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x34cc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34cc44: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x34cc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34cc48: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x34cc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34cc4c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x34cc4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34cc50: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x34cc50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34cc54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x34cc54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34cc58: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x34cc58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34cc5c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x34cc5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34cc60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x34CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC64u;
        // 0x34cc68: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CC6Cu;
    // 0x34cc6c: 0x0  nop
    ctx->pc = 0x34cc6cu;
    // NOP
    ctx->pc = 0x34cc70u;
}
