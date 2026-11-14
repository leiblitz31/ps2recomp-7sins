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

// Function: sub_004EC520
// Address: 0x4ec520 - 0x4ec540
void sub_004EC520_0x4ec520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC520_0x4ec520");
#endif

    ctx->pc = 0x4ec520u;

    // 0x4ec520: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec520u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC520 raw=0x736E6573");
    // 0x4ec524: 0x6c696269  ldr         $t1, 0x6269($v1)
    ctx->pc = 0x4ec524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25193); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec528: 0x2e797469  sltiu       $t9, $s3, 0x7469
    ctx->pc = 0x4ec528u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
    // 0x4ec52c: 0x79766e65  lq          $s6, 0x6E65($t3)
    ctx->pc = 0x4ec52cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 11), 28261)));
    // 0x4ec530: 0x0  nop
    ctx->pc = 0x4ec530u;
    // NOP
    // 0x4ec534: 0x0  nop
    ctx->pc = 0x4ec534u;
    // NOP
    // 0x4ec538: 0x0  nop
    ctx->pc = 0x4ec538u;
    // NOP
    // 0x4ec53c: 0x0  nop
    ctx->pc = 0x4ec53cu;
    // NOP
    ctx->pc = 0x4ec540u;
}
