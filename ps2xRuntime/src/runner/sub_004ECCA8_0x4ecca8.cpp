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

// Function: sub_004ECCA8
// Address: 0x4ecca8 - 0x4eccb8
void sub_004ECCA8_0x4ecca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCA8_0x4ecca8");
#endif

    ctx->pc = 0x4ecca8u;

    // 0x4ecca8: 0x746e6174  .word       0x746E6174                   # INVALID     $v1, $t6, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecca8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECCA8 raw=0x746E6174");
    // 0x4eccac: 0x6d736972  ldr         $s3, 0x6972($t3)
    ctx->pc = 0x4eccacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x4eccb0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eccb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4eccb4: 0x0  nop
    ctx->pc = 0x4eccb4u;
    // NOP
    ctx->pc = 0x4eccb8u;
}
