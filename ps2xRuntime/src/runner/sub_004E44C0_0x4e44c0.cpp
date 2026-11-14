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

// Function: sub_004E44C0
// Address: 0x4e44c0 - 0x4e44e0
void sub_004E44C0_0x4e44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E44C0_0x4e44c0");
#endif

    ctx->pc = 0x4e44c0u;

    // 0x4e44c0: 0x4d747874  .word       0x4D747874                   # INVALID     $t3, $s4, 0x7874 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e44c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E44C0 raw=0x4D747874");
    // 0x4e44c4: 0x47696e69  .word       0x47696E69                   # INVALID     $k1, $t1, 0x6E69 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e44c4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x29 at 0x4E44C4 raw=0x47696E69");
    // 0x4e44c8: 0x54656d61  bnel        $v1, $a1, . + 4 + (0x6D61 << 2)
    ctx->pc = 0x4E44C8u;
    {
        const bool branch_taken_0x4e44c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e44c8) {
            ctx->pc = 0x4E44CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E44C8u;
            // 0x4e44cc: 0x656c7469  daddiu      $t4, $t3, 0x7469 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29801);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFA50u;
            return;
        }
    }
    ctx->pc = 0x4E44D0u;
    // 0x4e44d0: 0x0  nop
    ctx->pc = 0x4e44d0u;
    // NOP
    // 0x4e44d4: 0x0  nop
    ctx->pc = 0x4e44d4u;
    // NOP
    // 0x4e44d8: 0x0  nop
    ctx->pc = 0x4e44d8u;
    // NOP
    // 0x4e44dc: 0x0  nop
    ctx->pc = 0x4e44dcu;
    // NOP
    ctx->pc = 0x4e44e0u;
}
