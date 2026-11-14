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

// Function: sub_005DF5C0
// Address: 0x5df5c0 - 0x5df600
void sub_005DF5C0_0x5df5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF5C0_0x5df5c0");
#endif

    switch (ctx->pc) {
        case 0x5df5d0u: goto label_5df5d0;
        case 0x5df5f4u: goto label_5df5f4;
        default: break;
    }

    ctx->pc = 0x5df5c0u;

    // 0x5df5c0: 0x4176705f  .word       0x4176705F                   # INVALID     $t3, $s6, 0x705F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df5c0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5DF5C0 raw=0x4176705F");
    // 0x5df5c4: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5df5c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5df5c8: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df5c8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF5C8 raw=0x4C4C554E");
    // 0x5df5cc: 0x20262620  addi        $a2, $at, 0x2620
    ctx->pc = 0x5df5ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5df5d0:
    // 0x5df5d0: 0x4276705f  .word       0x4276705F                   # INVALID     $s3, $s6, 0x705F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df5d0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DF5D0 raw=0x4276705F");
    // 0x5df5d4: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5df5d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5df5d8: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df5d8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF5D8 raw=0x4C4C554E");
    // 0x5df5dc: 0x20262620  addi        $a2, $at, 0x2620
    ctx->pc = 0x5df5dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x5df5e0: 0x5276705f  beql        $s3, $s6, . + 4 + (0x705F << 2)
    ctx->pc = 0x5DF5E0u;
    {
        const bool branch_taken_0x5df5e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x5df5e0) {
            ctx->pc = 0x5DF5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF5E0u;
            // 0x5df5e4: 0x6c757365  ldr         $s5, 0x7365($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FB760u;
            return;
        }
    }
    ctx->pc = 0x5DF5E8u;
    // 0x5df5e8: 0x3d212074  .word       0x3D212074                   # lui         $at, 0x2074 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8308 << 16));
    // 0x5df5ec: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df5ecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF5EC raw=0x4C554E20");
    // 0x5df5f0: 0x4c  syscall     1
    ctx->pc = 0x5df5f0u;
    ctx->pc = 0x5DF5F4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5df5f4:
    // 0x5df5f4: 0x0  nop
    ctx->pc = 0x5df5f4u;
    // NOP
    // 0x5df5f8: 0x0  nop
    ctx->pc = 0x5df5f8u;
    // NOP
    // 0x5df5fc: 0x0  nop
    ctx->pc = 0x5df5fcu;
    // NOP
    ctx->pc = 0x5df600u;
}
