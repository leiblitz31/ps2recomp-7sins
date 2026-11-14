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

// Function: sub_001EC4E0
// Address: 0x1ec4e0 - 0x1ec5e0
void sub_001EC4E0_0x1ec4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC4E0_0x1ec4e0");
#endif

    switch (ctx->pc) {
        case 0x1ec500u: goto label_1ec500;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec514u: goto label_1ec514;
        default: break;
    }

    ctx->pc = 0x1ec4e0u;

    // 0x1ec4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec4ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ec4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ec4f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec4f4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1ec4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ec4f8: 0xc07b178  jal         func_1EC5E0
    ctx->pc = 0x1EC4F8u;
    SET_GPR_U32(ctx, 31, 0x1EC500u);
    ctx->pc = 0x1EC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC5E0u, 0x1EC4F8u, 0x1EC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC500u;
label_1ec500:
    // 0x1ec500: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec504: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_1ec508:
    // 0x1ec508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec50c: 0xc07b178  jal         func_1EC5E0
    ctx->pc = 0x1EC50Cu;
    SET_GPR_U32(ctx, 31, 0x1EC514u);
    ctx->pc = 0x1EC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC5E0u, 0x1EC50Cu, 0x1EC514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC514u;
label_1ec514:
    // 0x1ec514: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x1ec514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1ec518: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec51c: 0x244200f4  addiu       $v0, $v0, 0xF4
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x1ec520: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC520u;
    {
        const bool branch_taken_0x1ec520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec520) {
            ctx->pc = 0x1EC508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec508;
        }
    }
    ctx->pc = 0x1EC528u;
    // 0x1ec528: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec52c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ec52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ec530: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec534: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ec538: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec53c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ec53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ec540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec548: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ec548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ec54c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec550: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x1ec550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec55c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ec55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ec560: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec564: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ec564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1ec568: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ec568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ec56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec570: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec574: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1ec574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1ec578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec57c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec580: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x1ec580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1ec584: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec58c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1ec58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1ec590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec594: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ec594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ec598: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ec59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec5a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec5a4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1ec5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1ec5a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec5ac: 0xa0400126  sb          $zero, 0x126($v0)
    ctx->pc = 0x1ec5acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec5b0: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1ec5b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec5b8: 0xa0430125  sb          $v1, 0x125($v0)
    ctx->pc = 0x1ec5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 293), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec5bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ec5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ec5c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec5c4: 0xa0430124  sb          $v1, 0x124($v0)
    ctx->pc = 0x1ec5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 292), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec5c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec5cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec5d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC5E0u;
}
