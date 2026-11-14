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

// Function: sub_005DE5D0
// Address: 0x5de5d0 - 0x5de5f0
void sub_005DE5D0_0x5de5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE5D0_0x5de5d0");
#endif

    ctx->pc = 0x5de5d0u;

    // 0x5de5d0: 0x65737341  daddiu      $s3, $t3, 0x7341
    ctx->pc = 0x5de5d0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29505);
    // 0x5de5d4: 0x63207472  daddi       $zero, $t9, 0x7472
    ctx->pc = 0x5de5d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29810; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5de5d8: 0x6b636568  ldl         $v1, 0x6568($k1)
    ctx->pc = 0x5de5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x5de5dc: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5de5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5de5e0: 0x2064656c  addi        $a0, $v1, 0x656C
    ctx->pc = 0x5de5e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25964, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5de5e4: 0x7325203a  .word       0x7325203A                   # INVALID     $t9, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de5e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DE5E4 raw=0x7325203A");
    // 0x5de5e8: 0x0  nop
    ctx->pc = 0x5de5e8u;
    // NOP
    // 0x5de5ec: 0x0  nop
    ctx->pc = 0x5de5ecu;
    // NOP
    ctx->pc = 0x5de5f0u;
}
