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

// Function: sub_004E60F0
// Address: 0x4e60f0 - 0x4e6100
void sub_004E60F0_0x4e60f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E60F0_0x4e60f0");
#endif

    ctx->pc = 0x4e60f0u;

    // 0x4e60f0: 0x6d616c66  ldr         $at, 0x6C66($t3)
    ctx->pc = 0x4e60f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e60f4: 0x68745f65  ldl         $s4, 0x5F65($v1)
    ctx->pc = 0x4e60f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e60f8: 0x65776f72  daddiu      $s7, $t3, 0x6F72
    ctx->pc = 0x4e60f8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
    // 0x4e60fc: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e60fcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6100u;
}
