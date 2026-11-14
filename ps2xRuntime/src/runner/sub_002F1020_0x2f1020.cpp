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

// Function: sub_002F1020
// Address: 0x2f1020 - 0x2f10c8
void sub_002F1020_0x2f1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1020_0x2f1020");
#endif

    switch (ctx->pc) {
        case 0x2f1080u: goto label_2f1080;
        case 0x2f10b8u: goto label_2f10b8;
        default: break;
    }

    ctx->pc = 0x2f1020u;

    // 0x2f1020: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f1024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f1024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1028: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f1028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f102c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2f102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2f1030: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2f1030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2f1034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f1034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1038: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x2f1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x2f103c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x2f103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x2f1040: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x2f1040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f1044: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x2f1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x2f1048: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x2f1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x2f104c: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x2f104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x2f1050: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x2f1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x2f1054: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x2f1054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f1058: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x2f1058u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f105c: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x2f105cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f1060: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x2f1060u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f1064: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x2f1064u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f1068: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x2f1068u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2f106c: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x2f106cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2f1070: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x2f1070u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2f1074: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2f1074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2f1078: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2F1078u;
    SET_GPR_U32(ctx, 31, 0x2F1080u);
    ctx->pc = 0x2F107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1078u;
    // 0x2f107c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2F1078u, 0x2F1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1080u;
label_2f1080:
    // 0x2f1080: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2f1084: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2f1084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2f1088: 0x8c87ea90  lw          $a3, -0x1570($a0)
    ctx->pc = 0x2f1088u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f108c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1090: 0x24631018  addiu       $v1, $v1, 0x1018
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4120));
    // 0x2f1094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1098: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f1098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f109c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f10a0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2f10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2f10a4: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x2f10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x2f10a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2f10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2f10ac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2f10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2f10b0: 0xc0bd4e6  jal         func_2F5398
    ctx->pc = 0x2F10B0u;
    SET_GPR_U32(ctx, 31, 0x2F10B8u);
    ctx->pc = 0x2F10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10B0u;
    // 0x2f10b4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5398u, 0x2F10B0u, 0x2F10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10B8u;
label_2f10b8:
    // 0x2f10b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2f10b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f10bc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2f10bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f10c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F10C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10C0u;
        // 0x2f10c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F10C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F10C8u;
}
