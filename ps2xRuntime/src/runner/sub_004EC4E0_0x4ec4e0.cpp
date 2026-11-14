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

// Function: sub_004EC4E0
// Address: 0x4ec4e0 - 0x4ec500
void sub_004EC4E0_0x4ec4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC4E0_0x4ec4e0");
#endif

    ctx->pc = 0x4ec4e0u;

    // 0x4ec4e0: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec4e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC4E0 raw=0x736E6573");
    // 0x4ec4e4: 0x6c696269  ldr         $t1, 0x6269($v1)
    ctx->pc = 0x4ec4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25193); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec4e8: 0x2e797469  sltiu       $t9, $s3, 0x7469
    ctx->pc = 0x4ec4e8u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
    // 0x4ec4ec: 0x6c6f6976  ldr         $t7, 0x6976($v1)
    ctx->pc = 0x4ec4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26998); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4ec4f0: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x4ec4f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
    // 0x4ec4f4: 0x0  nop
    ctx->pc = 0x4ec4f4u;
    // NOP
    // 0x4ec4f8: 0x0  nop
    ctx->pc = 0x4ec4f8u;
    // NOP
    // 0x4ec4fc: 0x0  nop
    ctx->pc = 0x4ec4fcu;
    // NOP
    ctx->pc = 0x4ec500u;
}
