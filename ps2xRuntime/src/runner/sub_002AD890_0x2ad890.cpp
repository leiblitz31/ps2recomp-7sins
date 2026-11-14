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

// Function: sub_002AD890
// Address: 0x2ad890 - 0x2ad9d0
void sub_002AD890_0x2ad890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD890_0x2ad890");
#endif

    switch (ctx->pc) {
        case 0x2ad890u: goto label_2ad890;
        case 0x2ad894u: goto label_2ad894;
        case 0x2ad898u: goto label_2ad898;
        case 0x2ad89cu: goto label_2ad89c;
        case 0x2ad8a0u: goto label_2ad8a0;
        case 0x2ad8a4u: goto label_2ad8a4;
        case 0x2ad8a8u: goto label_2ad8a8;
        case 0x2ad8acu: goto label_2ad8ac;
        case 0x2ad8b0u: goto label_2ad8b0;
        case 0x2ad8b4u: goto label_2ad8b4;
        case 0x2ad8b8u: goto label_2ad8b8;
        case 0x2ad8bcu: goto label_2ad8bc;
        case 0x2ad8c0u: goto label_2ad8c0;
        case 0x2ad8c4u: goto label_2ad8c4;
        case 0x2ad8c8u: goto label_2ad8c8;
        case 0x2ad8ccu: goto label_2ad8cc;
        case 0x2ad8d0u: goto label_2ad8d0;
        case 0x2ad8d4u: goto label_2ad8d4;
        case 0x2ad8d8u: goto label_2ad8d8;
        case 0x2ad8dcu: goto label_2ad8dc;
        case 0x2ad8e0u: goto label_2ad8e0;
        case 0x2ad8e4u: goto label_2ad8e4;
        case 0x2ad8e8u: goto label_2ad8e8;
        case 0x2ad8ecu: goto label_2ad8ec;
        case 0x2ad8f0u: goto label_2ad8f0;
        case 0x2ad8f4u: goto label_2ad8f4;
        case 0x2ad8f8u: goto label_2ad8f8;
        case 0x2ad8fcu: goto label_2ad8fc;
        case 0x2ad900u: goto label_2ad900;
        case 0x2ad904u: goto label_2ad904;
        case 0x2ad908u: goto label_2ad908;
        case 0x2ad90cu: goto label_2ad90c;
        case 0x2ad910u: goto label_2ad910;
        case 0x2ad914u: goto label_2ad914;
        case 0x2ad918u: goto label_2ad918;
        case 0x2ad91cu: goto label_2ad91c;
        case 0x2ad920u: goto label_2ad920;
        case 0x2ad924u: goto label_2ad924;
        case 0x2ad928u: goto label_2ad928;
        case 0x2ad92cu: goto label_2ad92c;
        case 0x2ad930u: goto label_2ad930;
        case 0x2ad934u: goto label_2ad934;
        case 0x2ad938u: goto label_2ad938;
        case 0x2ad93cu: goto label_2ad93c;
        case 0x2ad940u: goto label_2ad940;
        case 0x2ad944u: goto label_2ad944;
        case 0x2ad948u: goto label_2ad948;
        case 0x2ad94cu: goto label_2ad94c;
        case 0x2ad950u: goto label_2ad950;
        case 0x2ad954u: goto label_2ad954;
        case 0x2ad958u: goto label_2ad958;
        case 0x2ad95cu: goto label_2ad95c;
        case 0x2ad960u: goto label_2ad960;
        case 0x2ad964u: goto label_2ad964;
        case 0x2ad968u: goto label_2ad968;
        case 0x2ad96cu: goto label_2ad96c;
        case 0x2ad970u: goto label_2ad970;
        case 0x2ad974u: goto label_2ad974;
        case 0x2ad978u: goto label_2ad978;
        case 0x2ad97cu: goto label_2ad97c;
        case 0x2ad980u: goto label_2ad980;
        case 0x2ad984u: goto label_2ad984;
        case 0x2ad988u: goto label_2ad988;
        case 0x2ad98cu: goto label_2ad98c;
        case 0x2ad990u: goto label_2ad990;
        case 0x2ad994u: goto label_2ad994;
        case 0x2ad998u: goto label_2ad998;
        case 0x2ad99cu: goto label_2ad99c;
        case 0x2ad9a0u: goto label_2ad9a0;
        case 0x2ad9a4u: goto label_2ad9a4;
        case 0x2ad9a8u: goto label_2ad9a8;
        case 0x2ad9acu: goto label_2ad9ac;
        case 0x2ad9b0u: goto label_2ad9b0;
        case 0x2ad9b4u: goto label_2ad9b4;
        case 0x2ad9b8u: goto label_2ad9b8;
        case 0x2ad9bcu: goto label_2ad9bc;
        case 0x2ad9c0u: goto label_2ad9c0;
        case 0x2ad9c4u: goto label_2ad9c4;
        case 0x2ad9c8u: goto label_2ad9c8;
        case 0x2ad9ccu: goto label_2ad9cc;
        default: break;
    }

    ctx->pc = 0x2ad890u;

