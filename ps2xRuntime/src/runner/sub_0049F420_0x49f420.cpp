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

// Function: sub_0049F420
// Address: 0x49f420 - 0x49f548
void sub_0049F420_0x49f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F420_0x49f420");
#endif

    ctx->pc = 0x49f420u;

    // 0x49f420: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x49f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49f424: 0x10820041  beq         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x49F424u;
    {
        const bool branch_taken_0x49f424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F424u;
        // 0x49f428: 0x2c820041  sltiu       $v0, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f424) {
            ctx->pc = 0x49F52Cu;
            goto label_49f52c;
        }
    }
    ctx->pc = 0x49F42Cu;
    // 0x49f42c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x49F42Cu;
    {
        const bool branch_taken_0x49f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F42Cu;
        // 0x49f430: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f42c) {
            ctx->pc = 0x49F494u;
            goto label_49f494;
        }
    }
    ctx->pc = 0x49F434u;
    // 0x49f434: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x49F434u;
    {
        const bool branch_taken_0x49f434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F434u;
        // 0x49f438: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f434) {
            ctx->pc = 0x49F51Cu;
            goto label_49f51c;
        }
    }
    ctx->pc = 0x49F43Cu;
    // 0x49f43c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F43Cu;
    {
        const bool branch_taken_0x49f43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F43Cu;
        // 0x49f440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f43c) {
            ctx->pc = 0x49F45Cu;
            goto label_49f45c;
        }
    }
    ctx->pc = 0x49F444u;
    // 0x49f444: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x49F444u;
    {
        const bool branch_taken_0x49f444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F444u;
        // 0x49f448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f444) {
            ctx->pc = 0x49F514u;
            goto label_49f514;
        }
    }
    ctx->pc = 0x49F44Cu;
    // 0x49f44c: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x49F44Cu;
    {
        const bool branch_taken_0x49f44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F44Cu;
        // 0x49f450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f44c) {
            ctx->pc = 0x49F514u;
            goto label_49f514;
        }
    }
    ctx->pc = 0x49F454u;
    // 0x49f454: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x49F454u;
    {
        const bool branch_taken_0x49f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f454) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F45Cu;
label_49f45c:
    // 0x49f45c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49f460: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x49F460u;
    {
        const bool branch_taken_0x49f460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F460u;
        // 0x49f464: 0x2c820011  sltiu       $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f460) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F468u;
    // 0x49f468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F468u;
    {
        const bool branch_taken_0x49f468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F468u;
        // 0x49f46c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f468) {
            ctx->pc = 0x49F480u;
            goto label_49f480;
        }
    }
    ctx->pc = 0x49F470u;
    // 0x49f470: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49F470u;
    {
        const bool branch_taken_0x49f470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F470u;
        // 0x49f474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f470) {
            ctx->pc = 0x49F51Cu;
            goto label_49f51c;
        }
    }
    ctx->pc = 0x49F478u;
    // 0x49f478: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49F478u;
    {
        const bool branch_taken_0x49f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f478) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F480u;
label_49f480:
    // 0x49f480: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49f484: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x49F484u;
    {
        const bool branch_taken_0x49f484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F484u;
        // 0x49f488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f484) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F48Cu;
    // 0x49f48c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49F48Cu;
    {
        const bool branch_taken_0x49f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f48c) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F494u;
label_49f494:
    // 0x49f494: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x49f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x49f498: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x49F498u;
    {
        const bool branch_taken_0x49f498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F498u;
        // 0x49f49c: 0x2c820401  sltiu       $v0, $a0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f498) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F4A0u;
    // 0x49f4a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49F4A0u;
    {
        const bool branch_taken_0x49f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4A0u;
        // 0x49f4a4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4a0) {
            ctx->pc = 0x49F4DCu;
            goto label_49f4dc;
        }
    }
    ctx->pc = 0x49F4A8u;
    // 0x49f4a8: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x49F4A8u;
    {
        const bool branch_taken_0x49f4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4A8u;
        // 0x49f4ac: 0x2c820101  sltiu       $v0, $a0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4a8) {
            ctx->pc = 0x49F534u;
            goto label_49f534;
        }
    }
    ctx->pc = 0x49F4B0u;
    // 0x49f4b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F4B0u;
    {
        const bool branch_taken_0x49f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4B0u;
        // 0x49f4b4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4b0) {
            ctx->pc = 0x49F4C8u;
            goto label_49f4c8;
        }
    }
    ctx->pc = 0x49F4B8u;
    // 0x49f4b8: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x49F4B8u;
    {
        const bool branch_taken_0x49f4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4B8u;
        // 0x49f4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4b8) {
            ctx->pc = 0x49F52Cu;
            goto label_49f52c;
        }
    }
    ctx->pc = 0x49F4C0u;
    // 0x49f4c0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x49F4C0u;
    {
        const bool branch_taken_0x49f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f4c0) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F4C8u;
label_49f4c8:
    // 0x49f4c8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x49f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x49f4cc: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x49F4CCu;
    {
        const bool branch_taken_0x49f4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4CCu;
        // 0x49f4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4cc) {
            ctx->pc = 0x49F534u;
            goto label_49f534;
        }
    }
    ctx->pc = 0x49F4D4u;
    // 0x49f4d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x49F4D4u;
    {
        const bool branch_taken_0x49f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f4d4) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F4DCu;
label_49f4dc:
    // 0x49f4dc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x49f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x49f4e0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x49F4E0u;
    {
        const bool branch_taken_0x49f4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4E0u;
        // 0x49f4e4: 0x2c821001  sltiu       $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4e0) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F4E8u;
    // 0x49f4e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F4E8u;
    {
        const bool branch_taken_0x49f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4E8u;
        // 0x49f4ec: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4e8) {
            ctx->pc = 0x49F500u;
            goto label_49f500;
        }
    }
    ctx->pc = 0x49F4F0u;
    // 0x49f4f0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49F4F0u;
    {
        const bool branch_taken_0x49f4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4F0u;
        // 0x49f4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4f0) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F4F8u;
    // 0x49f4f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49F4F8u;
    {
        const bool branch_taken_0x49f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f4f8) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F500u;
label_49f500:
    // 0x49f500: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x49f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x49f504: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F504u;
    {
        const bool branch_taken_0x49f504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F504u;
        // 0x49f508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f504) {
            ctx->pc = 0x49F524u;
            goto label_49f524;
        }
    }
    ctx->pc = 0x49F50Cu;
    // 0x49f50c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49F50Cu;
    {
        const bool branch_taken_0x49f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f50c) {
            ctx->pc = 0x49F53Cu;
            goto label_49f53c;
        }
    }
    ctx->pc = 0x49F514u;
label_49f514:
    // 0x49f514: 0x3e00008  jr          $ra
    ctx->pc = 0x49F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F514u;
        // 0x49f518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F51Cu;
label_49f51c:
    // 0x49f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x49F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F51Cu;
        // 0x49f520: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F524u;
label_49f524:
    // 0x49f524: 0x3e00008  jr          $ra
    ctx->pc = 0x49F524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F524u;
        // 0x49f528: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F52Cu;
label_49f52c:
    // 0x49f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x49F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F52Cu;
        // 0x49f530: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F534u;
label_49f534:
    // 0x49f534: 0x3e00008  jr          $ra
    ctx->pc = 0x49F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F534u;
        // 0x49f538: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F53Cu;
label_49f53c:
    // 0x49f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x49F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F544u;
    // 0x49f544: 0x0  nop
    ctx->pc = 0x49f544u;
    // NOP
    ctx->pc = 0x49f548u;
}
