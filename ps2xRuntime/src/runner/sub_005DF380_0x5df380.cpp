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

// Function: sub_005DF380
// Address: 0x5df380 - 0x5df3a0
void sub_005DF380_0x5df380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF380_0x5df380");
#endif

    ctx->pc = 0x5df380u;

    // 0x5df380: 0x6f6d654d  ldr         $t5, 0x654D($k1)
    ctx->pc = 0x5df380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5df384: 0x43207972  .word       0x43207972                   # INVALID     $t9, $zero, 0x7972 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df384u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5DF384 raw=0x43207972");
    // 0x5df388: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x5df388u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df38c: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x5df38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5df390: 0x64252072  daddiu      $a1, $at, 0x2072
    ctx->pc = 0x5df390u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8306);
    // 0x5df394: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5df394u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5df398: 0x0  nop
    ctx->pc = 0x5df398u;
    // NOP
    // 0x5df39c: 0x0  nop
    ctx->pc = 0x5df39cu;
    // NOP
    ctx->pc = 0x5df3a0u;
}
