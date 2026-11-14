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

// Function: sub_004ECCF8
// Address: 0x4eccf8 - 0x4ecd10
void sub_004ECCF8_0x4eccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCF8_0x4eccf8");
#endif

    ctx->pc = 0x4eccf8u;

    // 0x4eccf8: 0x6e756f73  ldr         $s5, 0x6F73($s3)
    ctx->pc = 0x4eccf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4eccfc: 0x73253d64  .word       0x73253D64                   # INVALID     $t9, $a1, 0x3D64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4eccfcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4ECCFC raw=0x73253D64");
    // 0x4ecd00: 0x20662520  addi        $a2, $v1, 0x2520
    ctx->pc = 0x4ecd00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x4ecd04: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecd04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ecd08: 0x0  nop
    ctx->pc = 0x4ecd08u;
    // NOP
    // 0x4ecd0c: 0x0  nop
    ctx->pc = 0x4ecd0cu;
    // NOP
    ctx->pc = 0x4ecd10u;
}
