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

// Function: sub_004E52B0
// Address: 0x4e52b0 - 0x4e52d0
void sub_004E52B0_0x4e52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E52B0_0x4e52b0");
#endif

    switch (ctx->pc) {
        case 0x4e52b8u: goto label_4e52b8;
        default: break;
    }

    ctx->pc = 0x4e52b0u;

    // 0x4e52b0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e52b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E52B0 raw=0x45435326");
    // 0x4e52b4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e52b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E52B4 raw=0x4352545F");
label_4e52b8:
    // 0x4e52b8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E52B8u;
    {
        const bool branch_taken_0x4e52b8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e52b8) {
            ctx->pc = 0x4E52BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E52B8u;
            // 0x4e52bc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E52BC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9FF0u;
            return;
        }
    }
    ctx->pc = 0x4E52C0u;
    // 0x4e52c0: 0x4d445241  .word       0x4D445241                   # INVALID     $t2, $a0, 0x5241 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e52c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E52C0 raw=0x4D445241");
    // 0x4e52c4: 0x49535349  .word       0x49535349                   # INVALID     $t2, $s3, 0x5349 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e52c4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E52C4 raw=0x49535349");
    // 0x4e52c8: 0x474e  .word       0x0000474E                   # INVALID     $zero, $zero, 0x474E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e52c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E52C8 raw=0x0000474E");
    // 0x4e52cc: 0x0  nop
    ctx->pc = 0x4e52ccu;
    // NOP
    ctx->pc = 0x4e52d0u;
}
