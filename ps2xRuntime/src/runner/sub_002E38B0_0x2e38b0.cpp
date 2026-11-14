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

// Function: sub_002E38B0
// Address: 0x2e38b0 - 0x2e3970
void sub_002E38B0_0x2e38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E38B0_0x2e38b0");
#endif

    switch (ctx->pc) {
        case 0x2e38fcu: goto label_2e38fc;
        case 0x2e390cu: goto label_2e390c;
        case 0x2e391cu: goto label_2e391c;
        case 0x2e392cu: goto label_2e392c;
        case 0x2e393cu: goto label_2e393c;
        case 0x2e394cu: goto label_2e394c;
        default: break;
    }

    ctx->pc = 0x2e38b0u;

    // 0x2e38b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e38b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e38b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e38bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e38c0: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x2e38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
    // 0x2e38c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e38cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e38d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e38d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e38d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38dc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2e38dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2e38e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e38e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e38e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38e8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e38e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2e38ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38f0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e38f4: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2E38F4u;
    SET_GPR_U32(ctx, 31, 0x2E38FCu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2E38F4u, 0x2E38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E38FCu;
label_2e38fc:
    // 0x2e38fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3900: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e3900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e3904: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2E3904u;
    SET_GPR_U32(ctx, 31, 0x2E390Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2E3904u, 0x2E390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E390Cu;
label_2e390c:
    // 0x2e390c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3910: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2e3910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2e3914: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2E3914u;
    SET_GPR_U32(ctx, 31, 0x2E391Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2E3914u, 0x2E391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E391Cu;
label_2e391c:
    // 0x2e391c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3920: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2e3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2e3924: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2E3924u;
    SET_GPR_U32(ctx, 31, 0x2E392Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2E3924u, 0x2E392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E392Cu;
label_2e392c:
    // 0x2e392c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3930: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e3934: 0xc0b8ee4  jal         func_2E3B90
    ctx->pc = 0x2E3934u;
    SET_GPR_U32(ctx, 31, 0x2E393Cu);
    ctx->pc = 0x2E3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B90u, 0x2E3934u, 0x2E393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E393Cu;
label_2e393c:
    // 0x2e393c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3940: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e3940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e3944: 0xc0b2c80  jal         func_2CB200
    ctx->pc = 0x2E3944u;
    SET_GPR_U32(ctx, 31, 0x2E394Cu);
    ctx->pc = 0x2CB200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB200u, 0x2E3944u, 0x2E394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E394Cu;
label_2e394c:
    // 0x2e394c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3950: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2e3950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2e3954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3958: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2e3958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2e395c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3964: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e3964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3968: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3970u;
}
