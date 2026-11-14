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

// Function: sub_004E2E78
// Address: 0x4e2e78 - 0x4e2e88
void sub_004E2E78_0x4e2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2E78_0x4e2e78");
#endif

    ctx->pc = 0x4e2e78u;

    // 0x4e2e78: 0x6e656c62  ldr         $a1, 0x6C62($s3)
    ctx->pc = 0x4e2e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e2e7c: 0x6c6f6364  ldr         $t7, 0x6364($v1)
    ctx->pc = 0x4e2e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e2e80: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2e80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e2e84: 0x0  nop
    ctx->pc = 0x4e2e84u;
    // NOP
    ctx->pc = 0x4e2e88u;
}
