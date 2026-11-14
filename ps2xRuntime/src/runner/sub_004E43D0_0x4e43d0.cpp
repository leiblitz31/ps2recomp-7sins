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

// Function: sub_004E43D0
// Address: 0x4e43d0 - 0x4e4408
void sub_004E43D0_0x4e43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E43D0_0x4e43d0");
#endif

    switch (ctx->pc) {
        case 0x4e43f8u: goto label_4e43f8;
        default: break;
    }

    ctx->pc = 0x4e43d0u;

    // 0x4e43d0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e43d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e43d4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e43d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
    // 0x4e43d8: 0x735f656d  .word       0x735F656D                   # INVALID     $k0, $ra, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e43d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E43D8 raw=0x735F656D");
    // 0x4e43dc: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e43dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e43e0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e43e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e43e4: 0x0  nop
    ctx->pc = 0x4e43e4u;
    // NOP
    // 0x4e43e8: 0x0  nop
    ctx->pc = 0x4e43e8u;
    // NOP
    // 0x4e43ec: 0x0  nop
    ctx->pc = 0x4e43ecu;
    // NOP
    // 0x4e43f0: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e43f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E43F0 raw=0x45FA0000");
    // 0x4e43f4: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e43f4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E43F4 raw=0x45FA0000");
label_4e43f8:
    // 0x4e43f8: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e43f8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E43F8 raw=0x45FA0000");
    // 0x4e43fc: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4e4400: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e4400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4e4404: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    ctx->pc = 0x4e4408u;
}
