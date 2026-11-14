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

// Function: sub_004A1218
// Address: 0x4a1218 - 0x4a1278
void sub_004A1218_0x4a1218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1218_0x4a1218");
#endif

    switch (ctx->pc) {
        case 0x4a122cu: goto label_4a122c;
        case 0x4a1248u: goto label_4a1248;
        case 0x4a1264u: goto label_4a1264;
        default: break;
    }

    ctx->pc = 0x4a1218u;

    // 0x4a1218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a1218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a121c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a1220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a1224: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x4A1224u;
    SET_GPR_U32(ctx, 31, 0x4A122Cu);
    ctx->pc = 0x4A1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1224u;
    // 0x4a1228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A1224u, 0x4A122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A122Cu;
label_4a122c:
    // 0x4a122c: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x4a122cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x4a1230: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a1230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a1234: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1234u;
    {
        const bool branch_taken_0x4a1234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1234u;
        // 0x4a1238: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1234) {
            ctx->pc = 0x4A1250u;
            goto label_4a1250;
        }
    }
    ctx->pc = 0x4A123Cu;
    // 0x4a123c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1240: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4A1240u;
    SET_GPR_U32(ctx, 31, 0x4A1248u);
    ctx->pc = 0x4A1244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1240u;
    // 0x4a1244: 0x248486b0  addiu       $a0, $a0, -0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A1240u, 0x4A1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1248u;
label_4a1248:
    // 0x4a1248: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1248u;
    {
        const bool branch_taken_0x4a1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1248u;
        // 0x4a124c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1248) {
            ctx->pc = 0x4A1268u;
            goto label_4a1268;
        }
    }
    ctx->pc = 0x4A1250u;
label_4a1250:
    // 0x4a1250: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4a1250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x4a1254: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1254u;
    {
        const bool branch_taken_0x4a1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1254) {
            ctx->pc = 0x4A1258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1254u;
            // 0x4a1258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1268u;
            goto label_4a1268;
        }
    }
    ctx->pc = 0x4A125Cu;
    // 0x4a125c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A125Cu;
    SET_GPR_U32(ctx, 31, 0x4A1264u);
    ctx->pc = 0x4A1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A125Cu;
    // 0x4a1260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A125Cu, 0x4A1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1264u;
label_4a1264:
    // 0x4a1264: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a1264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1268:
    // 0x4a1268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a126c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A126Cu;
        // 0x4a1270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1274u;
    // 0x4a1274: 0x0  nop
    ctx->pc = 0x4a1274u;
    // NOP
    ctx->pc = 0x4a1278u;
}
