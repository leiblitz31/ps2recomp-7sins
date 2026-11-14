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

// Function: sub_001333F0
// Address: 0x1333f0 - 0x1334e0
void sub_001333F0_0x1333f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001333F0_0x1333f0");
#endif

    ctx->pc = 0x1333f0u;

    // 0x1333f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1333f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1333f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1333f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1333f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1333f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1333fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1333fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133404: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133408: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x133408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13340c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133410: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x133410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133414: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133418: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x133418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13341c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133424: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x133424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x133428: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x133428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13342c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x13342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133430: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x133430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133434: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x133434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x133438: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x133438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13343c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133440: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x133440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133448: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x133448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13344c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133450: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x133450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133458: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x133458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x13345c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133460: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133464: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x133464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x133468: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x133468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x13346c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x13346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133470: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x133470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133474: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x133474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x133478: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x133478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13347c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133480: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x133480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133488: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x133488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x13348c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133490: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x133490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x133494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133498: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x133498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x13349c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1334a0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1334a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1334a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334a8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1334a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1334ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1334acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1334b0: 0x9043002c  lbu         $v1, 0x2C($v0)
    ctx->pc = 0x1334b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1334b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1334b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334b8: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x1334b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1334bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1334c0: 0x9043002d  lbu         $v1, 0x2D($v0)
    ctx->pc = 0x1334c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x1334c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334c8: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x1334c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x1334cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1334ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1334d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1334d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1334D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1334D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334DCu;
    // 0x1334dc: 0x0  nop
    ctx->pc = 0x1334dcu;
    // NOP
    ctx->pc = 0x1334e0u;
}
