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

// Function: sub_004E32B8
// Address: 0x4e32b8 - 0x4e32d0
void sub_004E32B8_0x4e32b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E32B8_0x4e32b8");
#endif

    ctx->pc = 0x4e32b8u;

    // 0x4e32b8: 0x67676f4a  daddiu      $a3, $k1, 0x6F4A
    ctx->pc = 0x4e32b8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28490);
    // 0x4e32bc: 0x46676e69  .word       0x46676E69                   # INVALID     $s3, $a3, 0x6E69 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e32bcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x29 at 0x4E32BC raw=0x46676E69");
    // 0x4e32c0: 0x6c626d75  ldr         $v0, 0x6D75($v1)
    ctx->pc = 0x4e32c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28021); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4e32c4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e32c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e32c8: 0x0  nop
    ctx->pc = 0x4e32c8u;
    // NOP
    // 0x4e32cc: 0x0  nop
    ctx->pc = 0x4e32ccu;
    // NOP
    ctx->pc = 0x4e32d0u;
}
