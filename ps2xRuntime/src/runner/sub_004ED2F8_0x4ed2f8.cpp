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

// Function: sub_004ED2F8
// Address: 0x4ed2f8 - 0x4ed310
void sub_004ED2F8_0x4ed2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2F8_0x4ed2f8");
#endif

    ctx->pc = 0x4ed2f8u;

    // 0x4ed2f8: 0x6576452d  daddiu      $s6, $t3, 0x452D
    ctx->pc = 0x4ed2f8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17709);
    // 0x4ed2fc: 0x6e6f7972  ldr         $t7, 0x7972($s3)
    ctx->pc = 0x4ed2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4ed300: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed300u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed304: 0x0  nop
    ctx->pc = 0x4ed304u;
    // NOP
    // 0x4ed308: 0x0  nop
    ctx->pc = 0x4ed308u;
    // NOP
    // 0x4ed30c: 0x0  nop
    ctx->pc = 0x4ed30cu;
    // NOP
    ctx->pc = 0x4ed310u;
}