label_2ad890:
    // 0x2ad890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ad894:
    // 0x2ad894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad898:
    // 0x2ad898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ad898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2ad89c:
    // 0x2ad89c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ad89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad8a0:
    // 0x2ad8a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ad8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ad8a4:
    // 0x2ad8a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ad8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ad8a8:
    // 0x2ad8a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ad8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ad8ac:
    // 0x2ad8ac: 0x320f809  jalr        $t9
label_2ad8b0:
    if (ctx->pc == 0x2AD8B0u) {
        ctx->pc = 0x2AD8B4u;
        goto label_2ad8b4;
    }
    ctx->pc = 0x2AD8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AD8B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD8ACu, 0x2AD8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD8B4u;
label_2ad8b4:
    // 0x2ad8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad8b8:
    // 0x2ad8b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ad8bc:
    // 0x2ad8bc: 0x3e00008  jr          $ra
label_2ad8c0:
    if (ctx->pc == 0x2AD8C0u) {
        ctx->pc = 0x2AD8C4u;
        goto label_2ad8c4;
    }
    ctx->pc = 0x2AD8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD8C4u;
label_2ad8c4:
    // 0x2ad8c4: 0x0  nop
    ctx->pc = 0x2ad8c4u;
    // NOP
label_2ad8c8:
    // 0x2ad8c8: 0x0  nop
    ctx->pc = 0x2ad8c8u;
    // NOP
label_2ad8cc:
    // 0x2ad8cc: 0x0  nop
    ctx->pc = 0x2ad8ccu;
    // NOP
label_2ad8d0:
    // 0x2ad8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ad8d4:
    // 0x2ad8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ad8d8:
    // 0x2ad8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ad8dc:
    // 0x2ad8dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ad8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2ad8e0:
    // 0x2ad8e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad8e4:
    // 0x2ad8e4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2ad8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ad8e8:
    // 0x2ad8e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ad8ec:
    if (ctx->pc == 0x2AD8ECu) {
        ctx->pc = 0x2AD8F0u;
        goto label_2ad8f0;
    }
    ctx->pc = 0x2AD8E8u;
    {
        const bool branch_taken_0x2ad8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8e8) {
            ctx->pc = 0x2AD8FCu;
            goto label_2ad8fc;
        }
    }
    ctx->pc = 0x2AD8F0u;
label_2ad8f0:
    // 0x2ad8f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad8f4:
    // 0x2ad8f4: 0x10000031  b           . + 4 + (0x31 << 2)
label_2ad8f8:
    if (ctx->pc == 0x2AD8F8u) {
        ctx->pc = 0x2AD8FCu;
        goto label_2ad8fc;
    }
    ctx->pc = 0x2AD8F4u;
    {
        const bool branch_taken_0x2ad8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8f4) {
            ctx->pc = 0x2AD9BCu;
            goto label_2ad9bc;
        }
    }
    ctx->pc = 0x2AD8FCu;
label_2ad8fc:
    // 0x2ad8fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad900:
    // 0x2ad900: 0xc0852ac  jal         func_214AB0
label_2ad904:
    if (ctx->pc == 0x2AD904u) {
        ctx->pc = 0x2AD908u;
        goto label_2ad908;
    }
    ctx->pc = 0x2AD900u;
    SET_GPR_U32(ctx, 31, 0x2AD908u);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x2AD900u, 0x2AD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD908u;
label_2ad908:
    // 0x2ad908: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2ad908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad90c:
    // 0x2ad90c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad910:
    // 0x2ad910: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ad910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad914:
    // 0x2ad914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ad914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ad918:
    // 0x2ad918: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ad918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ad91c:
    // 0x2ad91c: 0x320f809  jalr        $t9
label_2ad920:
    if (ctx->pc == 0x2AD920u) {
        ctx->pc = 0x2AD924u;
        goto label_2ad924;
    }
    ctx->pc = 0x2AD91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AD924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD91Cu, 0x2AD924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD924u;
label_2ad924:
    // 0x2ad924: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ad924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad928:
    // 0x2ad928: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2ad928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2ad92c:
    // 0x2ad92c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ad930:
    // 0x2ad930: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ad930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ad934:
    // 0x2ad934: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ad938:
    // 0x2ad938: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ad93c:
    // 0x2ad93c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2ad93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ad940:
    // 0x2ad940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad944:
    // 0x2ad944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad948:
    // 0x2ad948: 0xa0430071  sb          $v1, 0x71($v0)
    ctx->pc = 0x2ad948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 3));
label_2ad94c:
    // 0x2ad94c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad950:
    // 0x2ad950: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad954:
    // 0x2ad954: 0xc0ab504  jal         func_2AD410
label_2ad958:
    if (ctx->pc == 0x2AD958u) {
        ctx->pc = 0x2AD95Cu;
        goto label_2ad95c;
    }
    ctx->pc = 0x2AD954u;
    SET_GPR_U32(ctx, 31, 0x2AD95Cu);
    ctx->pc = 0x2AD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD410u, 0x2AD954u, 0x2AD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD95Cu;
label_2ad95c:
    // 0x2ad95c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad960:
    // 0x2ad960: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2ad960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2ad964:
    // 0x2ad964: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ad964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ad968:
    // 0x2ad968: 0xc0ac33c  jal         func_2B0CF0
label_2ad96c:
    if (ctx->pc == 0x2AD96Cu) {
        ctx->pc = 0x2AD970u;
        goto label_2ad970;
    }
    ctx->pc = 0x2AD968u;
    SET_GPR_U32(ctx, 31, 0x2AD970u);
    ctx->pc = 0x2B0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0CF0u, 0x2AD968u, 0x2AD970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD970u;
label_2ad970:
    // 0x2ad970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad974:
    // 0x2ad974: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ad978:
    // 0x2ad978: 0xc0ab674  jal         func_2AD9D0
label_2ad97c:
    if (ctx->pc == 0x2AD97Cu) {
        ctx->pc = 0x2AD980u;
        goto label_2ad980;
    }
    ctx->pc = 0x2AD978u;
    SET_GPR_U32(ctx, 31, 0x2AD980u);
    ctx->pc = 0x2AD9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD9D0u, 0x2AD978u, 0x2AD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD980u;
label_2ad980:
    // 0x2ad980: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad984:
    // 0x2ad984: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ad984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ad988:
    // 0x2ad988: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ad988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ad98c:
    // 0x2ad98c: 0xc0ac3ec  jal         func_2B0FB0
label_2ad990:
    if (ctx->pc == 0x2AD990u) {
        ctx->pc = 0x2AD994u;
        goto label_2ad994;
    }
    ctx->pc = 0x2AD98Cu;
    SET_GPR_U32(ctx, 31, 0x2AD994u);
    ctx->pc = 0x2B0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0FB0u, 0x2AD98Cu, 0x2AD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD994u;
label_2ad994:
    // 0x2ad994: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2ad994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2ad998:
    // 0x2ad998: 0x2484de70  addiu       $a0, $a0, -0x2190
    ctx->pc = 0x2ad998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958704));
label_2ad99c:
    // 0x2ad99c: 0xc0ac004  jal         func_2B0010
label_2ad9a0:
    if (ctx->pc == 0x2AD9A0u) {
        ctx->pc = 0x2AD9A4u;
        goto label_2ad9a4;
    }
    ctx->pc = 0x2AD99Cu;
    SET_GPR_U32(ctx, 31, 0x2AD9A4u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x2AD99Cu, 0x2AD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9A4u;
label_2ad9a4:
    // 0x2ad9a4: 0xaf82bc60  sw          $v0, -0x43A0($gp)
    ctx->pc = 0x2ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949984), GPR_U32(ctx, 2));
label_2ad9a8:
    // 0x2ad9a8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2ad9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2ad9ac:
    // 0x2ad9ac: 0x2484dea0  addiu       $a0, $a0, -0x2160
    ctx->pc = 0x2ad9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958752));
label_2ad9b0:
    // 0x2ad9b0: 0xc0ac004  jal         func_2B0010
label_2ad9b4:
    if (ctx->pc == 0x2AD9B4u) {
        ctx->pc = 0x2AD9B8u;
        goto label_2ad9b8;
    }
    ctx->pc = 0x2AD9B0u;
    SET_GPR_U32(ctx, 31, 0x2AD9B8u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x2AD9B0u, 0x2AD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9B8u;
label_2ad9b8:
    // 0x2ad9b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad9bc:
    // 0x2ad9bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad9c0:
    // 0x2ad9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad9c4:
    // 0x2ad9c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ad9c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ad9c8:
    // 0x2ad9c8: 0x3e00008  jr          $ra
label_2ad9cc:
    if (ctx->pc == 0x2AD9CCu) {
        ctx->pc = 0x2AD9D0u;
        goto label_fallthrough_0x2ad9c8;
    }
    ctx->pc = 0x2AD9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad9c8:
    ctx->pc = 0x2AD9D0u;
}
